#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphMeta_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FunctionGraphMeta {
public:
    static HttpRequestDef genRequestDefForAsyncInvokeFunction();
    static HttpRequestDef genRequestDefForBatchDeleteFunctionTriggers();
    static HttpRequestDef genRequestDefForBatchDeleteWorkflows();
    static HttpRequestDef genRequestDefForCancelAsyncInvocation();
    static HttpRequestDef genRequestDefForCreateCallbackWorkflow();
    static HttpRequestDef genRequestDefForCreateDependencyVersion();
    static HttpRequestDef genRequestDefForCreateEvent();
    static HttpRequestDef genRequestDefForCreateFunction();
    static HttpRequestDef genRequestDefForCreateFunctionApp();
    static HttpRequestDef genRequestDefForCreateFunctionTrigger();
    static HttpRequestDef genRequestDefForCreateFunctionVersion();
    static HttpRequestDef genRequestDefForCreateTags();
    static HttpRequestDef genRequestDefForCreateVersionAlias();
    static HttpRequestDef genRequestDefForCreateVpcEndpoint();
    static HttpRequestDef genRequestDefForCreateWorkflow();
    static HttpRequestDef genRequestDefForDeleteDependencyVersion();
    static HttpRequestDef genRequestDefForDeleteEvent();
    static HttpRequestDef genRequestDefForDeleteFunction();
    static HttpRequestDef genRequestDefForDeleteFunctionApp();
    static HttpRequestDef genRequestDefForDeleteFunctionAsyncInvokeConfig();
    static HttpRequestDef genRequestDefForDeleteFunctionTrigger();
    static HttpRequestDef genRequestDefForDeleteTags();
    static HttpRequestDef genRequestDefForDeleteVersionAlias();
    static HttpRequestDef genRequestDefForDeleteVpcEndpoint();
    static HttpRequestDef genRequestDefForEnableAsyncStatusLog();
    static HttpRequestDef genRequestDefForEnableLtsLogs();
    static HttpRequestDef genRequestDefForExportFunction();
    static HttpRequestDef genRequestDefForImportFunction();
    static HttpRequestDef genRequestDefForInvokeFunction();
    static HttpRequestDef genRequestDefForListActiveAsyncInvocations();
    static HttpRequestDef genRequestDefForListAppTemplates();
    static HttpRequestDef genRequestDefForListAsyncInvocations();
    static HttpRequestDef genRequestDefForListBridgeFunctions();
    static HttpRequestDef genRequestDefForListBridgeVersions();
    static HttpRequestDef genRequestDefForListDependencies();
    static HttpRequestDef genRequestDefForListDependencyVersion();
    static HttpRequestDef genRequestDefForListEvents();
    static HttpRequestDef genRequestDefForListFunctionApplications();
    static HttpRequestDef genRequestDefForListFunctionAsMetric();
    static HttpRequestDef genRequestDefForListFunctionAsyncInvokeConfig();
    static HttpRequestDef genRequestDefForListFunctionReservedInstances();
    static HttpRequestDef genRequestDefForListFunctionStatistics();
    static HttpRequestDef genRequestDefForListFunctionTags();
    static HttpRequestDef genRequestDefForListFunctionTemplate();
    static HttpRequestDef genRequestDefForListFunctionTriggers();
    static HttpRequestDef genRequestDefForListFunctionVersions();
    static HttpRequestDef genRequestDefForListFunctions();
    static HttpRequestDef genRequestDefForListQuotas();
    static HttpRequestDef genRequestDefForListReservedInstanceConfigs();
    static HttpRequestDef genRequestDefForListStatistics();
    static HttpRequestDef genRequestDefForListVersionAliases();
    static HttpRequestDef genRequestDefForListWorkflow();
    static HttpRequestDef genRequestDefForListWorkflowExecutions();
    static HttpRequestDef genRequestDefForRetryWorkFlow();
    static HttpRequestDef genRequestDefForShowAppTemplate();
    static HttpRequestDef genRequestDefForShowDependencyVersion();
    static HttpRequestDef genRequestDefForShowEvent();
    static HttpRequestDef genRequestDefForShowFuncReservedInstanceMetrics();
    static HttpRequestDef genRequestDefForShowFuncSnapshotState();
    static HttpRequestDef genRequestDefForShowFunctionApp();
    static HttpRequestDef genRequestDefForShowFunctionAsyncInvokeConfig();
    static HttpRequestDef genRequestDefForShowFunctionCode();
    static HttpRequestDef genRequestDefForShowFunctionConfig();
    static HttpRequestDef genRequestDefForShowFunctionMetrics();
    static HttpRequestDef genRequestDefForShowFunctionTemplate();
    static HttpRequestDef genRequestDefForShowFunctionTrigger();
    static HttpRequestDef genRequestDefForShowLtsLogDetails();
    static HttpRequestDef genRequestDefForShowProjectAsyncStatusLogInfo();
    static HttpRequestDef genRequestDefForShowProjectTagsList();
    static HttpRequestDef genRequestDefForShowResInstanceInfo();
    static HttpRequestDef genRequestDefForShowTenantMetric();
    static HttpRequestDef genRequestDefForShowTracing();
    static HttpRequestDef genRequestDefForShowVersionAlias();
    static HttpRequestDef genRequestDefForShowWorkFlow();
    static HttpRequestDef genRequestDefForShowWorkFlowMetric();
    static HttpRequestDef genRequestDefForShowWorkflowExecution();
    static HttpRequestDef genRequestDefForShowWorkflowExecutionForPage();
    static HttpRequestDef genRequestDefForStartSyncWorkflowExecution();
    static HttpRequestDef genRequestDefForStartWorkflowExecution();
    static HttpRequestDef genRequestDefForStopWorkFlow();
    static HttpRequestDef genRequestDefForUpdateEvent();
    static HttpRequestDef genRequestDefForUpdateFuncSnapshot();
    static HttpRequestDef genRequestDefForUpdateFunctionAsyncInvokeConfig();
    static HttpRequestDef genRequestDefForUpdateFunctionCode();
    static HttpRequestDef genRequestDefForUpdateFunctionCollectState();
    static HttpRequestDef genRequestDefForUpdateFunctionConfig();
    static HttpRequestDef genRequestDefForUpdateFunctionMaxInstanceConfig();
    static HttpRequestDef genRequestDefForUpdateFunctionReservedInstancesCount();
    static HttpRequestDef genRequestDefForUpdateTracing();
    static HttpRequestDef genRequestDefForUpdateTrigger();
    static HttpRequestDef genRequestDefForUpdateVersionAlias();
    static HttpRequestDef genRequestDefForUpdateWorkFlow();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphMeta_H_
