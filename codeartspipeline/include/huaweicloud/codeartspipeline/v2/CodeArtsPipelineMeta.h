#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineMeta_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CodeArtsPipelineMeta {
public:
    static HttpRequestDef genRequestDefForAcceptManualReview();
    static HttpRequestDef genRequestDefForBatchMovePipelineToGroup();
    static HttpRequestDef genRequestDefForBatchShowPipelinesLatestStatus();
    static HttpRequestDef genRequestDefForBatchShowPipelinesStatus();
    static HttpRequestDef genRequestDefForCreateBasicPlugin();
    static HttpRequestDef genRequestDefForCreatePipelineByTemplate();
    static HttpRequestDef genRequestDefForCreatePipelineByTemplateId();
    static HttpRequestDef genRequestDefForCreatePipelineGroup();
    static HttpRequestDef genRequestDefForCreatePipelineNew();
    static HttpRequestDef genRequestDefForCreatePipelineTemplate();
    static HttpRequestDef genRequestDefForCreatePluginDraft();
    static HttpRequestDef genRequestDefForCreatePluginVersion();
    static HttpRequestDef genRequestDefForCreatePublisher();
    static HttpRequestDef genRequestDefForCreateRule();
    static HttpRequestDef genRequestDefForCreateStrategy();
    static HttpRequestDef genRequestDefForDeleteBasicPlugin();
    static HttpRequestDef genRequestDefForDeletePipeline();
    static HttpRequestDef genRequestDefForDeletePipelineGroup();
    static HttpRequestDef genRequestDefForDeletePipelineTemplate();
    static HttpRequestDef genRequestDefForDeletePluginDraft();
    static HttpRequestDef genRequestDefForDeletePublisher();
    static HttpRequestDef genRequestDefForDeleteRule();
    static HttpRequestDef genRequestDefForDeleteStrategy();
    static HttpRequestDef genRequestDefForListAvailablePublisher();
    static HttpRequestDef genRequestDefForListBasePlugins();
    static HttpRequestDef genRequestDefForListBasePluginsNewPost();
    static HttpRequestDef genRequestDefForListPLuginVersion();
    static HttpRequestDef genRequestDefForListPipelineRuns();
    static HttpRequestDef genRequestDefForListPipelineSimpleInfo();
    static HttpRequestDef genRequestDefForListPipelineTemplates();
    static HttpRequestDef genRequestDefForListPipelines();
    static HttpRequestDef genRequestDefForListPipleineBuildResult();
    static HttpRequestDef genRequestDefForListPluginVersionNumber();
    static HttpRequestDef genRequestDefForListPlugins();
    static HttpRequestDef genRequestDefForListProjectStrategy();
    static HttpRequestDef genRequestDefForListPublisher();
    static HttpRequestDef genRequestDefForListRule();
    static HttpRequestDef genRequestDefForListStagePlugins();
    static HttpRequestDef genRequestDefForListStrategy();
    static HttpRequestDef genRequestDefForListTemplates();
    static HttpRequestDef genRequestDefForPublishPlugin();
    static HttpRequestDef genRequestDefForPublishPluginBind();
    static HttpRequestDef genRequestDefForPublishPluginDraft();
    static HttpRequestDef genRequestDefForRejectManualReview();
    static HttpRequestDef genRequestDefForRemovePipeline();
    static HttpRequestDef genRequestDefForRetryPipelineRun();
    static HttpRequestDef genRequestDefForRunPipeline();
    static HttpRequestDef genRequestDefForShowBasicPlugin();
    static HttpRequestDef genRequestDefForShowInstanceStatus();
    static HttpRequestDef genRequestDefForShowPipelineArtifacts();
    static HttpRequestDef genRequestDefForShowPipelineDetail();
    static HttpRequestDef genRequestDefForShowPipelineGroupTree();
    static HttpRequestDef genRequestDefForShowPipelineLog();
    static HttpRequestDef genRequestDefForShowPipelineRunDetail();
    static HttpRequestDef genRequestDefForShowPipelineTemplateDetail();
    static HttpRequestDef genRequestDefForShowPipleineStatus();
    static HttpRequestDef genRequestDefForShowPluginInputs();
    static HttpRequestDef genRequestDefForShowPluginMetrics();
    static HttpRequestDef genRequestDefForShowPluginOutputs();
    static HttpRequestDef genRequestDefForShowPluginVersion();
    static HttpRequestDef genRequestDefForShowProjectStrategy();
    static HttpRequestDef genRequestDefForShowPublisher();
    static HttpRequestDef genRequestDefForShowRule();
    static HttpRequestDef genRequestDefForShowStepOutputs();
    static HttpRequestDef genRequestDefForShowStrategy();
    static HttpRequestDef genRequestDefForShowTemplateDetail();
    static HttpRequestDef genRequestDefForStartNewPipeline();
    static HttpRequestDef genRequestDefForStopPipelineNew();
    static HttpRequestDef genRequestDefForStopPipelineRun();
    static HttpRequestDef genRequestDefForSwitchStrategy();
    static HttpRequestDef genRequestDefForUpdateBasicPlugin();
    static HttpRequestDef genRequestDefForUpdatePipelineGroup();
    static HttpRequestDef genRequestDefForUpdatePipelineInfo();
    static HttpRequestDef genRequestDefForUpdatePipelineTemplate();
    static HttpRequestDef genRequestDefForUpdatePluginBaseInfo();
    static HttpRequestDef genRequestDefForUpdatePluginDraft();
    static HttpRequestDef genRequestDefForUpdateRule();
    static HttpRequestDef genRequestDefForUpdateStrategy();
    static HttpRequestDef genRequestDefForUploadBasicPlugin();
    static HttpRequestDef genRequestDefForUploadPluginIcon();
    static HttpRequestDef genRequestDefForUploadPublisherIcon();
    static HttpRequestDef genRequestDefForDeleteActionsRunPipeline();
    static HttpRequestDef genRequestDefForListActionsPipelineRuns();
    static HttpRequestDef genRequestDefForListActionsPipelineRunsByRunIds();
    static HttpRequestDef genRequestDefForRetryRunActionsPipeline();
    static HttpRequestDef genRequestDefForRunActionsPipeline();
    static HttpRequestDef genRequestDefForShowActionsRunsDetail();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineMeta_H_
