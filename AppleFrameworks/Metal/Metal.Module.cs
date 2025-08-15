using Shared.Platforms;
using Shared.Projects;

namespace AppleFrameworks.Metal;

public class MetalModule : AModuleDefinition
{
    public override EModuleBinaryType BinaryType => EModuleBinaryType.DynamicLibrary;

    public override string Name => "Metal";

    public override string SourcesRoot => "Sources";

    protected override void Configure()
    {
        AddCompilerDefinition(ETargetPlatform.Any, "METAL_ENABLED");

        AddDependencyModuleNames(
            "Foundation"
        );

        PlatformSpecifics.Mac.AddFrameworkDependencies(
            "Metal"
        );
    }
}