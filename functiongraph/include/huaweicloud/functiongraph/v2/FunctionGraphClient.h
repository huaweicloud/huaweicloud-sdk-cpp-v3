#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphClient_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphClient_H_

#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/functiongraph/v2/model/AsyncInvokeFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/AsyncInvokeFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/BatchDeleteFunctionTriggersRequest.h>
#include <huaweicloud/functiongraph/v2/model/BatchDeleteFunctionTriggersResponse.h>
#include <huaweicloud/functiongraph/v2/model/BatchDeleteWorkflowsRequest.h>
#include <huaweicloud/functiongraph/v2/model/BatchDeleteWorkflowsResponse.h>
#include <huaweicloud/functiongraph/v2/model/CallbackWorkflowRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CancelAsyncInvocationRequest.h>
#include <huaweicloud/functiongraph/v2/model/CancelAsyncInvocationRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CancelAsyncInvocationResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateCallbackWorkflowRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateCallbackWorkflowResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateDependencyRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateDependencyVersionRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateDependencyVersionResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateEventRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateEventRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateEventResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionAppRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionAppRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionAppResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionTriggerRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionTriggerRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionTriggerResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionVersionRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionVersionRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateFunctionVersionResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateTagsRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateTagsResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateVersionAliasRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateVersionAliasRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateVersionAliasResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateVpcEndpointRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateVpcEndpointRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/CreateVpcEndpointResponse.h>
#include <huaweicloud/functiongraph/v2/model/CreateWorkflowRequest.h>
#include <huaweicloud/functiongraph/v2/model/CreateWorkflowResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteDependencyVersionRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteDependencyVersionResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteEventRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteEventResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionAppRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionAppResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionAsyncInvokeConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionAsyncInvokeConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionTriggerRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteFunctionTriggerResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteTagsRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteTagsResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteVersionAliasRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteVersionAliasResponse.h>
#include <huaweicloud/functiongraph/v2/model/DeleteVpcEndpointRequest.h>
#include <huaweicloud/functiongraph/v2/model/DeleteVpcEndpointResponse.h>
#include <huaweicloud/functiongraph/v2/model/EnableAsyncStatusLogRequest.h>
#include <huaweicloud/functiongraph/v2/model/EnableAsyncStatusLogResponse.h>
#include <huaweicloud/functiongraph/v2/model/EnableLtsLogsRequest.h>
#include <huaweicloud/functiongraph/v2/model/EnableLtsLogsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ExportFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/ExportFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/FlowExecuteBody.h>
#include <huaweicloud/functiongraph/v2/model/ImportFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/ImportFunctionRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/ImportFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/InvokeFunctionRequest.h>
#include <huaweicloud/functiongraph/v2/model/InvokeFunctionResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListActiveAsyncInvocationsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListActiveAsyncInvocationsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListAppTemplatesRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListAppTemplatesResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListAsyncInvocationsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListAsyncInvocationsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListBridgeFunctionsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListBridgeFunctionsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListBridgeVersionsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListBridgeVersionsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListDependenciesRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListDependenciesResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListDependencyVersionRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListDependencyVersionResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListEnterpriseResourceRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/ListEventsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListEventsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionApplicationsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionApplicationsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionAsMetricRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionAsMetricResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvokeConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvokeConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionReservedInstancesRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionReservedInstancesResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionResult.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionStatisticsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionStatisticsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTagsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTagsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTemplateRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTemplateResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTriggerResult.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTriggersRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionTriggersResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionVersionsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionVersionsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListQuotasRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListQuotasResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListReservedInstanceConfigsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListReservedInstanceConfigsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListStatisticsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListStatisticsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListVersionAliasResult.h>
#include <huaweicloud/functiongraph/v2/model/ListVersionAliasesRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListVersionAliasesResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListWorkflowExecutionsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListWorkflowExecutionsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ListWorkflowRequest.h>
#include <huaweicloud/functiongraph/v2/model/ListWorkflowResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/functiongraph/v2/model/RetryWorkFlowRequest.h>
#include <huaweicloud/functiongraph/v2/model/RetryWorkFlowResponse.h>
#include <huaweicloud/functiongraph/v2/model/ServiceBridgeVersion.h>
#include <huaweicloud/functiongraph/v2/model/ShowAppTemplateRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowAppTemplateResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowDependencyVersionRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowDependencyVersionResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowEventRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowEventResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFuncReservedInstanceMetricsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFuncReservedInstanceMetricsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFuncSnapshotStateRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFuncSnapshotStateResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionAppRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionAppResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionAsyncInvokeConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionAsyncInvokeConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionCodeRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionCodeResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionMetricsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionMetricsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionTemplateRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionTemplateResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionTriggerRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowFunctionTriggerResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowLtsLogDetailsRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowLtsLogDetailsResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowProjectAsyncStatusLogInfoRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowProjectAsyncStatusLogInfoResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowProjectTagsListRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowProjectTagsListResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowResInstanceInfoRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowResInstanceInfoResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowTenantMetricRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowTenantMetricResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowTracingRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowTracingResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowVersionAliasRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowVersionAliasResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkFlowMetricRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkFlowMetricResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkFlowRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkFlowResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionForPageRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionForPageResponse.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionRequest.h>
#include <huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionResponse.h>
#include <huaweicloud/functiongraph/v2/model/StartSyncWorkflowExecutionRequest.h>
#include <huaweicloud/functiongraph/v2/model/StartSyncWorkflowExecutionResponse.h>
#include <huaweicloud/functiongraph/v2/model/StartWorkflowExecutionRequest.h>
#include <huaweicloud/functiongraph/v2/model/StartWorkflowExecutionResponse.h>
#include <huaweicloud/functiongraph/v2/model/StopWorkFlowRequest.h>
#include <huaweicloud/functiongraph/v2/model/StopWorkFlowResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateEventRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateEventRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateEventResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFuncSnapshotRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFuncSnapshotResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionCodeRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionCodeRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionCodeResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionCollectStateRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionCollectStateResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionConfigRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionReservedInstancesCountRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionReservedInstancesCountRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionReservedInstancesCountResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateFunctionTagsRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTracingRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTracingRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTracingResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTriggerRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTriggerRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateTriggerResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateVersionAliasRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateVersionAliasRequestBody.h>
#include <huaweicloud/functiongraph/v2/model/UpdateVersionAliasResponse.h>
#include <huaweicloud/functiongraph/v2/model/UpdateWorkFlowRequest.h>
#include <huaweicloud/functiongraph/v2/model/UpdateWorkFlowResponse.h>
#include <huaweicloud/functiongraph/v2/model/WorkflowCreateBody.h>
#include <huaweicloud/functiongraph/v2/model/WorkflowDeleteBody.h>
#include <map>
#include <string>
#include <cpprest/details/basic_types.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Functiongraph::V2::Model;

class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FunctionGraphClient : public Client
{
public:

    FunctionGraphClient();

    virtual ~FunctionGraphClient();

    static ClientBuilder<FunctionGraphClient> newBuilder();

    // 异步执行函数
    //
    // 异步执行函数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AsyncInvokeFunctionResponse> asyncInvokeFunction(
        AsyncInvokeFunctionRequest &request
    );
    // 删除指定函数的所有触发器
    //
    // 删除指定函数所有触发器设置。
    // 
    // 在提供函数版本且非latest的情况下，删除对应函数版本的触发器。
    // 在提供函数别名的情况下，删除对应函数别名的触发器。
    // 在不提供函数版本（也不提供别名）或版本为latest的情况下，删除该函数所有的触发器（包括所有版本和别名）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteFunctionTriggersResponse> batchDeleteFunctionTriggers(
        BatchDeleteFunctionTriggersRequest &request
    );
    // 删除函数流
    //
    // 删除函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteWorkflowsResponse> batchDeleteWorkflows(
        BatchDeleteWorkflowsRequest &request
    );
    // 停止函数异步调用请求
    //
    // -| 当前仅支持参数recursive为false且force为true的函数。 在1：N的函数做并发异步调用的场景下调用停止异步请求接口时，同一函数实例同时在执行的其他请求也会被一并停止并返回4208 function invocation canceled
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelAsyncInvocationResponse> cancelAsyncInvocation(
        CancelAsyncInvocationRequest &request
    );
    // 回调工作流
    //
    // 回调工作流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCallbackWorkflowResponse> createCallbackWorkflow(
        CreateCallbackWorkflowRequest &request
    );
    // 创建依赖包版本
    //
    // 创建依赖包版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDependencyVersionResponse> createDependencyVersion(
        CreateDependencyVersionRequest &request
    );
    // 创建测试事件
    //
    // 创建测试事件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEventResponse> createEvent(
        CreateEventRequest &request
    );
    // 创建函数
    //
    // 创建指定的函数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFunctionResponse> createFunction(
        CreateFunctionRequest &request
    );
    // 创建应用程序
    //
    // 创建应用程序（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFunctionAppResponse> createFunctionApp(
        CreateFunctionAppRequest &request
    );
    // 创建触发器
    //
    // 创建触发器。
    // 
    // - 可以创建的触发器类型包括TIMER、APIG、CTS、DDS、DMS、DIS、LTS、OBS、SMN、KAFKA。
    // - DDS和KAFKA触发器创建时默认为DISABLED状态，其他触发器默认为ACTIVE状态。
    // - TIMER、DDS、DMS、KAFKA、LTS触发器支持禁用，其他触发器不支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFunctionTriggerResponse> createFunctionTrigger(
        CreateFunctionTriggerRequest &request
    );
    // 发布函数版本
    //
    // 发布函数版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFunctionVersionResponse> createFunctionVersion(
        CreateFunctionVersionRequest &request
    );
    // 创建资源标签
    //
    // 创建资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagsResponse> createTags(
        CreateTagsRequest &request
    );
    // 创建函数版本别名
    //
    // 创建函数灰度版本别名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVersionAliasResponse> createVersionAlias(
        CreateVersionAliasRequest &request
    );
    // 创建下沉入口
    //
    // 创建下沉入口。（该功能目前仅支持华北-北京四、华东-上海一、华东-上海二、西南-贵阳一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVpcEndpointResponse> createVpcEndpoint(
        CreateVpcEndpointRequest &request
    );
    // 创建函数流
    //
    // 创建函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWorkflowResponse> createWorkflow(
        CreateWorkflowRequest &request
    );
    // 删除依赖包版本
    //
    // 删除依赖包版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDependencyVersionResponse> deleteDependencyVersion(
        DeleteDependencyVersionRequest &request
    );
    // 删除指定测试事件
    //
    // 删除指定测试事件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEventResponse> deleteEvent(
        DeleteEventRequest &request
    );
    // 删除函数/版本
    //
    // 删除指定的函数或者特定的版本（不允许删除latest版本）。
    // 
    // 如果URN中包含函数版本或者别名，则删除特定的函数版本或者别名指向的版本以及该版本关联的trigger。
    // 如果URN中不包含版本或者别名，则删除整个函数，包含所有版本以及别名，触发器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFunctionResponse> deleteFunction(
        DeleteFunctionRequest &request
    );
    // 删除应用程序
    //
    // 删除应用程序（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFunctionAppResponse> deleteFunctionApp(
        DeleteFunctionAppRequest &request
    );
    // 删除函数异步配置信息
    //
    // 删除函数异步配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFunctionAsyncInvokeConfigResponse> deleteFunctionAsyncInvokeConfig(
        DeleteFunctionAsyncInvokeConfigRequest &request
    );
    // 删除触发器
    //
    // 删除触发器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFunctionTriggerResponse> deleteFunctionTrigger(
        DeleteFunctionTriggerRequest &request
    );
    // 删除资源标签
    //
    // 删除资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagsResponse> deleteTags(
        DeleteTagsRequest &request
    );
    // 删除函数版本别名
    //
    // 删除函数版本别名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVersionAliasResponse> deleteVersionAlias(
        DeleteVersionAliasRequest &request
    );
    // 删除下沉入口
    //
    // 删除下沉入口。（该功能目前仅支持华北-北京四、华东-上海一、华东-上海二、西南-贵阳一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVpcEndpointResponse> deleteVpcEndpoint(
        DeleteVpcEndpointRequest &request
    );
    // 允许异步状态通知
    //
    // 允许异步状态通知。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableAsyncStatusLogResponse> enableAsyncStatusLog(
        EnableAsyncStatusLogRequest &request
    );
    // 开通lts日志上报功能
    //
    // 开通lts日志上报功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableLtsLogsResponse> enableLtsLogs(
        EnableLtsLogsRequest &request
    );
    // 导出函数
    //
    // 导出函数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportFunctionResponse> exportFunction(
        ExportFunctionRequest &request
    );
    // 导入函数
    //
    // 导入函数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportFunctionResponse> importFunction(
        ImportFunctionRequest &request
    );
    // 同步执行函数
    //
    // 同步调用指的是客户端请求需要明确等到响应结果，也就是说这样的请求必须得调用到用户的函数，并且等到调用完成才返回。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InvokeFunctionResponse> invokeFunction(
        InvokeFunctionRequest &request
    );
    // 获取函数活跃异步调用请求列表
    //
    // 获取函数异步调用活跃请求列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListActiveAsyncInvocationsResponse> listActiveAsyncInvocations(
        ListActiveAsyncInvocationsRequest &request
    );
    // 查询应用程序模板列表
    //
    // 查询应用程序模板列表（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAppTemplatesResponse> listAppTemplates(
        ListAppTemplatesRequest &request
    );
    // 获取函数异步调用请求列表
    //
    // 获取函数异步调用请求列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAsyncInvocationsResponse> listAsyncInvocations(
        ListAsyncInvocationsRequest &request
    );
    // 获取指定函数绑定的servicebridge函数列表
    //
    // 获取指定函数绑定的servicebridge函数列表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBridgeFunctionsResponse> listBridgeFunctions(
        ListBridgeFunctionsRequest &request
    );
    // 获取servicebridge可用的版本
    //
    // 获取servicebridge可用的版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBridgeVersionsResponse> listBridgeVersions(
        ListBridgeVersionsRequest &request
    );
    // 获取依赖包列表
    //
    // 获取依赖包列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDependenciesResponse> listDependencies(
        ListDependenciesRequest &request
    );
    // 获取依赖包版本列表
    //
    // 获取依赖包版本列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDependencyVersionResponse> listDependencyVersion(
        ListDependencyVersionRequest &request
    );
    // 获取指定函数的测试事件列表
    //
    // 获取指定函数的测试事件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEventsResponse> listEvents(
        ListEventsRequest &request
    );
    // 查询应用程序列表
    //
    // 查询应用程序列表（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionApplicationsResponse> listFunctionApplications(
        ListFunctionApplicationsRequest &request
    );
    // 获取按指定指标排序的函数列表
    //
    // 按指定指标排序的函数列表。
    // 
    // 默认统计按错误次数指标统计最近一天失败次数最多的前10个函数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionAsMetricResponse> listFunctionAsMetric(
        ListFunctionAsMetricRequest &request
    );
    // 获取函数异步配置列表
    //
    // 获取指定函数所有版本的异步配置列表。。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionAsyncInvokeConfigResponse> listFunctionAsyncInvokeConfig(
        ListFunctionAsyncInvokeConfigRequest &request
    );
    // 获取函数预留实例数量
    //
    // 获取函数预留实例数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionReservedInstancesResponse> listFunctionReservedInstances(
        ListFunctionReservedInstancesRequest &request
    );
    // 获取指定时间段的函数运行指标
    //
    // 获取指定时间段的函数运行指标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionStatisticsResponse> listFunctionStatistics(
        ListFunctionStatisticsRequest &request
    );
    // 查询函数标签列表
    //
    // 查询函数标签列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionTagsResponse> listFunctionTags(
        ListFunctionTagsRequest &request
    );
    // 获取函数模板列表
    //
    // 获取函数模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionTemplateResponse> listFunctionTemplate(
        ListFunctionTemplateRequest &request
    );
    // 获取指定函数的所有触发器
    //
    // 获取指定函数的所有触发器设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionTriggersResponse> listFunctionTriggers(
        ListFunctionTriggersRequest &request
    );
    // 获取指定函数的版本列表
    //
    // 获取指定函数的版本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionVersionsResponse> listFunctionVersions(
        ListFunctionVersionsRequest &request
    );
    // 获取函数列表
    //
    // 获取函数列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFunctionsResponse> listFunctions(
        ListFunctionsRequest &request
    );
    // 查询租户配额
    //
    // 查询租户配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotasResponse> listQuotas(
        ListQuotasRequest &request
    );
    // 获取函数预留实例配置列表
    //
    // 获取函数预留实例配置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReservedInstanceConfigsResponse> listReservedInstanceConfigs(
        ListReservedInstanceConfigsRequest &request
    );
    // 租户函数统计信息
    //
    // 租户函数统计信息。
    // 
    // 返回三类的统计信息，函数格式和大小使用情况包括配额和使用量，流量报告。
    // 通过查询参数filter可以进行过滤，查询参数period可以指定返回的时间段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStatisticsResponse> listStatistics(
        ListStatisticsRequest &request
    );
    // 获取指定函数所有版本别名列表
    //
    // 获取函数版本别名列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVersionAliasesResponse> listVersionAliases(
        ListVersionAliasesRequest &request
    );
    // 查询函数流
    //
    // 查询函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkflowResponse> listWorkflow(
        ListWorkflowRequest &request
    );
    // 获取指定函数流执行实例列表
    //
    // 获取指定函数流执行实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkflowExecutionsResponse> listWorkflowExecutions(
        ListWorkflowExecutionsRequest &request
    );
    // 重试函数流
    //
    // 重试函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryWorkFlowResponse> retryWorkFlow(
        RetryWorkFlowRequest &request
    );
    // 查询应用程序模板详情
    //
    // 查询应用程序模板详情（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAppTemplateResponse> showAppTemplate(
        ShowAppTemplateRequest &request
    );
    // 获取依赖包版本详情
    //
    // 获取依赖包版本详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDependencyVersionResponse> showDependencyVersion(
        ShowDependencyVersionRequest &request
    );
    // 获取测试事件详细信息
    //
    // 获取测试事件详细信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEventResponse> showEvent(
        ShowEventRequest &request
    );
    // 查询函数实例使用情况指标
    //
    // 查询函数实例使用情况指标。
    // 
    // - 指标单位为分钟：
    //     当查询时间范围小于1小时,指标周期为1分钟
    //     当查询时间范围小于1天,指标周期为30分钟
    //     当查询时间范围大于1天,指标周期为180分钟
    // - 指标分为如下几类：reservedinstancenum（预留实例使用）、concurrency（实例使用/并发）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFuncReservedInstanceMetricsResponse> showFuncReservedInstanceMetrics(
        ShowFuncReservedInstanceMetricsRequest &request
    );
    // 查询函数快照制作状态
    //
    // 查询函数快照制作状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFuncSnapshotStateResponse> showFuncSnapshotState(
        ShowFuncSnapshotStateRequest &request
    );
    // 查询应用程序详情
    //
    // 查询应用程序详情（该功能目前仅支持华北-北京四、华东-上海一）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionAppResponse> showFunctionApp(
        ShowFunctionAppRequest &request
    );
    // 获取函数异步配置信息
    //
    // 获取指定函数某一版本的异步配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionAsyncInvokeConfigResponse> showFunctionAsyncInvokeConfig(
        ShowFunctionAsyncInvokeConfigRequest &request
    );
    // 获取指定函数代码
    //
    // 获取指定函数的代码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionCodeResponse> showFunctionCode(
        ShowFunctionCodeRequest &request
    );
    // 获取函数的metadata
    //
    // 获取指定函数的metadata。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionConfigResponse> showFunctionConfig(
        ShowFunctionConfigRequest &request
    );
    // 查询函数实例流量指标
    //
    // 查询函数流量指标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionMetricsResponse> showFunctionMetrics(
        ShowFunctionMetricsRequest &request
    );
    // 获取指定函数模板
    //
    // 获取指定函数模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionTemplateResponse> showFunctionTemplate(
        ShowFunctionTemplateRequest &request
    );
    // 获取指定触发器的信息
    //
    // 获取特定触发器的信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFunctionTriggerResponse> showFunctionTrigger(
        ShowFunctionTriggerRequest &request
    );
    // 获取指定函数的lts日志组日志流配置
    //
    // 获取指定函数的lts日志组日志流配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLtsLogDetailsResponse> showLtsLogDetails(
        ShowLtsLogDetailsRequest &request
    );
    // 查询异步日志详情
    //
    // 查询异步日志详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectAsyncStatusLogInfoResponse> showProjectAsyncStatusLogInfo(
        ShowProjectAsyncStatusLogInfoRequest &request
    );
    // 查询资源标签
    //
    // 查询资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectTagsListResponse> showProjectTagsList(
        ShowProjectTagsListRequest &request
    );
    // 查询资源实例
    //
    // 查询资源实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResInstanceInfoResponse> showResInstanceInfo(
        ShowResInstanceInfoRequest &request
    );
    // 获取函数流指标
    //
    // 获取函数流指标
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTenantMetricResponse> showTenantMetric(
        ShowTenantMetricRequest &request
    );
    // 获取函数调用链配置
    //
    // 获取函数调用链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTracingResponse> showTracing(
        ShowTracingRequest &request
    );
    // 获取函数版本的指定别名信息
    //
    // 获取函数指定的版本别名信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVersionAliasResponse> showVersionAlias(
        ShowVersionAliasRequest &request
    );
    // 获取指定函数流实例的元数据
    //
    // 获取指定函数流实例的元数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkFlowResponse> showWorkFlow(
        ShowWorkFlowRequest &request
    );
    // 获取指定函数流指标
    //
    // 获取指定函数流指标
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkFlowMetricResponse> showWorkFlowMetric(
        ShowWorkFlowMetricRequest &request
    );
    // 获取指定函数流执行实例
    //
    // 获取指定函数流执行实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowExecutionResponse> showWorkflowExecution(
        ShowWorkflowExecutionRequest &request
    );
    // 分页获取指定函数流执行实例列表
    //
    // 分页获取指定函数流执行实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowExecutionForPageResponse> showWorkflowExecutionForPage(
        ShowWorkflowExecutionForPageRequest &request
    );
    // 同步执行函数流
    //
    // 以同步执行方式启动函数流（仅快速模式函数流支持）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartSyncWorkflowExecutionResponse> startSyncWorkflowExecution(
        StartSyncWorkflowExecutionRequest &request
    );
    // 开始执行函数流
    //
    // 以异步执行方式启动函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartWorkflowExecutionResponse> startWorkflowExecution(
        StartWorkflowExecutionRequest &request
    );
    // 停止函数流
    //
    // 停止函数流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopWorkFlowResponse> stopWorkFlow(
        StopWorkFlowRequest &request
    );
    // 更新测试事件详细信息
    //
    // 更新测试事件详细信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateEventResponse> updateEvent(
        UpdateEventRequest &request
    );
    // 禁用/启动函数快照
    //
    // 禁用/启动函数快照，仅支持java运行时函数，且为非latest版本才能开启函数快照功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFuncSnapshotResponse> updateFuncSnapshot(
        UpdateFuncSnapshotRequest &request
    );
    // 设置函数异步配置信息
    //
    // 设置函数异步配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionAsyncInvokeConfigResponse> updateFunctionAsyncInvokeConfig(
        UpdateFunctionAsyncInvokeConfigRequest &request
    );
    // 修改函数代码
    //
    // 修改指定的函数的代码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionCodeResponse> updateFunctionCode(
        UpdateFunctionCodeRequest &request
    );
    // 更新函数置顶状态
    //
    // 更新函数置顶状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionCollectStateResponse> updateFunctionCollectState(
        UpdateFunctionCollectStateRequest &request
    );
    // 修改函数的metadata信息
    //
    // 修改指定的函数的metadata信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionConfigResponse> updateFunctionConfig(
        UpdateFunctionConfigRequest &request
    );
    // 更新函数最大实例数
    //
    // 更新函数最大实例数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionMaxInstanceConfigResponse> updateFunctionMaxInstanceConfig(
        UpdateFunctionMaxInstanceConfigRequest &request
    );
    // 修改函数预留实例数量
    //
    // 修改函数预留实例数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFunctionReservedInstancesCountResponse> updateFunctionReservedInstancesCount(
        UpdateFunctionReservedInstancesCountRequest &request
    );
    // 修改函数调用链配置
    //
    // 修改函数调用链配置,开通/修改传入aksk，关闭aksk传空
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTracingResponse> updateTracing(
        UpdateTracingRequest &request
    );
    // 更新触发器
    //
    // 更新触发器
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTriggerResponse> updateTrigger(
        UpdateTriggerRequest &request
    );
    // 修改函数版本别名信息
    //
    // 修改函数版本别名信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVersionAliasResponse> updateVersionAlias(
        UpdateVersionAliasRequest &request
    );
    // 修改指定函数流实例的元数据
    //
    // 修改指定函数流实例的元数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWorkFlowResponse> updateWorkFlow(
        UpdateWorkFlowRequest &request
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

template class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Functiongraph::V2::FunctionGraphClient>;

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_FunctionGraphClient_H_

