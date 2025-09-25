#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineClient_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineClient_H_

#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartspipeline/v2/model/AcceptManualReviewRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/AcceptManualReviewResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/AgentPluginInfoQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchMovePipelineToGroupRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchMovePipelineToGroupResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesLatestStatusRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesLatestStatusResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesStatusRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesStatusResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/BusinessTypePluginsQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateBasicPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateBasicPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateIdRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateIdResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineByTemplateResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineGroupRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineGroupResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineNewRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineNewResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineTemplateRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePipelineTemplateResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePluginDraftRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePluginDraftResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePluginVersionRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePluginVersionResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreatePublisherResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateRuleReq.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateRuleRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateRuleResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateRuleSetReq.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/CreateStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteBasicPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteBasicPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineGroupRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineGroupResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineTemplateRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePipelineTemplateResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePluginDraftRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePluginDraftResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeletePublisherResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteRuleRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteRuleResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteStrategyResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/codeartspipeline/v2/model/ListAvailablePublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListAvailablePublisherResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListBasePluginsNewPostRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListBasePluginsNewPostResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListBasePluginsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListBasePluginsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPLuginVersionRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPLuginVersionResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineQuery.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineRunsQuery.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineRunsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineRunsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoRequestBody.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesQuery.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelinesRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelinesResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipleineBuildResultRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPipleineBuildResultResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPluginVersionNumberRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPluginVersionNumberResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPluginsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPluginsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListProjectStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListProjectStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListPublisherResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListRuleRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListRuleResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListStagePluginsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListStagePluginsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListTemplatesRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListTemplatesResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/LogQuery.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineByTemplateDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineExecuteStates.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupBindDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupCreateDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupUpdateDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineGroupVo.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineLatestRun.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineMoveToGroupResponseVo.h>
#include <huaweicloud/codeartspipeline/v2/model/PipelineTemplateDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginBasicDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginPartQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginInputVO.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginOutputVO.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginBindRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginBindResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginDraftRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginDraftResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/PublishPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/PublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/PublisherVO.h>
#include <huaweicloud/codeartspipeline/v2/model/RejectManualReviewRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RejectManualReviewResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/RemovePipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RemovePipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/RetryPipelineRunRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RetryPipelineRunResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RunPipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowBasicPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowBasicPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowInstanceStatusRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowInstanceStatusResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineArtifactsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineArtifactsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineDetailRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineDetailResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineGroupTreeRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineGroupTreeResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineLogRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineLogResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineRunDetailRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineRunDetailResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineTemplateDetailRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipelineTemplateDetailResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipleineStatusRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPipleineStatusResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginInputsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginInputsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginMetricsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginMetricsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginOutputsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginOutputsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginVersionRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPluginVersionResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowProjectStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowProjectStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPublisherRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowPublisherResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowRuleRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowRuleResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowStepOutputsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowStepOutputsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowTemplateDetailRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowTemplateDetailResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/StagePluginsQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/StartNewPipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/StartNewPipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/StartPipelineParameters.h>
#include <huaweicloud/codeartspipeline/v2/model/StopPipelineNewRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/StopPipelineNewResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/StopPipelineRunRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/StopPipelineRunResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/SwitchStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/SwitchStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/TemplateCddl.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateBasicPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateBasicPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineGroupRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineGroupResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineInfoRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineInfoResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineTemplateRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePipelineTemplateResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePluginBaseInfoRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePluginBaseInfoResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePluginDraftRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdatePluginDraftResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleReq.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleSetReq.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleSetStatusReq.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateStrategyRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UpdateStrategyResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadBasicPluginRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadBasicPluginRequestBody.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadBasicPluginResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPluginIconRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPluginIconRequestBody.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPluginIconResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPublisherIconRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPublisherIconRequestBody.h>
#include <huaweicloud/codeartspipeline/v2/model/UploadPublisherIconResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/codeartspipeline/v2/model/ActionsManualRunPipelineDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/ActionsPipelineRunsPollingQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/ActionsPipelineRunsQueryDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/ActionsReRunPipelineDTO.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteActionsRunPipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/DeleteActionsRunPipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsByRunIdsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsByRunIdsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/RetryRunActionsPipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RetryRunActionsPipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/RunActionsPipelineRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/RunActionsPipelineResponse.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowActionsRunsDetailRequest.h>
#include <huaweicloud/codeartspipeline/v2/model/ShowActionsRunsDetailResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartspipeline::V2::Model;

class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CodeArtsPipelineClient : public Client
{
public:

    CodeArtsPipelineClient();

    virtual ~CodeArtsPipelineClient();

    static ClientBuilder<CodeArtsPipelineClient> newBuilder();

    // 通过人工审核
    //
    // 通过人工审核
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AcceptManualReviewResponse> acceptManualReview(
        AcceptManualReviewRequest &request
    );
    // 批量把流水线移动到分组下
    //
    // 批量把流水线移动到分组下
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchMovePipelineToGroupResponse> batchMovePipelineToGroup(
        BatchMovePipelineToGroupRequest &request
    );
    // 批量获取流水线状态
    //
    // 批量获取流水线状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowPipelinesLatestStatusResponse> batchShowPipelinesLatestStatus(
        BatchShowPipelinesLatestStatusRequest &request
    );
    // 批量获取流水线状态
    //
    // 批量获取流水线状态和阶段信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowPipelinesStatusResponse> batchShowPipelinesStatus(
        BatchShowPipelinesStatusRequest &request
    );
    // 创建基础插件
    //
    // 创建基础插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBasicPluginResponse> createBasicPlugin(
        CreateBasicPluginRequest &request
    );
    // 基于模板快速创建流水线及流水线内任务
    //
    // 基于模板快速创建流水线及流水线内任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePipelineByTemplateResponse> createPipelineByTemplate(
        CreatePipelineByTemplateRequest &request
    );
    // 基于模板创建流水线
    //
    // 基于模板创建流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePipelineByTemplateIdResponse> createPipelineByTemplateId(
        CreatePipelineByTemplateIdRequest &request
    );
    // 新建流水线分组
    //
    // 新建流水线分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePipelineGroupResponse> createPipelineGroup(
        CreatePipelineGroupRequest &request
    );
    // 创建流水线
    //
    // 创建流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePipelineNewResponse> createPipelineNew(
        CreatePipelineNewRequest &request
    );
    // 创建流水线模板
    //
    // 创建流水线模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePipelineTemplateResponse> createPipelineTemplate(
        CreatePipelineTemplateRequest &request
    );
    // 创建插件草稿版本
    //
    // 创建插件草稿版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePluginDraftResponse> createPluginDraft(
        CreatePluginDraftRequest &request
    );
    // 创建插件版本
    //
    // 创建插件版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePluginVersionResponse> createPluginVersion(
        CreatePluginVersionRequest &request
    );
    // 创建发布商
    //
    // 创建发布商
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePublisherResponse> createPublisher(
        CreatePublisherRequest &request
    );
    // 创建规则
    //
    // 创建规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRuleResponse> createRule(
        CreateRuleRequest &request
    );
    // 创建策略
    //
    // 创建策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStrategyResponse> createStrategy(
        CreateStrategyRequest &request
    );
    // 删除基础插件
    //
    // 删除基础插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBasicPluginResponse> deleteBasicPlugin(
        DeleteBasicPluginRequest &request
    );
    // 删除流水线
    //
    // 删除流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePipelineResponse> deletePipeline(
        DeletePipelineRequest &request
    );
    // 删除流水线分组
    //
    // 删除流水线分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePipelineGroupResponse> deletePipelineGroup(
        DeletePipelineGroupRequest &request
    );
    // 删除流水线模板
    //
    // 删除流水线模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePipelineTemplateResponse> deletePipelineTemplate(
        DeletePipelineTemplateRequest &request
    );
    // 删除插件草稿
    //
    // 删除插件草稿
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePluginDraftResponse> deletePluginDraft(
        DeletePluginDraftRequest &request
    );
    // 删除发布商
    //
    // 删除发布商
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePublisherResponse> deletePublisher(
        DeletePublisherRequest &request
    );
    // 删除规则
    //
    // 删除规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRuleResponse> deleteRule(
        DeleteRuleRequest &request
    );
    // 删除策略
    //
    // 删除策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteStrategyResponse> deleteStrategy(
        DeleteStrategyRequest &request
    );
    // 查询可用发布商
    //
    // 查询可用发布商
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailablePublisherResponse> listAvailablePublisher(
        ListAvailablePublisherRequest &request
    );
    // 查询基础插件列表
    //
    // 查询基础插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBasePluginsResponse> listBasePlugins(
        ListBasePluginsRequest &request
    );
    // 分页查询可选插件列表
    //
    // 分页查询可选插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBasePluginsNewPostResponse> listBasePluginsNewPost(
        ListBasePluginsNewPostRequest &request
    );
    // 查询插件所有版本信息
    //
    // 查询插件所有版本信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPLuginVersionResponse> listPLuginVersion(
        ListPLuginVersionRequest &request
    );
    // 获取流水线执行记录
    //
    // 获取流水线执行记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipelineRunsResponse> listPipelineRuns(
        ListPipelineRunsRequest &request
    );
    // 获取流水线列表接口
    //
    // 获取流水线列表接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipelineSimpleInfoResponse> listPipelineSimpleInfo(
        ListPipelineSimpleInfoRequest &request
    );
    // 查询模板列表
    //
    // 查询流水线模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipelineTemplatesResponse> listPipelineTemplates(
        ListPipelineTemplatesRequest &request
    );
    // 获取流水线列表/获取项目下流水线执行状况
    //
    // 获取流水线列表/获取项目下流水线执行状况
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipelinesResponse> listPipelines(
        ListPipelinesRequest &request
    );
    // 获取项目下流水线执行状况
    //
    // 获取项目下流水线执行状况
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipleineBuildResultResponse> listPipleineBuildResult(
        ListPipleineBuildResultRequest &request
    );
    // 查询插件版本号
    //
    // 查询插件版本号
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginVersionNumberResponse> listPluginVersionNumber(
        ListPluginVersionNumberRequest &request
    );
    // 查询插件列表
    //
    // 查询插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginsResponse> listPlugins(
        ListPluginsRequest &request
    );
    // 获取规则模板实例列表
    //
    // 获取策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectStrategyResponse> listProjectStrategy(
        ListProjectStrategyRequest &request
    );
    // 查询发布商列表
    //
    // 查询发布商列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublisherResponse> listPublisher(
        ListPublisherRequest &request
    );
    // 分页获取规则列表
    //
    // 分页获取规则列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleResponse> listRule(
        ListRuleRequest &request
    );
    // 查询可选插件列表
    //
    // 查询可选插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStagePluginsResponse> listStagePlugins(
        ListStagePluginsRequest &request
    );
    // 获取策略列表
    //
    // 获取策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStrategyResponse> listStrategy(
        ListStrategyRequest &request
    );
    // 查询模板列表
    //
    // 查询模板列表，支持分页查询,支持模板名字模糊查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplatesResponse> listTemplates(
        ListTemplatesRequest &request
    );
    // 发布插件
    //
    // 发布插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishPluginResponse> publishPlugin(
        PublishPluginRequest &request
    );
    // 插件绑定发布商
    //
    // 插件绑定发布商
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishPluginBindResponse> publishPluginBind(
        PublishPluginBindRequest &request
    );
    // 发布插件草稿
    //
    // 发布插件草稿
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishPluginDraftResponse> publishPluginDraft(
        PublishPluginDraftRequest &request
    );
    // 驳回人工审核
    //
    // 驳回人工审核
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RejectManualReviewResponse> rejectManualReview(
        RejectManualReviewRequest &request
    );
    // 删除流水线
    //
    // 根据id删除流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemovePipelineResponse> removePipeline(
        RemovePipelineRequest &request
    );
    // 重试运行流水线
    //
    // 重试运行流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryPipelineRunResponse> retryPipelineRun(
        RetryPipelineRunRequest &request
    );
    // 启动流水线
    //
    // 启动流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunPipelineResponse> runPipeline(
        RunPipelineRequest &request
    );
    // 查询基础插件详情
    //
    // 查询基础插件详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBasicPluginResponse> showBasicPlugin(
        ShowBasicPluginRequest &request
    );
    // 检查流水线创建状态
    //
    // 检查流水线创建状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceStatusResponse> showInstanceStatus(
        ShowInstanceStatusRequest &request
    );
    // 查询流水线上的构建产物
    //
    // 查询流水线上的构建产物
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineArtifactsResponse> showPipelineArtifacts(
        ShowPipelineArtifactsRequest &request
    );
    // 查询流水线详情
    //
    // 查询流水线详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineDetailResponse> showPipelineDetail(
        ShowPipelineDetailRequest &request
    );
    // 查询流水线分组树
    //
    // 查询流水线分组树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineGroupTreeResponse> showPipelineGroupTree(
        ShowPipelineGroupTreeRequest &request
    );
    // 查询流水线日志
    //
    // 查询流水线日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineLogResponse> showPipelineLog(
        ShowPipelineLogRequest &request
    );
    // 获取流水线状态/获取流水线执行详情
    //
    // 获取流水线状态/获取流水线执行详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineRunDetailResponse> showPipelineRunDetail(
        ShowPipelineRunDetailRequest &request
    );
    // 查询模板详情
    //
    // 查询模板详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipelineTemplateDetailResponse> showPipelineTemplateDetail(
        ShowPipelineTemplateDetailRequest &request
    );
    // 获取流水线状态
    //
    // 获取流水线状态,阶段及任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPipleineStatusResponse> showPipleineStatus(
        ShowPipleineStatusRequest &request
    );
    // 查询插件输入配置
    //
    // 查询插件输入配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginInputsResponse> showPluginInputs(
        ShowPluginInputsRequest &request
    );
    // 查询插件指标配置
    //
    // 查询插件指标配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginMetricsResponse> showPluginMetrics(
        ShowPluginMetricsRequest &request
    );
    // 查询插件输出配置
    //
    // 查询插件输出配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginOutputsResponse> showPluginOutputs(
        ShowPluginOutputsRequest &request
    );
    // 查询插件版本详情
    //
    // 查询插件版本详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPluginVersionResponse> showPluginVersion(
        ShowPluginVersionRequest &request
    );
    // 
    //
    // 查询项目级策略详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectStrategyResponse> showProjectStrategy(
        ShowProjectStrategyRequest &request
    );
    // 查询发布商详情
    //
    // 查询发布商详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublisherResponse> showPublisher(
        ShowPublisherRequest &request
    );
    // 获取单条规则详情
    //
    // 获取单条规则详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRuleResponse> showRule(
        ShowRuleRequest &request
    );
    // 获取流水线步骤执行输出
    //
    // 获取流水线步骤执行输出
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStepOutputsResponse> showStepOutputs(
        ShowStepOutputsRequest &request
    );
    // 获取策略详情
    //
    // 获取策略详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStrategyResponse> showStrategy(
        ShowStrategyRequest &request
    );
    // 查询模板详情
    //
    // 查询模板详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTemplateDetailResponse> showTemplateDetail(
        ShowTemplateDetailRequest &request
    );
    // 启动流水线
    //
    // 启动流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartNewPipelineResponse> startNewPipeline(
        StartNewPipelineRequest &request
    );
    // 停止流水线
    //
    // 停止流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopPipelineNewResponse> stopPipelineNew(
        StopPipelineNewRequest &request
    );
    // 停止流水线
    //
    // 停止流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopPipelineRunResponse> stopPipelineRun(
        StopPipelineRunRequest &request
    );
    // 开关策略
    //
    // 修改策略状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchStrategyResponse> switchStrategy(
        SwitchStrategyRequest &request
    );
    // 更新基础插件
    //
    // 更新基础插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBasicPluginResponse> updateBasicPlugin(
        UpdateBasicPluginRequest &request
    );
    // 更新流水线分组
    //
    // 更新流水线分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePipelineGroupResponse> updatePipelineGroup(
        UpdatePipelineGroupRequest &request
    );
    // 修改流水线信息
    //
    // 修改流水线信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePipelineInfoResponse> updatePipelineInfo(
        UpdatePipelineInfoRequest &request
    );
    // 更新流水线模板
    //
    // 更新流水线模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePipelineTemplateResponse> updatePipelineTemplate(
        UpdatePipelineTemplateRequest &request
    );
    // 更新插件基本信息
    //
    // 更新插件基本信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePluginBaseInfoResponse> updatePluginBaseInfo(
        UpdatePluginBaseInfoRequest &request
    );
    // 更新插件草稿
    //
    // 更新插件草稿
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePluginDraftResponse> updatePluginDraft(
        UpdatePluginDraftRequest &request
    );
    // 更新规则
    //
    // 更新规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRuleResponse> updateRule(
        UpdateRuleRequest &request
    );
    // 修改策略
    //
    // 修改策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStrategyResponse> updateStrategy(
        UpdateStrategyRequest &request
    );
    // 上传基础插件
    //
    // 上传基础插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadBasicPluginResponse> uploadBasicPlugin(
        UploadBasicPluginRequest &request
    );
    // 更新插件图标
    //
    // 更新插件图标
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadPluginIconResponse> uploadPluginIcon(
        UploadPluginIconRequest &request
    );
    // 更新发布商图标
    //
    // 更新发布商图标
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadPublisherIconResponse> uploadPublisherIcon(
        UploadPublisherIconRequest &request
    );

    // 删除gitcode流水线运行详情
    //
    // 删除gitcode流水线运行详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteActionsRunPipelineResponse> deleteActionsRunPipeline(
        DeleteActionsRunPipelineRequest &request
    );
    // 查询gitcode流水线运行记录
    //
    // 查询gitcode流水线运行记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActionsPipelineRunsResponse> listActionsPipelineRuns(
        ListActionsPipelineRunsRequest &request
    );
    // 查询gitcode流水线action列表
    //
    // 查询gitcode流水线action列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActionsPipelineRunsByRunIdsResponse> listActionsPipelineRunsByRunIds(
        ListActionsPipelineRunsByRunIdsRequest &request
    );
    // 重试运行gitcode流水线
    //
    // 重试运行gitcode流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryRunActionsPipelineResponse> retryRunActionsPipeline(
        RetryRunActionsPipelineRequest &request
    );
    // 运行gitcode流水线
    //
    // 运行gitcode流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunActionsPipelineResponse> runActionsPipeline(
        RunActionsPipelineRequest &request
    );
    // 查询gitcode流水线运行详情
    //
    // 查询gitcode流水线运行详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowActionsRunsDetailResponse> showActionsRunsDetail(
        ShowActionsRunsDetailRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartspipeline::V2::CodeArtsPipelineClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_CodeArtsPipelineClient_H_

