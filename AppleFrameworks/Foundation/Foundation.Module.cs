using Shared.Projects;

namespace AppleFrameworks.Foundation;

public class FoundationModule : AModuleDefinition
{
    public override EModuleBinaryType BinaryType => EModuleBinaryType.DynamicLibrary;

    public override string Name => "Foundation";

    public override string SourcesRoot => "Sources";

    protected override void Configure()
    {
        PlatformSpecifics.Mac.AddFrameworkDependencies(
            "Foundation"
        );
    }
}