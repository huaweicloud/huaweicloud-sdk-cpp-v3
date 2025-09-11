#include <huaweicloud/functiongraph/v2/FunctionGraphClient.h>
#include <huaweicloud/functiongraph/v2/FunctionGraphMeta.h>

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

template <typename T>
std::string toString(const T value)
{
    std::ostringstream out;
    out << std::setprecision(std::numeric_limits<T>::digits10) << std::fixed << value;
    return out.str();
}

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {

using namespace HuaweiCloud::Sdk::Functiongraph::V2::Model;

FunctionGraphClient::FunctionGraphClient()
{
}

FunctionGraphClient::~FunctionGraphClient()
{
}

ClientBuilder<FunctionGraphClient> FunctionGraphClient::newBuilder()
{
    ClientBuilder<FunctionGraphClient> client = ClientBuilder<FunctionGraphClient>("BasicCredentials");
    return client;
}
std::shared_ptr<AsyncInvokeFunctionResponse> FunctionGraphClient::asyncInvokeFunction(AsyncInvokeFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/invocations-async";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }
    if (request.xCffInstanceMemoryIsSet()) {
        localVarHeaderParams["X-Cff-Instance-Memory"] = parameterToString(request.getXCffInstanceMemory());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForAsyncInvokeFunction());

    std::shared_ptr<AsyncInvokeFunctionResponse> localVarResult = std::make_shared<AsyncInvokeFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<BatchDeleteFunctionTriggersResponse> FunctionGraphClient::batchDeleteFunctionTriggers(BatchDeleteFunctionTriggersRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForBatchDeleteFunctionTriggers());

    std::shared_ptr<BatchDeleteFunctionTriggersResponse> localVarResult = std::make_shared<BatchDeleteFunctionTriggersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BatchDeleteWorkflowsResponse> FunctionGraphClient::batchDeleteWorkflows(BatchDeleteWorkflowsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForBatchDeleteWorkflows());

    std::shared_ptr<BatchDeleteWorkflowsResponse> localVarResult = std::make_shared<BatchDeleteWorkflowsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CancelAsyncInvocationResponse> FunctionGraphClient::cancelAsyncInvocation(CancelAsyncInvocationRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/cancel";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCancelAsyncInvocation());

    std::shared_ptr<CancelAsyncInvocationResponse> localVarResult = std::make_shared<CancelAsyncInvocationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateCallbackWorkflowResponse> FunctionGraphClient::createCallbackWorkflow(CreateCallbackWorkflowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/callback";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xWorkflowRunIdIsSet()) {
        localVarHeaderParams["X-Workflow-Run-Id"] = parameterToString(request.getXWorkflowRunId());
    }
    if (request.xWorkflowStateIdIsSet()) {
        localVarHeaderParams["X-Workflow-State-Id"] = parameterToString(request.getXWorkflowStateId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateCallbackWorkflow());

    std::shared_ptr<CreateCallbackWorkflowResponse> localVarResult = std::make_shared<CreateCallbackWorkflowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateDependencyVersionResponse> FunctionGraphClient::createDependencyVersion(CreateDependencyVersionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/dependencies/version";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateDependencyVersion());

    std::shared_ptr<CreateDependencyVersionResponse> localVarResult = std::make_shared<CreateDependencyVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateEventResponse> FunctionGraphClient::createEvent(CreateEventRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/events";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateEvent());

    std::shared_ptr<CreateEventResponse> localVarResult = std::make_shared<CreateEventResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateFunctionResponse> FunctionGraphClient::createFunction(CreateFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateFunction());

    std::shared_ptr<CreateFunctionResponse> localVarResult = std::make_shared<CreateFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateFunctionAppResponse> FunctionGraphClient::createFunctionApp(CreateFunctionAppRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/applications";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateFunctionApp());

    std::shared_ptr<CreateFunctionAppResponse> localVarResult = std::make_shared<CreateFunctionAppResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateFunctionTriggerResponse> FunctionGraphClient::createFunctionTrigger(CreateFunctionTriggerRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateFunctionTrigger());

    std::shared_ptr<CreateFunctionTriggerResponse> localVarResult = std::make_shared<CreateFunctionTriggerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateFunctionVersionResponse> FunctionGraphClient::createFunctionVersion(CreateFunctionVersionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/versions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateFunctionVersion());

    std::shared_ptr<CreateFunctionVersionResponse> localVarResult = std::make_shared<CreateFunctionVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateTagsResponse> FunctionGraphClient::createTags(CreateTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/{resource_type}/{resource_id}/tags/create";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_type"] = parameterToString(request.getResourceType());
    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateTags());

    std::shared_ptr<CreateTagsResponse> localVarResult = std::make_shared<CreateTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateVersionAliasResponse> FunctionGraphClient::createVersionAlias(CreateVersionAliasRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/aliases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateVersionAlias());

    std::shared_ptr<CreateVersionAliasResponse> localVarResult = std::make_shared<CreateVersionAliasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateVpcEndpointResponse> FunctionGraphClient::createVpcEndpoint(CreateVpcEndpointRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/vpc-endpoint";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateVpcEndpoint());

    std::shared_ptr<CreateVpcEndpointResponse> localVarResult = std::make_shared<CreateVpcEndpointResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateWorkflowResponse> FunctionGraphClient::createWorkflow(CreateWorkflowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForCreateWorkflow());

    std::shared_ptr<CreateWorkflowResponse> localVarResult = std::make_shared<CreateWorkflowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteDependencyVersionResponse> FunctionGraphClient::deleteDependencyVersion(DeleteDependencyVersionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/dependencies/{depend_id}/version/{version}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["depend_id"] = parameterToString(request.getDependId());
    localVarPathParams["version"] = parameterToString(request.getVersion());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteDependencyVersion());

    std::shared_ptr<DeleteDependencyVersionResponse> localVarResult = std::make_shared<DeleteDependencyVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteEventResponse> FunctionGraphClient::deleteEvent(DeleteEventRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/events/{event_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["event_id"] = parameterToString(request.getEventId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteEvent());

    std::shared_ptr<DeleteEventResponse> localVarResult = std::make_shared<DeleteEventResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteFunctionResponse> FunctionGraphClient::deleteFunction(DeleteFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteFunction());

    std::shared_ptr<DeleteFunctionResponse> localVarResult = std::make_shared<DeleteFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteFunctionAppResponse> FunctionGraphClient::deleteFunctionApp(DeleteFunctionAppRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/applications/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteFunctionApp());

    std::shared_ptr<DeleteFunctionAppResponse> localVarResult = std::make_shared<DeleteFunctionAppResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteFunctionAsyncInvokeConfigResponse> FunctionGraphClient::deleteFunctionAsyncInvokeConfig(DeleteFunctionAsyncInvokeConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/async-invoke-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteFunctionAsyncInvokeConfig());

    std::shared_ptr<DeleteFunctionAsyncInvokeConfigResponse> localVarResult = std::make_shared<DeleteFunctionAsyncInvokeConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteFunctionTriggerResponse> FunctionGraphClient::deleteFunctionTrigger(DeleteFunctionTriggerRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}/{trigger_type_code}/{trigger_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["trigger_type_code"] = parameterToString(request.getTriggerTypeCode());
    localVarPathParams["trigger_id"] = parameterToString(request.getTriggerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteFunctionTrigger());

    std::shared_ptr<DeleteFunctionTriggerResponse> localVarResult = std::make_shared<DeleteFunctionTriggerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteTagsResponse> FunctionGraphClient::deleteTags(DeleteTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/{resource_type}/{resource_id}/tags/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_type"] = parameterToString(request.getResourceType());
    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteTags());

    std::shared_ptr<DeleteTagsResponse> localVarResult = std::make_shared<DeleteTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteVersionAliasResponse> FunctionGraphClient::deleteVersionAlias(DeleteVersionAliasRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/aliases/{alias_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["alias_name"] = parameterToString(request.getAliasName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteVersionAlias());

    std::shared_ptr<DeleteVersionAliasResponse> localVarResult = std::make_shared<DeleteVersionAliasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteVpcEndpointResponse> FunctionGraphClient::deleteVpcEndpoint(DeleteVpcEndpointRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/vpc-endpoint/{vpc_id}/{subnet_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["vpc_id"] = parameterToString(request.getVpcId());
    localVarPathParams["subnet_id"] = parameterToString(request.getSubnetId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForDeleteVpcEndpoint());

    std::shared_ptr<DeleteVpcEndpointResponse> localVarResult = std::make_shared<DeleteVpcEndpointResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableAsyncStatusLogResponse> FunctionGraphClient::enableAsyncStatusLog(EnableAsyncStatusLogRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/enable-async-status-logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForEnableAsyncStatusLog());

    std::shared_ptr<EnableAsyncStatusLogResponse> localVarResult = std::make_shared<EnableAsyncStatusLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableLtsLogsResponse> FunctionGraphClient::enableLtsLogs(EnableLtsLogsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/enable-lts-logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForEnableLtsLogs());

    std::shared_ptr<EnableLtsLogsResponse> localVarResult = std::make_shared<EnableLtsLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExportFunctionResponse> FunctionGraphClient::exportFunction(ExportFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/export";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.configIsSet()) {
        localVarQueryParams["config"] = parameterToString(request.isConfig());
    }
    if (request.codeIsSet()) {
        localVarQueryParams["code"] = parameterToString(request.isCode());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForExportFunction());

    std::shared_ptr<ExportFunctionResponse> localVarResult = std::make_shared<ExportFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ImportFunctionResponse> FunctionGraphClient::importFunction(ImportFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/import";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForImportFunction());

    std::shared_ptr<ImportFunctionResponse> localVarResult = std::make_shared<ImportFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<InvokeFunctionResponse> FunctionGraphClient::invokeFunction(InvokeFunctionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/invocations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }
    if (request.xCffLogTypeIsSet()) {
        localVarHeaderParams["X-Cff-Log-Type"] = parameterToString(request.getXCffLogType());
    }
    if (request.xCFFRequestVersionIsSet()) {
        localVarHeaderParams["X-CFF-Request-Version"] = parameterToString(request.getXCFFRequestVersion());
    }
    if (request.xCffInstanceMemoryIsSet()) {
        localVarHeaderParams["X-Cff-Instance-Memory"] = parameterToString(request.getXCffInstanceMemory());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForInvokeFunction());

    std::shared_ptr<InvokeFunctionResponse> localVarResult = std::make_shared<InvokeFunctionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListActiveAsyncInvocationsResponse> FunctionGraphClient::listActiveAsyncInvocations(ListActiveAsyncInvocationsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/active-async-invocations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.requestsIsSet()) {
        localVarQueryParams["requests"] = parameterToString(request.getRequests());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.queryBeginTimeIsSet()) {
        localVarQueryParams["query_begin_time"] = parameterToString(request.getQueryBeginTime());
    }
    if (request.queryEndTimeIsSet()) {
        localVarQueryParams["query_end_time"] = parameterToString(request.getQueryEndTime());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListActiveAsyncInvocations());

    std::shared_ptr<ListActiveAsyncInvocationsResponse> localVarResult = std::make_shared<ListActiveAsyncInvocationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAppTemplatesResponse> FunctionGraphClient::listAppTemplates(ListAppTemplatesRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/application/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.runtimeIsSet()) {
        localVarQueryParams["runtime"] = parameterToString(request.getRuntime());
    }
    if (request.categoryIsSet()) {
        localVarQueryParams["category"] = parameterToString(request.getCategory());
    }
    if (request.xLanguageIsSet()) {
        localVarHeaderParams["X-Language"] = parameterToString(request.getXLanguage());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListAppTemplates());

    std::shared_ptr<ListAppTemplatesResponse> localVarResult = std::make_shared<ListAppTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAsyncInvocationsResponse> FunctionGraphClient::listAsyncInvocations(ListAsyncInvocationsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/async-invocations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.requestIdIsSet()) {
        localVarQueryParams["request_id"] = parameterToString(request.getRequestId());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.queryBeginTimeIsSet()) {
        localVarQueryParams["query_begin_time"] = parameterToString(request.getQueryBeginTime());
    }
    if (request.queryEndTimeIsSet()) {
        localVarQueryParams["query_end_time"] = parameterToString(request.getQueryEndTime());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListAsyncInvocations());

    std::shared_ptr<ListAsyncInvocationsResponse> localVarResult = std::make_shared<ListAsyncInvocationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBridgeFunctionsResponse> FunctionGraphClient::listBridgeFunctions(ListBridgeFunctionsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/servicebridge/relation";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListBridgeFunctions());

    std::shared_ptr<ListBridgeFunctionsResponse> localVarResult = std::make_shared<ListBridgeFunctionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBridgeVersionsResponse> FunctionGraphClient::listBridgeVersions(ListBridgeVersionsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/servicebridge/version";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListBridgeVersions());

    std::shared_ptr<ListBridgeVersionsResponse> localVarResult = std::make_shared<ListBridgeVersionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDependenciesResponse> FunctionGraphClient::listDependencies(ListDependenciesRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/dependencies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.ispublicIsSet()) {
        localVarQueryParams["ispublic"] = parameterToString(request.getIspublic());
    }
    if (request.dependencyTypeIsSet()) {
        localVarQueryParams["dependency_type"] = parameterToString(request.getDependencyType());
    }
    if (request.runtimeIsSet()) {
        localVarQueryParams["runtime"] = parameterToString(request.getRuntime());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListDependencies());

    std::shared_ptr<ListDependenciesResponse> localVarResult = std::make_shared<ListDependenciesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDependencyVersionResponse> FunctionGraphClient::listDependencyVersion(ListDependencyVersionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/dependencies/{depend_id}/version";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["depend_id"] = parameterToString(request.getDependId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListDependencyVersion());

    std::shared_ptr<ListDependencyVersionResponse> localVarResult = std::make_shared<ListDependencyVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListEventsResponse> FunctionGraphClient::listEvents(ListEventsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/events";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListEvents());

    std::shared_ptr<ListEventsResponse> localVarResult = std::make_shared<ListEventsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionApplicationsResponse> FunctionGraphClient::listFunctionApplications(ListFunctionApplicationsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/applications";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionApplications());

    std::shared_ptr<ListFunctionApplicationsResponse> localVarResult = std::make_shared<ListFunctionApplicationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionAsMetricResponse> FunctionGraphClient::listFunctionAsMetric(ListFunctionAsMetricRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/function/report";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionAsMetric());

    std::shared_ptr<ListFunctionAsMetricResponse> localVarResult = std::make_shared<ListFunctionAsMetricResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionAsyncInvokeConfigResponse> FunctionGraphClient::listFunctionAsyncInvokeConfig(ListFunctionAsyncInvokeConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/async-invoke-configs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionAsyncInvokeConfig());

    std::shared_ptr<ListFunctionAsyncInvokeConfigResponse> localVarResult = std::make_shared<ListFunctionAsyncInvokeConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionReservedInstancesResponse> FunctionGraphClient::listFunctionReservedInstances(ListFunctionReservedInstancesRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/reservedinstances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.urnIsSet()) {
        localVarQueryParams["urn"] = parameterToString(request.getUrn());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionReservedInstances());

    std::shared_ptr<ListFunctionReservedInstancesResponse> localVarResult = std::make_shared<ListFunctionReservedInstancesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionStatisticsResponse> FunctionGraphClient::listFunctionStatistics(ListFunctionStatisticsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{func_urn}/statistics/{period}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["func_urn"] = parameterToString(request.getFuncUrn());
    localVarPathParams["period"] = parameterToString(request.getPeriod());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionStatistics());

    std::shared_ptr<ListFunctionStatisticsResponse> localVarResult = std::make_shared<ListFunctionStatisticsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionTagsResponse> FunctionGraphClient::listFunctionTags(ListFunctionTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/{resource_type}/{resource_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_type"] = parameterToString(request.getResourceType());
    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionTags());

    std::shared_ptr<ListFunctionTagsResponse> localVarResult = std::make_shared<ListFunctionTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionTemplateResponse> FunctionGraphClient::listFunctionTemplate(ListFunctionTemplateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.ispublicIsSet()) {
        localVarQueryParams["ispublic"] = parameterToString(request.getIspublic());
    }
    if (request.runtimeIsSet()) {
        localVarQueryParams["runtime"] = parameterToString(request.getRuntime());
    }
    if (request.sceneIsSet()) {
        localVarQueryParams["scene"] = parameterToString(request.getScene());
    }
    if (request.serviceIsSet()) {
        localVarQueryParams["service"] = parameterToString(request.getService());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionTemplate());

    std::shared_ptr<ListFunctionTemplateResponse> localVarResult = std::make_shared<ListFunctionTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionTriggersResponse> FunctionGraphClient::listFunctionTriggers(ListFunctionTriggersRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionTriggers());

    std::shared_ptr<ListFunctionTriggersResponse> localVarResult = std::make_shared<ListFunctionTriggersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionVersionsResponse> FunctionGraphClient::listFunctionVersions(ListFunctionVersionsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/versions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctionVersions());

    std::shared_ptr<ListFunctionVersionsResponse> localVarResult = std::make_shared<ListFunctionVersionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionsResponse> FunctionGraphClient::listFunctions(ListFunctionsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.maxitemsIsSet()) {
        localVarQueryParams["maxitems"] = parameterToString(request.getMaxitems());
    }
    if (request.packageNameIsSet()) {
        localVarQueryParams["package_name"] = parameterToString(request.getPackageName());
    }
    if (request.funcNameIsSet()) {
        localVarQueryParams["func_name"] = parameterToString(request.getFuncName());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListFunctions());

    std::shared_ptr<ListFunctionsResponse> localVarResult = std::make_shared<ListFunctionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListQuotasResponse> FunctionGraphClient::listQuotas(ListQuotasRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/quotas";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListQuotas());

    std::shared_ptr<ListQuotasResponse> localVarResult = std::make_shared<ListQuotasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListReservedInstanceConfigsResponse> FunctionGraphClient::listReservedInstanceConfigs(ListReservedInstanceConfigsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/reservedinstanceconfigs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.functionUrnIsSet()) {
        localVarQueryParams["function_urn"] = parameterToString(request.getFunctionUrn());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListReservedInstanceConfigs());

    std::shared_ptr<ListReservedInstanceConfigsResponse> localVarResult = std::make_shared<ListReservedInstanceConfigsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListStatisticsResponse> FunctionGraphClient::listStatistics(ListStatisticsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/statistics";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.optionIsSet()) {
        localVarQueryParams["option"] = parameterToString(request.getOption());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListStatistics());

    std::shared_ptr<ListStatisticsResponse> localVarResult = std::make_shared<ListStatisticsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListVersionAliasesResponse> FunctionGraphClient::listVersionAliases(ListVersionAliasesRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/aliases";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListVersionAliases());

    std::shared_ptr<ListVersionAliasesResponse> localVarResult = std::make_shared<ListVersionAliasesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWorkflowResponse> FunctionGraphClient::listWorkflow(ListWorkflowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.workflowNameIsSet()) {
        localVarQueryParams["workflow_name"] = parameterToString(request.getWorkflowName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.enterpriseProjectIsSet()) {
        localVarQueryParams["enterprise_project"] = parameterToString(request.getEnterpriseProject());
    }
    if (request.modeIsSet()) {
        localVarQueryParams["mode"] = parameterToString(request.getMode());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListWorkflow());

    std::shared_ptr<ListWorkflowResponse> localVarResult = std::make_shared<ListWorkflowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListWorkflowExecutionsResponse> FunctionGraphClient::listWorkflowExecutions(ListWorkflowExecutionsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForListWorkflowExecutions());

    std::shared_ptr<ListWorkflowExecutionsResponse> localVarResult = std::make_shared<ListWorkflowExecutionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RetryWorkFlowResponse> FunctionGraphClient::retryWorkFlow(RetryWorkFlowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions/{execution_id}/retry";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());
    localVarPathParams["execution_id"] = parameterToString(request.getExecutionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForRetryWorkFlow());

    std::shared_ptr<RetryWorkFlowResponse> localVarResult = std::make_shared<RetryWorkFlowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAppTemplateResponse> FunctionGraphClient::showAppTemplate(ShowAppTemplateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/application/templates/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowAppTemplate());

    std::shared_ptr<ShowAppTemplateResponse> localVarResult = std::make_shared<ShowAppTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDependencyVersionResponse> FunctionGraphClient::showDependencyVersion(ShowDependencyVersionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/dependencies/{depend_id}/version/{version}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["depend_id"] = parameterToString(request.getDependId());
    localVarPathParams["version"] = parameterToString(request.getVersion());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowDependencyVersion());

    std::shared_ptr<ShowDependencyVersionResponse> localVarResult = std::make_shared<ShowDependencyVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowEventResponse> FunctionGraphClient::showEvent(ShowEventRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/events/{event_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["event_id"] = parameterToString(request.getEventId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowEvent());

    std::shared_ptr<ShowEventResponse> localVarResult = std::make_shared<ShowEventResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFuncReservedInstanceMetricsResponse> FunctionGraphClient::showFuncReservedInstanceMetrics(ShowFuncReservedInstanceMetricsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{func_urn}/instancereports";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["func_urn"] = parameterToString(request.getFuncUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFuncReservedInstanceMetrics());

    std::shared_ptr<ShowFuncReservedInstanceMetricsResponse> localVarResult = std::make_shared<ShowFuncReservedInstanceMetricsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFuncSnapshotStateResponse> FunctionGraphClient::showFuncSnapshotState(ShowFuncSnapshotStateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/snapshots/{action}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["action"] = parameterToString(request.getAction());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFuncSnapshotState());

    std::shared_ptr<ShowFuncSnapshotStateResponse> localVarResult = std::make_shared<ShowFuncSnapshotStateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionAppResponse> FunctionGraphClient::showFunctionApp(ShowFunctionAppRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/applications/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionApp());

    std::shared_ptr<ShowFunctionAppResponse> localVarResult = std::make_shared<ShowFunctionAppResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionAsyncInvokeConfigResponse> FunctionGraphClient::showFunctionAsyncInvokeConfig(ShowFunctionAsyncInvokeConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/async-invoke-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionAsyncInvokeConfig());

    std::shared_ptr<ShowFunctionAsyncInvokeConfigResponse> localVarResult = std::make_shared<ShowFunctionAsyncInvokeConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionCodeResponse> FunctionGraphClient::showFunctionCode(ShowFunctionCodeRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionCode());

    std::shared_ptr<ShowFunctionCodeResponse> localVarResult = std::make_shared<ShowFunctionCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionConfigResponse> FunctionGraphClient::showFunctionConfig(ShowFunctionConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionConfig());

    std::shared_ptr<ShowFunctionConfigResponse> localVarResult = std::make_shared<ShowFunctionConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionMetricsResponse> FunctionGraphClient::showFunctionMetrics(ShowFunctionMetricsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{func_urn}/slareports/{period}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["func_urn"] = parameterToString(request.getFuncUrn());
    localVarPathParams["period"] = parameterToString(request.getPeriod());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionMetrics());

    std::shared_ptr<ShowFunctionMetricsResponse> localVarResult = std::make_shared<ShowFunctionMetricsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionTemplateResponse> FunctionGraphClient::showFunctionTemplate(ShowFunctionTemplateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/templates/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionTemplate());

    std::shared_ptr<ShowFunctionTemplateResponse> localVarResult = std::make_shared<ShowFunctionTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFunctionTriggerResponse> FunctionGraphClient::showFunctionTrigger(ShowFunctionTriggerRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}/{trigger_type_code}/{trigger_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["trigger_type_code"] = parameterToString(request.getTriggerTypeCode());
    localVarPathParams["trigger_id"] = parameterToString(request.getTriggerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowFunctionTrigger());

    std::shared_ptr<ShowFunctionTriggerResponse> localVarResult = std::make_shared<ShowFunctionTriggerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowLtsLogDetailsResponse> FunctionGraphClient::showLtsLogDetails(ShowLtsLogDetailsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/lts-log-detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowLtsLogDetails());

    std::shared_ptr<ShowLtsLogDetailsResponse> localVarResult = std::make_shared<ShowLtsLogDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectAsyncStatusLogInfoResponse> FunctionGraphClient::showProjectAsyncStatusLogInfo(ShowProjectAsyncStatusLogInfoRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/async-status-log-detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowProjectAsyncStatusLogInfo());

    std::shared_ptr<ShowProjectAsyncStatusLogInfoResponse> localVarResult = std::make_shared<ShowProjectAsyncStatusLogInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectTagsListResponse> FunctionGraphClient::showProjectTagsList(ShowProjectTagsListRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/{resource_type}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_type"] = parameterToString(request.getResourceType());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowProjectTagsList());

    std::shared_ptr<ShowProjectTagsListResponse> localVarResult = std::make_shared<ShowProjectTagsListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResInstanceInfoResponse> FunctionGraphClient::showResInstanceInfo(ShowResInstanceInfoRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/{resource_type}/resource-instances/{action}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["resource_type"] = parameterToString(request.getResourceType());
    localVarPathParams["action"] = parameterToString(request.getAction());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowResInstanceInfo());

    std::shared_ptr<ShowResInstanceInfoResponse> localVarResult = std::make_shared<ShowResInstanceInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowTenantMetricResponse> FunctionGraphClient::showTenantMetric(ShowTenantMetricRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflow-statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.metricTypeIsSet()) {
        localVarQueryParams["metric_type"] = parameterToString(request.getMetricType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowTenantMetric());

    std::shared_ptr<ShowTenantMetricResponse> localVarResult = std::make_shared<ShowTenantMetricResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTracingResponse> FunctionGraphClient::showTracing(ShowTracingRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/tracing";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowTracing());

    std::shared_ptr<ShowTracingResponse> localVarResult = std::make_shared<ShowTracingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVersionAliasResponse> FunctionGraphClient::showVersionAlias(ShowVersionAliasRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/aliases/{alias_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["alias_name"] = parameterToString(request.getAliasName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowVersionAlias());

    std::shared_ptr<ShowVersionAliasResponse> localVarResult = std::make_shared<ShowVersionAliasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWorkFlowResponse> FunctionGraphClient::showWorkFlow(ShowWorkFlowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowWorkFlow());

    std::shared_ptr<ShowWorkFlowResponse> localVarResult = std::make_shared<ShowWorkFlowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWorkFlowMetricResponse> FunctionGraphClient::showWorkFlowMetric(ShowWorkFlowMetricRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflow-statistic/{workflow_urn}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_urn"] = parameterToString(request.getWorkflowUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.periodIsSet()) {
        localVarQueryParams["period"] = parameterToString(request.getPeriod());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowWorkFlowMetric());

    std::shared_ptr<ShowWorkFlowMetricResponse> localVarResult = std::make_shared<ShowWorkFlowMetricResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWorkflowExecutionResponse> FunctionGraphClient::showWorkflowExecution(ShowWorkflowExecutionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions/{execution_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());
    localVarPathParams["execution_id"] = parameterToString(request.getExecutionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xGetWorkflowFullHistoryDataIsSet()) {
        localVarHeaderParams["X-Get-Workflow-Full-History-Data"] = parameterToString(request.isXGetWorkflowFullHistoryData());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowWorkflowExecution());

    std::shared_ptr<ShowWorkflowExecutionResponse> localVarResult = std::make_shared<ShowWorkflowExecutionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowWorkflowExecutionForPageResponse> FunctionGraphClient::showWorkflowExecutionForPage(ShowWorkflowExecutionForPageRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions-history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForShowWorkflowExecutionForPage());

    std::shared_ptr<ShowWorkflowExecutionForPageResponse> localVarResult = std::make_shared<ShowWorkflowExecutionForPageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartSyncWorkflowExecutionResponse> FunctionGraphClient::startSyncWorkflowExecution(StartSyncWorkflowExecutionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/sync-executions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForStartSyncWorkflowExecution());

    std::shared_ptr<StartSyncWorkflowExecutionResponse> localVarResult = std::make_shared<StartSyncWorkflowExecutionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<StartWorkflowExecutionResponse> FunctionGraphClient::startWorkflowExecution(StartWorkflowExecutionRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xCreateTimeIsSet()) {
        localVarHeaderParams["X-Create-Time"] = parameterToString(request.getXCreateTime());
    }
    if (request.xWorkflowRunIDIsSet()) {
        localVarHeaderParams["X-WorkflowRun-ID"] = parameterToString(request.getXWorkflowRunID());
    }
    if (request.xWorkflowRunMergeFnParametersIsSet()) {
        localVarHeaderParams["X-WorkflowRun-MergeFnParameters"] = parameterToString(request.getXWorkflowRunMergeFnParameters());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForStartWorkflowExecution());

    std::shared_ptr<StartWorkflowExecutionResponse> localVarResult = std::make_shared<StartWorkflowExecutionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<StopWorkFlowResponse> FunctionGraphClient::stopWorkFlow(StopWorkFlowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}/executions/{execution_id}/terminate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());
    localVarPathParams["execution_id"] = parameterToString(request.getExecutionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForStopWorkFlow());

    std::shared_ptr<StopWorkFlowResponse> localVarResult = std::make_shared<StopWorkFlowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateEventResponse> FunctionGraphClient::updateEvent(UpdateEventRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/events/{event_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["event_id"] = parameterToString(request.getEventId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateEvent());

    std::shared_ptr<UpdateEventResponse> localVarResult = std::make_shared<UpdateEventResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateFuncSnapshotResponse> FunctionGraphClient::updateFuncSnapshot(UpdateFuncSnapshotRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/snapshots/{action}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["action"] = parameterToString(request.getAction());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFuncSnapshot());

    std::shared_ptr<UpdateFuncSnapshotResponse> localVarResult = std::make_shared<UpdateFuncSnapshotResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateFunctionAsyncInvokeConfigResponse> FunctionGraphClient::updateFunctionAsyncInvokeConfig(UpdateFunctionAsyncInvokeConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/async-invoke-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionAsyncInvokeConfig());

    std::shared_ptr<UpdateFunctionAsyncInvokeConfigResponse> localVarResult = std::make_shared<UpdateFunctionAsyncInvokeConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateFunctionCodeResponse> FunctionGraphClient::updateFunctionCode(UpdateFunctionCodeRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionCode());

    std::shared_ptr<UpdateFunctionCodeResponse> localVarResult = std::make_shared<UpdateFunctionCodeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateFunctionCollectStateResponse> FunctionGraphClient::updateFunctionCollectState(UpdateFunctionCollectStateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{func_urn}/collect/{state}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["func_urn"] = parameterToString(request.getFuncUrn());
    localVarPathParams["state"] = parameterToString(request.getState());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionCollectState());

    std::shared_ptr<UpdateFunctionCollectStateResponse> localVarResult = std::make_shared<UpdateFunctionCollectStateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateFunctionConfigResponse> FunctionGraphClient::updateFunctionConfig(UpdateFunctionConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionConfig());

    std::shared_ptr<UpdateFunctionConfigResponse> localVarResult = std::make_shared<UpdateFunctionConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateFunctionMaxInstanceConfigResponse> FunctionGraphClient::updateFunctionMaxInstanceConfig(UpdateFunctionMaxInstanceConfigRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/config-max-instance";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionMaxInstanceConfig());

    std::shared_ptr<UpdateFunctionMaxInstanceConfigResponse> localVarResult = std::make_shared<UpdateFunctionMaxInstanceConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateFunctionReservedInstancesCountResponse> FunctionGraphClient::updateFunctionReservedInstancesCount(UpdateFunctionReservedInstancesCountRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/reservedinstances";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateFunctionReservedInstancesCount());

    std::shared_ptr<UpdateFunctionReservedInstancesCountResponse> localVarResult = std::make_shared<UpdateFunctionReservedInstancesCountResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateTracingResponse> FunctionGraphClient::updateTracing(UpdateTracingRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/tracing";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateTracing());

    std::shared_ptr<UpdateTracingResponse> localVarResult = std::make_shared<UpdateTracingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateTriggerResponse> FunctionGraphClient::updateTrigger(UpdateTriggerRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/triggers/{function_urn}/{trigger_type_code}/{trigger_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["trigger_type_code"] = parameterToString(request.getTriggerTypeCode());
    localVarPathParams["trigger_id"] = parameterToString(request.getTriggerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateTrigger());

    std::shared_ptr<UpdateTriggerResponse> localVarResult = std::make_shared<UpdateTriggerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateVersionAliasResponse> FunctionGraphClient::updateVersionAlias(UpdateVersionAliasRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/functions/{function_urn}/aliases/{alias_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_urn"] = parameterToString(request.getFunctionUrn());
    localVarPathParams["alias_name"] = parameterToString(request.getAliasName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.contentTypeIsSet()) {
        localVarHeaderParams["Content-Type"] = parameterToString(request.getContentType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateVersionAlias());

    std::shared_ptr<UpdateVersionAliasResponse> localVarResult = std::make_shared<UpdateVersionAliasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<UpdateWorkFlowResponse> FunctionGraphClient::updateWorkFlow(UpdateWorkFlowRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/fgs/workflows/{workflow_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["workflow_id"] = parameterToString(request.getWorkflowId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, FunctionGraphMeta::genRequestDefForUpdateWorkFlow());

    std::shared_ptr<UpdateWorkFlowResponse> localVarResult = std::make_shared<UpdateWorkFlowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string FunctionGraphClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string FunctionGraphClient::parameterToString(std::string value)
{
    return value;
}

std::string FunctionGraphClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string FunctionGraphClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string FunctionGraphClient::parameterToString(float value)
{
    return toString(value);
}

std::string FunctionGraphClient::parameterToString(double value)
{
    return toString(value);
}

std::string FunctionGraphClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string FunctionGraphClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

