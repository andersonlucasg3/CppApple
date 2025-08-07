using Shared.Projects;

namespace AppleFrameworks.Foundation;

public class FoundationModule : ModuleDefinition
{
    public override EModuleBinaryType BinaryType => EModuleBinaryType.DynamicLibrary;

    public override string Name => "Foundation";

    public override string SourcesRoot => "Sources";

    protected override void Configure(ProjectDefinition InOwnerProject)
    {
        PlatformSpecifics.Mac.AddFrameworkDependencies(
            "Foundation"
        );
    }
}