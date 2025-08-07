using AppleFrameworks.Foundation;
using AppleFrameworks.Metal;
using Shared.Projects;

namespace AppleFrameworks.Projects;

public class AppleFrameworksProject : ProjectDefinition
{
    public override string Name => "AppleFrameworks";

    public override string SourcesRoot => ".";

    protected override void Configure()
    {
        AddModule<FoundationModule>();
        AddModule<MetalModule>();
    }
}