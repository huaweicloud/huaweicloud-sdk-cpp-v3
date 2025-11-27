#include <huaweicloud/iotda/v5/IoTDAClient.h>
#include <huaweicloud/iotda/v5/IoTDAMeta.h>

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
namespace Iotda {
namespace V5 {

using namespace HuaweiCloud::Sdk::Iotda::V5::Model;

IoTDAClient::IoTDAClient()
{
}

IoTDAClient::~IoTDAClient()
{
}

ClientBuilder<IoTDAClient> IoTDAClient::newBuilder()
{
    ClientBuilder<IoTDAClient> client = ClientBuilder<IoTDAClient>("BasicCredentials");
    client.withDerivedAuthServiceName("iotdm");
    return client;
}
std::shared_ptr<CreateAccessCodeResponse> IoTDAClient::createAccessCode(CreateAccessCodeRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/auth/accesscode";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateAccessCode());

    std::shared_ptr<CreateAccessCodeResponse> localVarResult = std::make_shared<CreateAccessCodeResponse>();
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
std::shared_ptr<AddQueueResponse> IoTDAClient::addQueue(AddQueueRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/amqp-queues";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddQueue());

    std::shared_ptr<AddQueueResponse> localVarResult = std::make_shared<AddQueueResponse>();
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
std::shared_ptr<BatchShowQueueResponse> IoTDAClient::batchShowQueue(BatchShowQueueRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/amqp-queues";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.queueNameIsSet()) {
        localVarQueryParams["queue_name"] = parameterToString(request.getQueueName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForBatchShowQueue());

    std::shared_ptr<BatchShowQueueResponse> localVarResult = std::make_shared<BatchShowQueueResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteQueueResponse> IoTDAClient::deleteQueue(DeleteQueueRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/amqp-queues/{queue_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["queue_id"] = parameterToString(request.getQueueId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteQueue());

    std::shared_ptr<DeleteQueueResponse> localVarResult = std::make_shared<DeleteQueueResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowQueueResponse> IoTDAClient::showQueue(ShowQueueRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/amqp-queues/{queue_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["queue_id"] = parameterToString(request.getQueueId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowQueue());

    std::shared_ptr<ShowQueueResponse> localVarResult = std::make_shared<ShowQueueResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddApplicationResponse> IoTDAClient::addApplication(AddApplicationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/apps";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddApplication());

    std::shared_ptr<AddApplicationResponse> localVarResult = std::make_shared<AddApplicationResponse>();
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
std::shared_ptr<DeleteApplicationResponse> IoTDAClient::deleteApplication(DeleteApplicationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/apps/{app_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteApplication());

    std::shared_ptr<DeleteApplicationResponse> localVarResult = std::make_shared<DeleteApplicationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowApplicationResponse> IoTDAClient::showApplication(ShowApplicationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/apps/{app_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowApplication());

    std::shared_ptr<ShowApplicationResponse> localVarResult = std::make_shared<ShowApplicationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowApplicationsResponse> IoTDAClient::showApplications(ShowApplicationsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/apps";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.defaultAppIsSet()) {
        localVarQueryParams["default_app"] = parameterToString(request.isDefaultApp());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowApplications());

    std::shared_ptr<ShowApplicationsResponse> localVarResult = std::make_shared<ShowApplicationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateApplicationResponse> IoTDAClient::updateApplication(UpdateApplicationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/apps/{app_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["app_id"] = parameterToString(request.getAppId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateApplication());

    std::shared_ptr<UpdateApplicationResponse> localVarResult = std::make_shared<UpdateApplicationResponse>();
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
std::shared_ptr<CountAsyncHistoryCommandsResponse> IoTDAClient::countAsyncHistoryCommands(CountAsyncHistoryCommandsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/async-commands-history/count";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.commandNameIsSet()) {
        localVarQueryParams["command_name"] = parameterToString(request.getCommandName());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCountAsyncHistoryCommands());

    std::shared_ptr<CountAsyncHistoryCommandsResponse> localVarResult = std::make_shared<CountAsyncHistoryCommandsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateAsyncCommandResponse> IoTDAClient::createAsyncCommand(CreateAsyncCommandRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/async-commands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateAsyncCommand());

    std::shared_ptr<CreateAsyncCommandResponse> localVarResult = std::make_shared<CreateAsyncCommandResponse>();
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
std::shared_ptr<ListAsyncCommandsResponse> IoTDAClient::listAsyncCommands(ListAsyncCommandsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/async-commands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.commandNameIsSet()) {
        localVarQueryParams["command_name"] = parameterToString(request.getCommandName());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListAsyncCommands());

    std::shared_ptr<ListAsyncCommandsResponse> localVarResult = std::make_shared<ListAsyncCommandsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAsyncHistoryCommandsResponse> IoTDAClient::listAsyncHistoryCommands(ListAsyncHistoryCommandsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/async-commands-history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.commandNameIsSet()) {
        localVarQueryParams["command_name"] = parameterToString(request.getCommandName());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListAsyncHistoryCommands());

    std::shared_ptr<ListAsyncHistoryCommandsResponse> localVarResult = std::make_shared<ListAsyncHistoryCommandsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAsyncDeviceCommandResponse> IoTDAClient::showAsyncDeviceCommand(ShowAsyncDeviceCommandRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/async-commands/{command_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());
    localVarPathParams["command_id"] = parameterToString(request.getCommandId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowAsyncDeviceCommand());

    std::shared_ptr<ShowAsyncDeviceCommandResponse> localVarResult = std::make_shared<ShowAsyncDeviceCommandResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateRoutingBacklogPolicyResponse> IoTDAClient::createRoutingBacklogPolicy(CreateRoutingBacklogPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/backlog-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateRoutingBacklogPolicy());

    std::shared_ptr<CreateRoutingBacklogPolicyResponse> localVarResult = std::make_shared<CreateRoutingBacklogPolicyResponse>();
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
std::shared_ptr<DeleteRoutingBacklogPolicyResponse> IoTDAClient::deleteRoutingBacklogPolicy(DeleteRoutingBacklogPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/backlog-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteRoutingBacklogPolicy());

    std::shared_ptr<DeleteRoutingBacklogPolicyResponse> localVarResult = std::make_shared<DeleteRoutingBacklogPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRoutingBacklogPolicyResponse> IoTDAClient::listRoutingBacklogPolicy(ListRoutingBacklogPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/backlog-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.policyNameIsSet()) {
        localVarQueryParams["policy_name"] = parameterToString(request.getPolicyName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListRoutingBacklogPolicy());

    std::shared_ptr<ListRoutingBacklogPolicyResponse> localVarResult = std::make_shared<ListRoutingBacklogPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRoutingBacklogPolicyResponse> IoTDAClient::showRoutingBacklogPolicy(ShowRoutingBacklogPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/backlog-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowRoutingBacklogPolicy());

    std::shared_ptr<ShowRoutingBacklogPolicyResponse> localVarResult = std::make_shared<ShowRoutingBacklogPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRoutingBacklogPolicyResponse> IoTDAClient::updateRoutingBacklogPolicy(UpdateRoutingBacklogPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/backlog-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateRoutingBacklogPolicy());

    std::shared_ptr<UpdateRoutingBacklogPolicyResponse> localVarResult = std::make_shared<UpdateRoutingBacklogPolicyResponse>();
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
std::shared_ptr<CreateBatchTaskResponse> IoTDAClient::createBatchTask(CreateBatchTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateBatchTask());

    std::shared_ptr<CreateBatchTaskResponse> localVarResult = std::make_shared<CreateBatchTaskResponse>();
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
std::shared_ptr<DeleteBatchTaskResponse> IoTDAClient::deleteBatchTask(DeleteBatchTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks/{task_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["task_id"] = parameterToString(request.getTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteBatchTask());

    std::shared_ptr<DeleteBatchTaskResponse> localVarResult = std::make_shared<DeleteBatchTaskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBatchTasksResponse> IoTDAClient::listBatchTasks(ListBatchTasksRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.taskTypeIsSet()) {
        localVarQueryParams["task_type"] = parameterToString(request.getTaskType());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListBatchTasks());

    std::shared_ptr<ListBatchTasksResponse> localVarResult = std::make_shared<ListBatchTasksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RetryBatchTaskResponse> IoTDAClient::retryBatchTask(RetryBatchTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks/{task_id}/retry";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["task_id"] = parameterToString(request.getTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForRetryBatchTask());

    std::shared_ptr<RetryBatchTaskResponse> localVarResult = std::make_shared<RetryBatchTaskResponse>();
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
std::shared_ptr<ShowBatchTaskResponse> IoTDAClient::showBatchTask(ShowBatchTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks/{task_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["task_id"] = parameterToString(request.getTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.taskDetailStatusIsSet()) {
        localVarQueryParams["task_detail_status"] = parameterToString(request.getTaskDetailStatus());
    }
    if (request.targetIsSet()) {
        localVarQueryParams["target"] = parameterToString(request.getTarget());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowBatchTask());

    std::shared_ptr<ShowBatchTaskResponse> localVarResult = std::make_shared<ShowBatchTaskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StopBatchTaskResponse> IoTDAClient::stopBatchTask(StopBatchTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtasks/{task_id}/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["task_id"] = parameterToString(request.getTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForStopBatchTask());

    std::shared_ptr<StopBatchTaskResponse> localVarResult = std::make_shared<StopBatchTaskResponse>();
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
std::shared_ptr<DeleteBatchTaskFileResponse> IoTDAClient::deleteBatchTaskFile(DeleteBatchTaskFileRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtask-files/{file_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["file_id"] = parameterToString(request.getFileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteBatchTaskFile());

    std::shared_ptr<DeleteBatchTaskFileResponse> localVarResult = std::make_shared<DeleteBatchTaskFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBatchTaskFilesResponse> IoTDAClient::listBatchTaskFiles(ListBatchTaskFilesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/batchtask-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListBatchTaskFiles());

    std::shared_ptr<ListBatchTaskFilesResponse> localVarResult = std::make_shared<ListBatchTaskFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddBridgeResponse> IoTDAClient::addBridge(AddBridgeRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/bridges";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddBridge());

    std::shared_ptr<AddBridgeResponse> localVarResult = std::make_shared<AddBridgeResponse>();
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
std::shared_ptr<DeleteBridgeResponse> IoTDAClient::deleteBridge(DeleteBridgeRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/bridges/{bridge_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bridge_id"] = parameterToString(request.getBridgeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteBridge());

    std::shared_ptr<DeleteBridgeResponse> localVarResult = std::make_shared<DeleteBridgeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBridgesResponse> IoTDAClient::listBridges(ListBridgesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/bridges";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListBridges());

    std::shared_ptr<ListBridgesResponse> localVarResult = std::make_shared<ListBridgesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetBridgeSecretResponse> IoTDAClient::resetBridgeSecret(ResetBridgeSecretRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/bridges/{bridge_id}/reset-secret";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bridge_id"] = parameterToString(request.getBridgeId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForResetBridgeSecret());

    std::shared_ptr<ResetBridgeSecretResponse> localVarResult = std::make_shared<ResetBridgeSecretResponse>();
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
std::shared_ptr<BroadcastMessageResponse> IoTDAClient::broadcastMessage(BroadcastMessageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/broadcast-messages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForBroadcastMessage());

    std::shared_ptr<BroadcastMessageResponse> localVarResult = std::make_shared<BroadcastMessageResponse>();
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
std::shared_ptr<AddCertificateResponse> IoTDAClient::addCertificate(AddCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.spAuthTokenIsSet()) {
        localVarHeaderParams["Sp-Auth-Token"] = parameterToString(request.getSpAuthToken());
    }
    if (request.stageAuthTokenIsSet()) {
        localVarHeaderParams["Stage-Auth-Token"] = parameterToString(request.getStageAuthToken());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddCertificate());

    std::shared_ptr<AddCertificateResponse> localVarResult = std::make_shared<AddCertificateResponse>();
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
std::shared_ptr<CheckCertificateResponse> IoTDAClient::checkCertificate(CheckCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates/{certificate_id}/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionIdIsSet()) {
        localVarQueryParams["action_id"] = parameterToString(request.getActionId());
    }
    if (request.spAuthTokenIsSet()) {
        localVarHeaderParams["Sp-Auth-Token"] = parameterToString(request.getSpAuthToken());
    }
    if (request.stageAuthTokenIsSet()) {
        localVarHeaderParams["Stage-Auth-Token"] = parameterToString(request.getStageAuthToken());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCheckCertificate());

    std::shared_ptr<CheckCertificateResponse> localVarResult = std::make_shared<CheckCertificateResponse>();
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
std::shared_ptr<DeleteCertificateResponse> IoTDAClient::deleteCertificate(DeleteCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.spAuthTokenIsSet()) {
        localVarHeaderParams["Sp-Auth-Token"] = parameterToString(request.getSpAuthToken());
    }
    if (request.stageAuthTokenIsSet()) {
        localVarHeaderParams["Stage-Auth-Token"] = parameterToString(request.getStageAuthToken());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteCertificate());

    std::shared_ptr<DeleteCertificateResponse> localVarResult = std::make_shared<DeleteCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCertificatesResponse> IoTDAClient::listCertificates(ListCertificatesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.spAuthTokenIsSet()) {
        localVarHeaderParams["Sp-Auth-Token"] = parameterToString(request.getSpAuthToken());
    }
    if (request.stageAuthTokenIsSet()) {
        localVarHeaderParams["Stage-Auth-Token"] = parameterToString(request.getStageAuthToken());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListCertificates());

    std::shared_ptr<ListCertificatesResponse> localVarResult = std::make_shared<ListCertificatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCertificateResponse> IoTDAClient::showCertificate(ShowCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.spAuthTokenIsSet()) {
        localVarHeaderParams["Sp-Auth-Token"] = parameterToString(request.getSpAuthToken());
    }
    if (request.stageAuthTokenIsSet()) {
        localVarHeaderParams["Stage-Auth-Token"] = parameterToString(request.getStageAuthToken());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowCertificate());

    std::shared_ptr<ShowCertificateResponse> localVarResult = std::make_shared<ShowCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateCertificateResponse> IoTDAClient::updateCertificate(UpdateCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateCertificate());

    std::shared_ptr<UpdateCertificateResponse> localVarResult = std::make_shared<UpdateCertificateResponse>();
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
std::shared_ptr<CreateCommandResponse> IoTDAClient::createCommand(CreateCommandRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/commands";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateCommand());

    std::shared_ptr<CreateCommandResponse> localVarResult = std::make_shared<CreateCommandResponse>();
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
std::shared_ptr<CreateDeviceAuthenticationTemplateResponse> IoTDAClient::createDeviceAuthenticationTemplate(CreateDeviceAuthenticationTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authentication-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateDeviceAuthenticationTemplate());

    std::shared_ptr<CreateDeviceAuthenticationTemplateResponse> localVarResult = std::make_shared<CreateDeviceAuthenticationTemplateResponse>();
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
std::shared_ptr<DeleteDeviceAuthenticationTemplateResponse> IoTDAClient::deleteDeviceAuthenticationTemplate(DeleteDeviceAuthenticationTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authentication-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceAuthenticationTemplate());

    std::shared_ptr<DeleteDeviceAuthenticationTemplateResponse> localVarResult = std::make_shared<DeleteDeviceAuthenticationTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceAuthenticationTemplatesResponse> IoTDAClient::listDeviceAuthenticationTemplates(ListDeviceAuthenticationTemplatesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authentication-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.templateNameIsSet()) {
        localVarQueryParams["template_name"] = parameterToString(request.getTemplateName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceAuthenticationTemplates());

    std::shared_ptr<ListDeviceAuthenticationTemplatesResponse> localVarResult = std::make_shared<ListDeviceAuthenticationTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceAuthenticationTemplateResponse> IoTDAClient::showDeviceAuthenticationTemplate(ShowDeviceAuthenticationTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authentication-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceAuthenticationTemplate());

    std::shared_ptr<ShowDeviceAuthenticationTemplateResponse> localVarResult = std::make_shared<ShowDeviceAuthenticationTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceAuthenticationTemplateResponse> IoTDAClient::updateDeviceAuthenticationTemplate(UpdateDeviceAuthenticationTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authentication-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceAuthenticationTemplate());

    std::shared_ptr<UpdateDeviceAuthenticationTemplateResponse> localVarResult = std::make_shared<UpdateDeviceAuthenticationTemplateResponse>();
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
std::shared_ptr<CreateDeviceAuthorizerResponse> IoTDAClient::createDeviceAuthorizer(CreateDeviceAuthorizerRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authorizers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateDeviceAuthorizer());

    std::shared_ptr<CreateDeviceAuthorizerResponse> localVarResult = std::make_shared<CreateDeviceAuthorizerResponse>();
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
std::shared_ptr<DeleteDeviceAuthorizerResponse> IoTDAClient::deleteDeviceAuthorizer(DeleteDeviceAuthorizerRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authorizers/{authorizer_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["authorizer_id"] = parameterToString(request.getAuthorizerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceAuthorizer());

    std::shared_ptr<DeleteDeviceAuthorizerResponse> localVarResult = std::make_shared<DeleteDeviceAuthorizerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceAuthorizersResponse> IoTDAClient::listDeviceAuthorizers(ListDeviceAuthorizersRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authorizers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorizerNameIsSet()) {
        localVarQueryParams["authorizer_name"] = parameterToString(request.getAuthorizerName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceAuthorizers());

    std::shared_ptr<ListDeviceAuthorizersResponse> localVarResult = std::make_shared<ListDeviceAuthorizersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceAuthorizerResponse> IoTDAClient::showDeviceAuthorizer(ShowDeviceAuthorizerRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authorizers/{authorizer_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["authorizer_id"] = parameterToString(request.getAuthorizerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceAuthorizer());

    std::shared_ptr<ShowDeviceAuthorizerResponse> localVarResult = std::make_shared<ShowDeviceAuthorizerResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceAuthorizerResponse> IoTDAClient::updateDeviceAuthorizer(UpdateDeviceAuthorizerRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-authorizers/{authorizer_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["authorizer_id"] = parameterToString(request.getAuthorizerId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceAuthorizer());

    std::shared_ptr<UpdateDeviceAuthorizerResponse> localVarResult = std::make_shared<UpdateDeviceAuthorizerResponse>();
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
std::shared_ptr<DeleteDeviceCertificateResponse> IoTDAClient::deleteDeviceCertificate(DeleteDeviceCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceCertificate());

    std::shared_ptr<DeleteDeviceCertificateResponse> localVarResult = std::make_shared<DeleteDeviceCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceByDeviceCertificateResponse> IoTDAClient::listDeviceByDeviceCertificate(ListDeviceByDeviceCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-certificates/{certificate_id}/list-device";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceByDeviceCertificate());

    std::shared_ptr<ListDeviceByDeviceCertificateResponse> localVarResult = std::make_shared<ListDeviceByDeviceCertificateResponse>();
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
std::shared_ptr<ListDeviceCertificateResponse> IoTDAClient::listDeviceCertificate(ListDeviceCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.commonNameIsSet()) {
        localVarQueryParams["common_name"] = parameterToString(request.getCommonName());
    }
    if (request.fingerprintIsSet()) {
        localVarQueryParams["fingerprint"] = parameterToString(request.getFingerprint());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceCertificate());

    std::shared_ptr<ListDeviceCertificateResponse> localVarResult = std::make_shared<ListDeviceCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceCertificateResponse> IoTDAClient::showDeviceCertificate(ShowDeviceCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceCertificate());

    std::shared_ptr<ShowDeviceCertificateResponse> localVarResult = std::make_shared<ShowDeviceCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceCertificateResponse> IoTDAClient::updateDeviceCertificate(UpdateDeviceCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceCertificate());

    std::shared_ptr<UpdateDeviceCertificateResponse> localVarResult = std::make_shared<UpdateDeviceCertificateResponse>();
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
std::shared_ptr<AddDeviceGroupResponse> IoTDAClient::addDeviceGroup(AddDeviceGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddDeviceGroup());

    std::shared_ptr<AddDeviceGroupResponse> localVarResult = std::make_shared<AddDeviceGroupResponse>();
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
std::shared_ptr<CreateOrDeleteDeviceInGroupResponse> IoTDAClient::createOrDeleteDeviceInGroup(CreateOrDeleteDeviceInGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group/{group_id}/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionIdIsSet()) {
        localVarQueryParams["action_id"] = parameterToString(request.getActionId());
    }
    if (request.deviceIdIsSet()) {
        localVarQueryParams["device_id"] = parameterToString(request.getDeviceId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateOrDeleteDeviceInGroup());

    std::shared_ptr<CreateOrDeleteDeviceInGroupResponse> localVarResult = std::make_shared<CreateOrDeleteDeviceInGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDeviceGroupResponse> IoTDAClient::deleteDeviceGroup(DeleteDeviceGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceGroup());

    std::shared_ptr<DeleteDeviceGroupResponse> localVarResult = std::make_shared<DeleteDeviceGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceGroupsResponse> IoTDAClient::listDeviceGroups(ListDeviceGroupsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.lastModifiedTimeIsSet()) {
        localVarQueryParams["last_modified_time"] = parameterToString(request.getLastModifiedTime());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.groupTypeIsSet()) {
        localVarQueryParams["group_type"] = parameterToString(request.getGroupType());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceGroups());

    std::shared_ptr<ListDeviceGroupsResponse> localVarResult = std::make_shared<ListDeviceGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceGroupResponse> IoTDAClient::showDeviceGroup(ShowDeviceGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceGroup());

    std::shared_ptr<ShowDeviceGroupResponse> localVarResult = std::make_shared<ShowDeviceGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDevicesInGroupResponse> IoTDAClient::showDevicesInGroup(ShowDevicesInGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group/{group_id}/devices";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDevicesInGroup());

    std::shared_ptr<ShowDevicesInGroupResponse> localVarResult = std::make_shared<ShowDevicesInGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceGroupResponse> IoTDAClient::updateDeviceGroup(UpdateDeviceGroupRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-group/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceGroup());

    std::shared_ptr<UpdateDeviceGroupResponse> localVarResult = std::make_shared<UpdateDeviceGroupResponse>();
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
std::shared_ptr<AddDeviceResponse> IoTDAClient::addDevice(AddDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddDevice());

    std::shared_ptr<AddDeviceResponse> localVarResult = std::make_shared<AddDeviceResponse>();
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
std::shared_ptr<ChangeGatewayResponse> IoTDAClient::changeGateway(ChangeGatewayRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/change-gateway";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForChangeGateway());

    std::shared_ptr<ChangeGatewayResponse> localVarResult = std::make_shared<ChangeGatewayResponse>();
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
std::shared_ptr<DeleteDeviceResponse> IoTDAClient::deleteDevice(DeleteDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDevice());

    std::shared_ptr<DeleteDeviceResponse> localVarResult = std::make_shared<DeleteDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<FreezeDeviceResponse> IoTDAClient::freezeDevice(FreezeDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/freeze";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForFreezeDevice());

    std::shared_ptr<FreezeDeviceResponse> localVarResult = std::make_shared<FreezeDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceGroupsByDeviceResponse> IoTDAClient::listDeviceGroupsByDevice(ListDeviceGroupsByDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/list-device-group";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceGroupsByDevice());

    std::shared_ptr<ListDeviceGroupsByDeviceResponse> localVarResult = std::make_shared<ListDeviceGroupsByDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDevicesResponse> IoTDAClient::listDevices(ListDevicesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.productIdIsSet()) {
        localVarQueryParams["product_id"] = parameterToString(request.getProductId());
    }
    if (request.gatewayIdIsSet()) {
        localVarQueryParams["gateway_id"] = parameterToString(request.getGatewayId());
    }
    if (request.isCascadeQueryIsSet()) {
        localVarQueryParams["is_cascade_query"] = parameterToString(request.isIsCascadeQuery());
    }
    if (request.nodeIdIsSet()) {
        localVarQueryParams["node_id"] = parameterToString(request.getNodeId());
    }
    if (request.deviceNameIsSet()) {
        localVarQueryParams["device_name"] = parameterToString(request.getDeviceName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDevices());

    std::shared_ptr<ListDevicesResponse> localVarResult = std::make_shared<ListDevicesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetDeviceSecretResponse> IoTDAClient::resetDeviceSecret(ResetDeviceSecretRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.actionIdIsSet()) {
        localVarQueryParams["action_id"] = parameterToString(request.getActionId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForResetDeviceSecret());

    std::shared_ptr<ResetDeviceSecretResponse> localVarResult = std::make_shared<ResetDeviceSecretResponse>();
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
std::shared_ptr<ResetFingerprintResponse> IoTDAClient::resetFingerprint(ResetFingerprintRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/reset-fingerprint";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForResetFingerprint());

    std::shared_ptr<ResetFingerprintResponse> localVarResult = std::make_shared<ResetFingerprintResponse>();
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
std::shared_ptr<SearchDevicesResponse> IoTDAClient::searchDevices(SearchDevicesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/search/query-devices";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForSearchDevices());

    std::shared_ptr<SearchDevicesResponse> localVarResult = std::make_shared<SearchDevicesResponse>();
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
std::shared_ptr<ShowDeviceResponse> IoTDAClient::showDevice(ShowDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDevice());

    std::shared_ptr<ShowDeviceResponse> localVarResult = std::make_shared<ShowDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UnfreezeDeviceResponse> IoTDAClient::unfreezeDevice(UnfreezeDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/unfreeze";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUnfreezeDevice());

    std::shared_ptr<UnfreezeDeviceResponse> localVarResult = std::make_shared<UnfreezeDeviceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceResponse> IoTDAClient::updateDevice(UpdateDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDevice());

    std::shared_ptr<UpdateDeviceResponse> localVarResult = std::make_shared<UpdateDeviceResponse>();
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
std::shared_ptr<CreateDeviceProxyResponse> IoTDAClient::createDeviceProxy(CreateDeviceProxyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-proxies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateDeviceProxy());

    std::shared_ptr<CreateDeviceProxyResponse> localVarResult = std::make_shared<CreateDeviceProxyResponse>();
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
std::shared_ptr<DeleteDeviceProxyResponse> IoTDAClient::deleteDeviceProxy(DeleteDeviceProxyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-proxies/{proxy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceProxy());

    std::shared_ptr<DeleteDeviceProxyResponse> localVarResult = std::make_shared<DeleteDeviceProxyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceProxiesResponse> IoTDAClient::listDeviceProxies(ListDeviceProxiesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-proxies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.proxyNameIsSet()) {
        localVarQueryParams["proxy_name"] = parameterToString(request.getProxyName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceProxies());

    std::shared_ptr<ListDeviceProxiesResponse> localVarResult = std::make_shared<ListDeviceProxiesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceProxyResponse> IoTDAClient::showDeviceProxy(ShowDeviceProxyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-proxies/{proxy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceProxy());

    std::shared_ptr<ShowDeviceProxyResponse> localVarResult = std::make_shared<ShowDeviceProxyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceProxyResponse> IoTDAClient::updateDeviceProxy(UpdateDeviceProxyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-proxies/{proxy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["proxy_id"] = parameterToString(request.getProxyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceProxy());

    std::shared_ptr<UpdateDeviceProxyResponse> localVarResult = std::make_shared<UpdateDeviceProxyResponse>();
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
std::shared_ptr<DeleteDeviceShadowResponse> IoTDAClient::deleteDeviceShadow(DeleteDeviceShadowRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/shadow";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceShadow());

    std::shared_ptr<DeleteDeviceShadowResponse> localVarResult = std::make_shared<DeleteDeviceShadowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceShadowResponse> IoTDAClient::showDeviceShadow(ShowDeviceShadowRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/shadow";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceShadow());

    std::shared_ptr<ShowDeviceShadowResponse> localVarResult = std::make_shared<ShowDeviceShadowResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDeviceShadowDesiredDataResponse> IoTDAClient::updateDeviceShadowDesiredData(UpdateDeviceShadowDesiredDataRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/shadow";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDeviceShadowDesiredData());

    std::shared_ptr<UpdateDeviceShadowDesiredDataResponse> localVarResult = std::make_shared<UpdateDeviceShadowDesiredDataResponse>();
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
std::shared_ptr<CreateDomainConfigurationResponse> IoTDAClient::createDomainConfiguration(CreateDomainConfigurationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/domain-configurations";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateDomainConfiguration());

    std::shared_ptr<CreateDomainConfigurationResponse> localVarResult = std::make_shared<CreateDomainConfigurationResponse>();
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
std::shared_ptr<DeleteDomainConfigurationResponse> IoTDAClient::deleteDomainConfiguration(DeleteDomainConfigurationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/domain-configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDomainConfiguration());

    std::shared_ptr<DeleteDomainConfigurationResponse> localVarResult = std::make_shared<DeleteDomainConfigurationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDomainConfigurationsResponse> IoTDAClient::listDomainConfigurations(ListDomainConfigurationsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/domain-configurations";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDomainConfigurations());

    std::shared_ptr<ListDomainConfigurationsResponse> localVarResult = std::make_shared<ListDomainConfigurationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDomainConfigurationResponse> IoTDAClient::showDomainConfiguration(ShowDomainConfigurationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/domain-configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDomainConfiguration());

    std::shared_ptr<ShowDomainConfigurationResponse> localVarResult = std::make_shared<ShowDomainConfigurationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateDomainConfigurationResponse> IoTDAClient::updateDomainConfiguration(UpdateDomainConfigurationRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/domain-configurations/{configuration_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["configuration_id"] = parameterToString(request.getConfigurationId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDomainConfiguration());

    std::shared_ptr<UpdateDomainConfigurationResponse> localVarResult = std::make_shared<UpdateDomainConfigurationResponse>();
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
std::shared_ptr<CreateExportTaskResponse> IoTDAClient::createExportTask(CreateExportTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/export-tasks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateExportTask());

    std::shared_ptr<CreateExportTaskResponse> localVarResult = std::make_shared<CreateExportTaskResponse>();
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
std::shared_ptr<DeleteExportTaskResponse> IoTDAClient::deleteExportTask(DeleteExportTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/export-tasks/{export_task_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["export_task_id"] = parameterToString(request.getExportTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteExportTask());

    std::shared_ptr<DeleteExportTaskResponse> localVarResult = std::make_shared<DeleteExportTaskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListExportTasksResponse> IoTDAClient::listExportTasks(ListExportTasksRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/export-tasks";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.resourceTypeIsSet()) {
        localVarQueryParams["resource_type"] = parameterToString(request.getResourceType());
    }
    if (request.resourceConditionIsSet()) {
        localVarQueryParams["resource_condition"] = parameterToString(request.getResourceCondition());
    }
    if (request.appTypeIsSet()) {
        localVarQueryParams["app_type"] = parameterToString(request.getAppType());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListExportTasks());

    std::shared_ptr<ListExportTasksResponse> localVarResult = std::make_shared<ListExportTasksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowExportTaskResponse> IoTDAClient::showExportTask(ShowExportTaskRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/export-tasks/{export_task_id}/file";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["export_task_id"] = parameterToString(request.getExportTaskId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowExportTask());

    std::shared_ptr<ShowExportTaskResponse> localVarResult = std::make_shared<ShowExportTaskResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateRoutingFlowControlPolicyResponse> IoTDAClient::createRoutingFlowControlPolicy(CreateRoutingFlowControlPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/flowcontrol-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateRoutingFlowControlPolicy());

    std::shared_ptr<CreateRoutingFlowControlPolicyResponse> localVarResult = std::make_shared<CreateRoutingFlowControlPolicyResponse>();
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
std::shared_ptr<DeleteRoutingFlowControlPolicyResponse> IoTDAClient::deleteRoutingFlowControlPolicy(DeleteRoutingFlowControlPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/flowcontrol-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteRoutingFlowControlPolicy());

    std::shared_ptr<DeleteRoutingFlowControlPolicyResponse> localVarResult = std::make_shared<DeleteRoutingFlowControlPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRoutingFlowControlPolicyResponse> IoTDAClient::listRoutingFlowControlPolicy(ListRoutingFlowControlPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/flowcontrol-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.scopeIsSet()) {
        localVarQueryParams["scope"] = parameterToString(request.getScope());
    }
    if (request.scopeValueIsSet()) {
        localVarQueryParams["scope_value"] = parameterToString(request.getScopeValue());
    }
    if (request.policyNameIsSet()) {
        localVarQueryParams["policy_name"] = parameterToString(request.getPolicyName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListRoutingFlowControlPolicy());

    std::shared_ptr<ListRoutingFlowControlPolicyResponse> localVarResult = std::make_shared<ListRoutingFlowControlPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRoutingFlowControlPolicyResponse> IoTDAClient::showRoutingFlowControlPolicy(ShowRoutingFlowControlPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/flowcontrol-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowRoutingFlowControlPolicy());

    std::shared_ptr<ShowRoutingFlowControlPolicyResponse> localVarResult = std::make_shared<ShowRoutingFlowControlPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRoutingFlowControlPolicyResponse> IoTDAClient::updateRoutingFlowControlPolicy(UpdateRoutingFlowControlPolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/flowcontrol-policy/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateRoutingFlowControlPolicy());

    std::shared_ptr<UpdateRoutingFlowControlPolicyResponse> localVarResult = std::make_shared<UpdateRoutingFlowControlPolicyResponse>();
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
std::shared_ptr<AddFunctionsResponse> IoTDAClient::addFunctions(AddFunctionsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/product-functions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddFunctions());

    std::shared_ptr<AddFunctionsResponse> localVarResult = std::make_shared<AddFunctionsResponse>();
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
std::shared_ptr<DeleteFunctionsResponse> IoTDAClient::deleteFunctions(DeleteFunctionsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/product-functions/{function_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["function_id"] = parameterToString(request.getFunctionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteFunctions());

    std::shared_ptr<DeleteFunctionsResponse> localVarResult = std::make_shared<DeleteFunctionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFunctionsResponse> IoTDAClient::listFunctions(ListFunctionsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/product-functions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.productIdIsSet()) {
        localVarQueryParams["product_id"] = parameterToString(request.getProductId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListFunctions());

    std::shared_ptr<ListFunctionsResponse> localVarResult = std::make_shared<ListFunctionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddHarmonySoftBusResponse> IoTDAClient::addHarmonySoftBus(AddHarmonySoftBusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddHarmonySoftBus());

    std::shared_ptr<AddHarmonySoftBusResponse> localVarResult = std::make_shared<AddHarmonySoftBusResponse>();
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
std::shared_ptr<CreateSyncHarmonySoftBusResponse> IoTDAClient::createSyncHarmonySoftBus(CreateSyncHarmonySoftBusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus/{bus_id}/sync";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bus_id"] = parameterToString(request.getBusId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateSyncHarmonySoftBus());

    std::shared_ptr<CreateSyncHarmonySoftBusResponse> localVarResult = std::make_shared<CreateSyncHarmonySoftBusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteHarmonySoftBusResponse> IoTDAClient::deleteHarmonySoftBus(DeleteHarmonySoftBusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus/{bus_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bus_id"] = parameterToString(request.getBusId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteHarmonySoftBus());

    std::shared_ptr<DeleteHarmonySoftBusResponse> localVarResult = std::make_shared<DeleteHarmonySoftBusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListHarmonySoftBusResponse> IoTDAClient::listHarmonySoftBus(ListHarmonySoftBusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.groupIdIsSet()) {
        localVarQueryParams["group_id"] = parameterToString(request.getGroupId());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListHarmonySoftBus());

    std::shared_ptr<ListHarmonySoftBusResponse> localVarResult = std::make_shared<ListHarmonySoftBusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetHarmonySoftBusKeyResponse> IoTDAClient::resetHarmonySoftBusKey(ResetHarmonySoftBusKeyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus/{bus_id}/reset-bus-key";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bus_id"] = parameterToString(request.getBusId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForResetHarmonySoftBusKey());

    std::shared_ptr<ResetHarmonySoftBusKeyResponse> localVarResult = std::make_shared<ResetHarmonySoftBusKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHarmonySoftBusResponse> IoTDAClient::showHarmonySoftBus(ShowHarmonySoftBusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/harmony-soft-bus/{bus_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["bus_id"] = parameterToString(request.getBusId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowHarmonySoftBus());

    std::shared_ptr<ShowHarmonySoftBusResponse> localVarResult = std::make_shared<ShowHarmonySoftBusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateMessageResponse> IoTDAClient::createMessage(CreateMessageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/messages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateMessage());

    std::shared_ptr<CreateMessageResponse> localVarResult = std::make_shared<CreateMessageResponse>();
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
std::shared_ptr<DeleteDeviceMessageResponse> IoTDAClient::deleteDeviceMessage(DeleteDeviceMessageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/messages/{message_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());
    localVarPathParams["message_id"] = parameterToString(request.getMessageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceMessage());

    std::shared_ptr<DeleteDeviceMessageResponse> localVarResult = std::make_shared<DeleteDeviceMessageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceMessagesResponse> IoTDAClient::listDeviceMessages(ListDeviceMessagesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/messages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceMessages());

    std::shared_ptr<ListDeviceMessagesResponse> localVarResult = std::make_shared<ListDeviceMessagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceMessageResponse> IoTDAClient::showDeviceMessage(ShowDeviceMessageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/messages/{message_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());
    localVarPathParams["message_id"] = parameterToString(request.getMessageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceMessage());

    std::shared_ptr<ShowDeviceMessageResponse> localVarResult = std::make_shared<ShowDeviceMessageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateOtaModuleResponse> IoTDAClient::createOtaModule(CreateOtaModuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/modules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateOtaModule());

    std::shared_ptr<CreateOtaModuleResponse> localVarResult = std::make_shared<CreateOtaModuleResponse>();
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
std::shared_ptr<DeleteOtaModuleResponse> IoTDAClient::deleteOtaModule(DeleteOtaModuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/modules/{module_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["module_id"] = parameterToString(request.getModuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteOtaModule());

    std::shared_ptr<DeleteOtaModuleResponse> localVarResult = std::make_shared<DeleteOtaModuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListOtaModulesResponse> IoTDAClient::listOtaModules(ListOtaModulesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/modules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.productIdIsSet()) {
        localVarQueryParams["product_id"] = parameterToString(request.getProductId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListOtaModules());

    std::shared_ptr<ListOtaModulesResponse> localVarResult = std::make_shared<ListOtaModulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowOtaModuleResponse> IoTDAClient::showOtaModule(ShowOtaModuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/modules/{module_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["module_id"] = parameterToString(request.getModuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowOtaModule());

    std::shared_ptr<ShowOtaModuleResponse> localVarResult = std::make_shared<ShowOtaModuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateOtaModuleResponse> IoTDAClient::updateOtaModule(UpdateOtaModuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/modules/{module_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["module_id"] = parameterToString(request.getModuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateOtaModule());

    std::shared_ptr<UpdateOtaModuleResponse> localVarResult = std::make_shared<UpdateOtaModuleResponse>();
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
std::shared_ptr<CreateOtaPackageResponse> IoTDAClient::createOtaPackage(CreateOtaPackageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/packages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateOtaPackage());

    std::shared_ptr<CreateOtaPackageResponse> localVarResult = std::make_shared<CreateOtaPackageResponse>();
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
std::shared_ptr<DeleteOtaPackageResponse> IoTDAClient::deleteOtaPackage(DeleteOtaPackageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/packages/{package_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["package_id"] = parameterToString(request.getPackageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteOtaPackage());

    std::shared_ptr<DeleteOtaPackageResponse> localVarResult = std::make_shared<DeleteOtaPackageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListOtaPackageInfoResponse> IoTDAClient::listOtaPackageInfo(ListOtaPackageInfoRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/packages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.packageTypeIsSet()) {
        localVarQueryParams["package_type"] = parameterToString(request.getPackageType());
    }
    if (request.productIdIsSet()) {
        localVarQueryParams["product_id"] = parameterToString(request.getProductId());
    }
    if (request.versionIsSet()) {
        localVarQueryParams["version"] = parameterToString(request.getVersion());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListOtaPackageInfo());

    std::shared_ptr<ListOtaPackageInfoResponse> localVarResult = std::make_shared<ListOtaPackageInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowOtaPackageResponse> IoTDAClient::showOtaPackage(ShowOtaPackageRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/ota-upgrades/packages/{package_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["package_id"] = parameterToString(request.getPackageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowOtaPackage());

    std::shared_ptr<ShowOtaPackageResponse> localVarResult = std::make_shared<ShowOtaPackageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BindDevicePolicyResponse> IoTDAClient::bindDevicePolicy(BindDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}/bind";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForBindDevicePolicy());

    std::shared_ptr<BindDevicePolicyResponse> localVarResult = std::make_shared<BindDevicePolicyResponse>();
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
std::shared_ptr<CreateDevicePolicyResponse> IoTDAClient::createDevicePolicy(CreateDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateDevicePolicy());

    std::shared_ptr<CreateDevicePolicyResponse> localVarResult = std::make_shared<CreateDevicePolicyResponse>();
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
std::shared_ptr<DeleteDevicePolicyResponse> IoTDAClient::deleteDevicePolicy(DeleteDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDevicePolicy());

    std::shared_ptr<DeleteDevicePolicyResponse> localVarResult = std::make_shared<DeleteDevicePolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDevicePoliciesResponse> IoTDAClient::listDevicePolicies(ListDevicePoliciesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.policyNameIsSet()) {
        localVarQueryParams["policy_name"] = parameterToString(request.getPolicyName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDevicePolicies());

    std::shared_ptr<ListDevicePoliciesResponse> localVarResult = std::make_shared<ListDevicePoliciesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDevicePolicyResponse> IoTDAClient::showDevicePolicy(ShowDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDevicePolicy());

    std::shared_ptr<ShowDevicePolicyResponse> localVarResult = std::make_shared<ShowDevicePolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTargetsInDevicePolicyResponse> IoTDAClient::showTargetsInDevicePolicy(ShowTargetsInDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}/list-targets";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowTargetsInDevicePolicy());

    std::shared_ptr<ShowTargetsInDevicePolicyResponse> localVarResult = std::make_shared<ShowTargetsInDevicePolicyResponse>();
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
std::shared_ptr<UnbindDevicePolicyResponse> IoTDAClient::unbindDevicePolicy(UnbindDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}/unbind";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUnbindDevicePolicy());

    std::shared_ptr<UnbindDevicePolicyResponse> localVarResult = std::make_shared<UnbindDevicePolicyResponse>();
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
std::shared_ptr<UpdateDevicePolicyResponse> IoTDAClient::updateDevicePolicy(UpdateDevicePolicyRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/device-policies/{policy_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["policy_id"] = parameterToString(request.getPolicyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateDevicePolicy());

    std::shared_ptr<UpdateDevicePolicyResponse> localVarResult = std::make_shared<UpdateDevicePolicyResponse>();
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
std::shared_ptr<CreateProductResponse> IoTDAClient::createProduct(CreateProductRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/products";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateProduct());

    std::shared_ptr<CreateProductResponse> localVarResult = std::make_shared<CreateProductResponse>();
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
std::shared_ptr<DeleteProductResponse> IoTDAClient::deleteProduct(DeleteProductRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteProduct());

    std::shared_ptr<DeleteProductResponse> localVarResult = std::make_shared<DeleteProductResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProductsResponse> IoTDAClient::listProducts(ListProductsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/products";

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
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.productNameIsSet()) {
        localVarQueryParams["product_name"] = parameterToString(request.getProductName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListProducts());

    std::shared_ptr<ListProductsResponse> localVarResult = std::make_shared<ListProductsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProductResponse> IoTDAClient::showProduct(ShowProductRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowProduct());

    std::shared_ptr<ShowProductResponse> localVarResult = std::make_shared<ShowProductResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProductResponse> IoTDAClient::updateProduct(UpdateProductRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/products/{product_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["product_id"] = parameterToString(request.getProductId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateProduct());

    std::shared_ptr<UpdateProductResponse> localVarResult = std::make_shared<UpdateProductResponse>();
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
std::shared_ptr<ListPropertiesResponse> IoTDAClient::listProperties(ListPropertiesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/properties";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.serviceIdIsSet()) {
        localVarQueryParams["service_id"] = parameterToString(request.getServiceId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListProperties());

    std::shared_ptr<ListPropertiesResponse> localVarResult = std::make_shared<ListPropertiesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdatePropertiesResponse> IoTDAClient::updateProperties(UpdatePropertiesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/devices/{device_id}/properties";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateProperties());

    std::shared_ptr<UpdatePropertiesResponse> localVarResult = std::make_shared<UpdatePropertiesResponse>();
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
std::shared_ptr<CreateProvisioningTemplateResponse> IoTDAClient::createProvisioningTemplate(CreateProvisioningTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/provisioning-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateProvisioningTemplate());

    std::shared_ptr<CreateProvisioningTemplateResponse> localVarResult = std::make_shared<CreateProvisioningTemplateResponse>();
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
std::shared_ptr<DeleteProvisioningTemplateResponse> IoTDAClient::deleteProvisioningTemplate(DeleteProvisioningTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/provisioning-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteProvisioningTemplate());

    std::shared_ptr<DeleteProvisioningTemplateResponse> localVarResult = std::make_shared<DeleteProvisioningTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProvisioningTemplatesResponse> IoTDAClient::listProvisioningTemplates(ListProvisioningTemplatesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/provisioning-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.templateNameIsSet()) {
        localVarQueryParams["template_name"] = parameterToString(request.getTemplateName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListProvisioningTemplates());

    std::shared_ptr<ListProvisioningTemplatesResponse> localVarResult = std::make_shared<ListProvisioningTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProvisioningTemplateResponse> IoTDAClient::showProvisioningTemplate(ShowProvisioningTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/provisioning-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowProvisioningTemplate());

    std::shared_ptr<ShowProvisioningTemplateResponse> localVarResult = std::make_shared<ShowProvisioningTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProvisioningTemplateResponse> IoTDAClient::updateProvisioningTemplate(UpdateProvisioningTemplateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/provisioning-templates/{template_id}";

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

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateProvisioningTemplate());

    std::shared_ptr<UpdateProvisioningTemplateResponse> localVarResult = std::make_shared<UpdateProvisioningTemplateResponse>();
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
std::shared_ptr<CreateRoutingRuleResponse> IoTDAClient::createRoutingRule(CreateRoutingRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateRoutingRule());

    std::shared_ptr<CreateRoutingRuleResponse> localVarResult = std::make_shared<CreateRoutingRuleResponse>();
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
std::shared_ptr<CreateRuleActionResponse> IoTDAClient::createRuleAction(CreateRuleActionRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/actions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateRuleAction());

    std::shared_ptr<CreateRuleActionResponse> localVarResult = std::make_shared<CreateRuleActionResponse>();
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
std::shared_ptr<DeleteRoutingRuleResponse> IoTDAClient::deleteRoutingRule(DeleteRoutingRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteRoutingRule());

    std::shared_ptr<DeleteRoutingRuleResponse> localVarResult = std::make_shared<DeleteRoutingRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteRuleActionResponse> IoTDAClient::deleteRuleAction(DeleteRuleActionRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/actions/{action_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["action_id"] = parameterToString(request.getActionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteRuleAction());

    std::shared_ptr<DeleteRuleActionResponse> localVarResult = std::make_shared<DeleteRuleActionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRoutingRulesResponse> IoTDAClient::listRoutingRules(ListRoutingRulesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.resourceIsSet()) {
        localVarQueryParams["resource"] = parameterToString(request.getResource());
    }
    if (request.eventIsSet()) {
        localVarQueryParams["event"] = parameterToString(request.getEvent());
    }
    if (request.appTypeIsSet()) {
        localVarQueryParams["app_type"] = parameterToString(request.getAppType());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.ruleNameIsSet()) {
        localVarQueryParams["rule_name"] = parameterToString(request.getRuleName());
    }
    if (request.activeIsSet()) {
        localVarQueryParams["active"] = parameterToString(request.isActive());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListRoutingRules());

    std::shared_ptr<ListRoutingRulesResponse> localVarResult = std::make_shared<ListRoutingRulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRuleActionsResponse> IoTDAClient::listRuleActions(ListRuleActionsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/actions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.ruleIdIsSet()) {
        localVarQueryParams["rule_id"] = parameterToString(request.getRuleId());
    }
    if (request.channelIsSet()) {
        localVarQueryParams["channel"] = parameterToString(request.getChannel());
    }
    if (request.appTypeIsSet()) {
        localVarQueryParams["app_type"] = parameterToString(request.getAppType());
    }
    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListRuleActions());

    std::shared_ptr<ListRuleActionsResponse> localVarResult = std::make_shared<ListRuleActionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRoutingRuleResponse> IoTDAClient::showRoutingRule(ShowRoutingRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowRoutingRule());

    std::shared_ptr<ShowRoutingRuleResponse> localVarResult = std::make_shared<ShowRoutingRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRuleActionResponse> IoTDAClient::showRuleAction(ShowRuleActionRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/actions/{action_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["action_id"] = parameterToString(request.getActionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowRuleAction());

    std::shared_ptr<ShowRuleActionResponse> localVarResult = std::make_shared<ShowRuleActionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRoutingRuleResponse> IoTDAClient::updateRoutingRule(UpdateRoutingRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateRoutingRule());

    std::shared_ptr<UpdateRoutingRuleResponse> localVarResult = std::make_shared<UpdateRoutingRuleResponse>();
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
std::shared_ptr<UpdateRuleActionResponse> IoTDAClient::updateRuleAction(UpdateRuleActionRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/routing-rule/actions/{action_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["action_id"] = parameterToString(request.getActionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateRuleAction());

    std::shared_ptr<UpdateRuleActionResponse> localVarResult = std::make_shared<UpdateRuleActionResponse>();
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
std::shared_ptr<ChangeRuleStatusResponse> IoTDAClient::changeRuleStatus(ChangeRuleStatusRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules/{rule_id}/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForChangeRuleStatus());

    std::shared_ptr<ChangeRuleStatusResponse> localVarResult = std::make_shared<ChangeRuleStatusResponse>();
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
std::shared_ptr<CreateRuleResponse> IoTDAClient::createRule(CreateRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateRule());

    std::shared_ptr<CreateRuleResponse> localVarResult = std::make_shared<CreateRuleResponse>();
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
std::shared_ptr<DeleteRuleResponse> IoTDAClient::deleteRule(DeleteRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteRule());

    std::shared_ptr<DeleteRuleResponse> localVarResult = std::make_shared<DeleteRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRulesResponse> IoTDAClient::listRules(ListRulesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.appIdIsSet()) {
        localVarQueryParams["app_id"] = parameterToString(request.getAppId());
    }
    if (request.ruleTypeIsSet()) {
        localVarQueryParams["rule_type"] = parameterToString(request.getRuleType());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListRules());

    std::shared_ptr<ListRulesResponse> localVarResult = std::make_shared<ListRulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRuleResponse> IoTDAClient::showRule(ShowRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowRule());

    std::shared_ptr<ShowRuleResponse> localVarResult = std::make_shared<ShowRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRuleResponse> IoTDAClient::updateRule(UpdateRuleRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/rules/{rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["rule_id"] = parameterToString(request.getRuleId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateRule());

    std::shared_ptr<UpdateRuleResponse> localVarResult = std::make_shared<UpdateRuleResponse>();
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
std::shared_ptr<CreateSecurityProfileResponse> IoTDAClient::createSecurityProfile(CreateSecurityProfileRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/security-profiles";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateSecurityProfile());

    std::shared_ptr<CreateSecurityProfileResponse> localVarResult = std::make_shared<CreateSecurityProfileResponse>();
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
std::shared_ptr<DeleteSecurityProfileResponse> IoTDAClient::deleteSecurityProfile(DeleteSecurityProfileRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/security-profiles/{profile_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["profile_id"] = parameterToString(request.getProfileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteSecurityProfile());

    std::shared_ptr<DeleteSecurityProfileResponse> localVarResult = std::make_shared<DeleteSecurityProfileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSecurityProfilesResponse> IoTDAClient::listSecurityProfiles(ListSecurityProfilesRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/security-profiles";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.securityTypeIsSet()) {
        localVarQueryParams["security_type"] = parameterToString(request.getSecurityType());
    }
    if (request.targetTypeIsSet()) {
        localVarQueryParams["target_type"] = parameterToString(request.getTargetType());
    }
    if (request.targetIdIsSet()) {
        localVarQueryParams["target_id"] = parameterToString(request.getTargetId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListSecurityProfiles());

    std::shared_ptr<ListSecurityProfilesResponse> localVarResult = std::make_shared<ListSecurityProfilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSecurityProfileResponse> IoTDAClient::showSecurityProfile(ShowSecurityProfileRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/security-profiles/{profile_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["profile_id"] = parameterToString(request.getProfileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowSecurityProfile());

    std::shared_ptr<ShowSecurityProfileResponse> localVarResult = std::make_shared<ShowSecurityProfileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateSecurityProfileResponse> IoTDAClient::updateSecurityProfile(UpdateSecurityProfileRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/security-profiles/{profile_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["profile_id"] = parameterToString(request.getProfileId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUpdateSecurityProfile());

    std::shared_ptr<UpdateSecurityProfileResponse> localVarResult = std::make_shared<UpdateSecurityProfileResponse>();
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
std::shared_ptr<CreateServerCertificateResponse> IoTDAClient::createServerCertificate(CreateServerCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/server-certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCreateServerCertificate());

    std::shared_ptr<CreateServerCertificateResponse> localVarResult = std::make_shared<CreateServerCertificateResponse>();
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
std::shared_ptr<DeleteServerCertificateResponse> IoTDAClient::deleteServerCertificate(DeleteServerCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/server-certificates/{server_certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["server_certificate_id"] = parameterToString(request.getServerCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteServerCertificate());

    std::shared_ptr<DeleteServerCertificateResponse> localVarResult = std::make_shared<DeleteServerCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListServerCertificateResponse> IoTDAClient::listServerCertificate(ListServerCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/server-certificates";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListServerCertificate());

    std::shared_ptr<ListServerCertificateResponse> localVarResult = std::make_shared<ListServerCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowServerCertificateResponse> IoTDAClient::showServerCertificate(ShowServerCertificateRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/server-certificates/{server_certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["server_certificate_id"] = parameterToString(request.getServerCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowServerCertificate());

    std::shared_ptr<ShowServerCertificateResponse> localVarResult = std::make_shared<ShowServerCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListResourcesByTagsResponse> IoTDAClient::listResourcesByTags(ListResourcesByTagsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tags/query-resources";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListResourcesByTags());

    std::shared_ptr<ListResourcesByTagsResponse> localVarResult = std::make_shared<ListResourcesByTagsResponse>();
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
std::shared_ptr<TagDeviceResponse> IoTDAClient::tagDevice(TagDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tags/bind-resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForTagDevice());

    std::shared_ptr<TagDeviceResponse> localVarResult = std::make_shared<TagDeviceResponse>();
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
std::shared_ptr<UntagDeviceResponse> IoTDAClient::untagDevice(UntagDeviceRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tags/unbind-resource";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForUntagDevice());

    std::shared_ptr<UntagDeviceResponse> localVarResult = std::make_shared<UntagDeviceResponse>();
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
std::shared_ptr<AddTunnelResponse> IoTDAClient::addTunnel(AddTunnelRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tunnels";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForAddTunnel());

    std::shared_ptr<AddTunnelResponse> localVarResult = std::make_shared<AddTunnelResponse>();
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
std::shared_ptr<CloseDeviceTunnelResponse> IoTDAClient::closeDeviceTunnel(CloseDeviceTunnelRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tunnels/{tunnel_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tunnel_id"] = parameterToString(request.getTunnelId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForCloseDeviceTunnel());

    std::shared_ptr<CloseDeviceTunnelResponse> localVarResult = std::make_shared<CloseDeviceTunnelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDeviceTunnelResponse> IoTDAClient::deleteDeviceTunnel(DeleteDeviceTunnelRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tunnels/{tunnel_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tunnel_id"] = parameterToString(request.getTunnelId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForDeleteDeviceTunnel());

    std::shared_ptr<DeleteDeviceTunnelResponse> localVarResult = std::make_shared<DeleteDeviceTunnelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDeviceTunnelsResponse> IoTDAClient::listDeviceTunnels(ListDeviceTunnelsRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tunnels";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.deviceIdIsSet()) {
        localVarQueryParams["device_id"] = parameterToString(request.getDeviceId());
    }
    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForListDeviceTunnels());

    std::shared_ptr<ListDeviceTunnelsResponse> localVarResult = std::make_shared<ListDeviceTunnelsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDeviceTunnelResponse> IoTDAClient::showDeviceTunnel(ShowDeviceTunnelRequest &request)
{
    std::string localVarPath = "/v5/iot/{project_id}/tunnels/{tunnel_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tunnel_id"] = parameterToString(request.getTunnelId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.instanceIdIsSet()) {
        localVarHeaderParams["Instance-Id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IoTDAMeta::genRequestDefForShowDeviceTunnel());

    std::shared_ptr<ShowDeviceTunnelResponse> localVarResult = std::make_shared<ShowDeviceTunnelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string IoTDAClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string IoTDAClient::parameterToString(std::string value)
{
    return value;
}

std::string IoTDAClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string IoTDAClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string IoTDAClient::parameterToString(float value)
{
    return toString(value);
}

std::string IoTDAClient::parameterToString(double value)
{
    return toString(value);
}

std::string IoTDAClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string IoTDAClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

