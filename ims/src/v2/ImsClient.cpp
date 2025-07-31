#include <huaweicloud/ims/v2/ImsClient.h>
#include <huaweicloud/ims/v2/ImsMeta.h>

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
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Ims::V2::Model;

ImsClient::ImsClient()
{
}

ImsClient::~ImsClient()
{
}

ClientBuilder<ImsClient> ImsClient::newBuilder()
{
    ClientBuilder<ImsClient> client = ClientBuilder<ImsClient>("BasicCredentials");
    return client;
}
std::shared_ptr<AddImageTagResponse> ImsClient::addImageTag(AddImageTagRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/{image_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForAddImageTag());

    std::shared_ptr<AddImageTagResponse> localVarResult = std::make_shared<AddImageTagResponse>();
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
std::shared_ptr<BatchAddMembersResponse> ImsClient::batchAddMembers(BatchAddMembersRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForBatchAddMembers());

    std::shared_ptr<BatchAddMembersResponse> localVarResult = std::make_shared<BatchAddMembersResponse>();
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
std::shared_ptr<BatchAddOrDeleteTagsResponse> ImsClient::batchAddOrDeleteTags(BatchAddOrDeleteTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/{image_id}/tags/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForBatchAddOrDeleteTags());

    std::shared_ptr<BatchAddOrDeleteTagsResponse> localVarResult = std::make_shared<BatchAddOrDeleteTagsResponse>();
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
std::shared_ptr<BatchDeleteMembersResponse> ImsClient::batchDeleteMembers(BatchDeleteMembersRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForBatchDeleteMembers());

    std::shared_ptr<BatchDeleteMembersResponse> localVarResult = std::make_shared<BatchDeleteMembersResponse>();
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
std::shared_ptr<BatchDeleteTagsResponse> ImsClient::batchDeleteTags(BatchDeleteTagsRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cloudimages/{image_id}/tags/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForBatchDeleteTags());

    std::shared_ptr<BatchDeleteTagsResponse> localVarResult = std::make_shared<BatchDeleteTagsResponse>();
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
std::shared_ptr<BatchUpdateMembersResponse> ImsClient::batchUpdateMembers(BatchUpdateMembersRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForBatchUpdateMembers());

    std::shared_ptr<BatchUpdateMembersResponse> localVarResult = std::make_shared<BatchUpdateMembersResponse>();
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
std::shared_ptr<CopyImageCrossRegionResponse> ImsClient::copyImageCrossRegion(CopyImageCrossRegionRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/{image_id}/cross_region_copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCopyImageCrossRegion());

    std::shared_ptr<CopyImageCrossRegionResponse> localVarResult = std::make_shared<CopyImageCrossRegionResponse>();
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
std::shared_ptr<CopyImageInRegionResponse> ImsClient::copyImageInRegion(CopyImageInRegionRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/{image_id}/copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCopyImageInRegion());

    std::shared_ptr<CopyImageInRegionResponse> localVarResult = std::make_shared<CopyImageInRegionResponse>();
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
std::shared_ptr<CopyImageInRegionInSafeModeResponse> ImsClient::copyImageInRegionInSafeMode(CopyImageInRegionInSafeModeRequest &request)
{
    std::string localVarPath = "/v2.1/cloudimages/{image_id}/copy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCopyImageInRegionInSafeMode());

    std::shared_ptr<CopyImageInRegionInSafeModeResponse> localVarResult = std::make_shared<CopyImageInRegionInSafeModeResponse>();
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
std::shared_ptr<CreateDataImageResponse> ImsClient::createDataImage(CreateDataImageRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/dataimages/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateDataImage());

    std::shared_ptr<CreateDataImageResponse> localVarResult = std::make_shared<CreateDataImageResponse>();
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
std::shared_ptr<CreateDataImageInSafeModeResponse> ImsClient::createDataImageInSafeMode(CreateDataImageInSafeModeRequest &request)
{
    std::string localVarPath = "/v2.1/cloudimages/dataimages/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateDataImageInSafeMode());

    std::shared_ptr<CreateDataImageInSafeModeResponse> localVarResult = std::make_shared<CreateDataImageInSafeModeResponse>();
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
std::shared_ptr<CreateImageResponse> ImsClient::createImage(CreateImageRequest &request)
{
    std::string localVarPath = "/v2/cloudimages/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateImage());

    std::shared_ptr<CreateImageResponse> localVarResult = std::make_shared<CreateImageResponse>();
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
std::shared_ptr<CreateImageInSafeModeResponse> ImsClient::createImageInSafeMode(CreateImageInSafeModeRequest &request)
{
    std::string localVarPath = "/v2.1/cloudimages/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateImageInSafeMode());

    std::shared_ptr<CreateImageInSafeModeResponse> localVarResult = std::make_shared<CreateImageInSafeModeResponse>();
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
std::shared_ptr<CreateOrUpdateTagsResponse> ImsClient::createOrUpdateTags(CreateOrUpdateTagsRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateOrUpdateTags());

    std::shared_ptr<CreateOrUpdateTagsResponse> localVarResult = std::make_shared<CreateOrUpdateTagsResponse>();
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
std::shared_ptr<CreateWholeImageResponse> ImsClient::createWholeImage(CreateWholeImageRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/wholeimages/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForCreateWholeImage());

    std::shared_ptr<CreateWholeImageResponse> localVarResult = std::make_shared<CreateWholeImageResponse>();
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
std::shared_ptr<DeleteImageTagResponse> ImsClient::deleteImageTag(DeleteImageTagRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/{image_id}/tags/{key}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["key"] = parameterToString(request.getKey());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForDeleteImageTag());

    std::shared_ptr<DeleteImageTagResponse> localVarResult = std::make_shared<DeleteImageTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExportImageResponse> ImsClient::exportImage(ExportImageRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/{image_id}/file";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForExportImage());

    std::shared_ptr<ExportImageResponse> localVarResult = std::make_shared<ExportImageResponse>();
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
std::shared_ptr<ExportImageInSafeModeResponse> ImsClient::exportImageInSafeMode(ExportImageInSafeModeRequest &request)
{
    std::string localVarPath = "/v2.1/cloudimages/{image_id}/file";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForExportImageInSafeMode());

    std::shared_ptr<ExportImageInSafeModeResponse> localVarResult = std::make_shared<ExportImageInSafeModeResponse>();
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
std::shared_ptr<ImportImageQuickResponse> ImsClient::importImageQuick(ImportImageQuickRequest &request)
{
    std::string localVarPath = "/v2/cloudimages/quickimport/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForImportImageQuick());

    std::shared_ptr<ImportImageQuickResponse> localVarResult = std::make_shared<ImportImageQuickResponse>();
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
std::shared_ptr<ImportImageQuickInSafeModeResponse> ImsClient::importImageQuickInSafeMode(ImportImageQuickInSafeModeRequest &request)
{
    std::string localVarPath = "/v2.1/cloudimages/quickimport/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForImportImageQuickInSafeMode());

    std::shared_ptr<ImportImageQuickInSafeModeResponse> localVarResult = std::make_shared<ImportImageQuickInSafeModeResponse>();
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
std::shared_ptr<ListImageByTagsResponse> ImsClient::listImageByTags(ListImageByTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/resource_instances/action";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListImageByTags());

    std::shared_ptr<ListImageByTagsResponse> localVarResult = std::make_shared<ListImageByTagsResponse>();
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
std::shared_ptr<ListImageMembersResponse> ImsClient::listImageMembers(ListImageMembersRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cloudimages/{image_id}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListImageMembers());

    std::shared_ptr<ListImageMembersResponse> localVarResult = std::make_shared<ListImageMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListImageTagsResponse> ImsClient::listImageTags(ListImageTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/{image_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListImageTags());

    std::shared_ptr<ListImageTagsResponse> localVarResult = std::make_shared<ListImageTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListImagesResponse> ImsClient::listImages(ListImagesRequest &request)
{
    std::string localVarPath = "/v2/cloudimages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.imagetypeIsSet()) {
        localVarQueryParams["__imagetype"] = parameterToString(request.getImagetype());
    }
    if (request.isregisteredIsSet()) {
        localVarQueryParams["__isregistered"] = parameterToString(request.getIsregistered());
    }
    if (request.osBitIsSet()) {
        localVarQueryParams["__os_bit"] = parameterToString(request.getOsBit());
    }
    if (request.osTypeIsSet()) {
        localVarQueryParams["__os_type"] = parameterToString(request.getOsType());
    }
    if (request.platformIsSet()) {
        localVarQueryParams["__platform"] = parameterToString(request.getPlatform());
    }
    if (request.supportDiskintensiveIsSet()) {
        localVarQueryParams["__support_diskintensive"] = parameterToString(request.getSupportDiskintensive());
    }
    if (request.supportHighperformanceIsSet()) {
        localVarQueryParams["__support_highperformance"] = parameterToString(request.getSupportHighperformance());
    }
    if (request.supportKvmIsSet()) {
        localVarQueryParams["__support_kvm"] = parameterToString(request.getSupportKvm());
    }
    if (request.supportKvmGpuTypeIsSet()) {
        localVarQueryParams["__support_kvm_gpu_type"] = parameterToString(request.getSupportKvmGpuType());
    }
    if (request.supportKvmInfinibandIsSet()) {
        localVarQueryParams["__support_kvm_infiniband"] = parameterToString(request.getSupportKvmInfiniband());
    }
    if (request.supportLargememoryIsSet()) {
        localVarQueryParams["__support_largememory"] = parameterToString(request.getSupportLargememory());
    }
    if (request.supportXenIsSet()) {
        localVarQueryParams["__support_xen"] = parameterToString(request.getSupportXen());
    }
    if (request.supportXenGpuTypeIsSet()) {
        localVarQueryParams["__support_xen_gpu_type"] = parameterToString(request.getSupportXenGpuType());
    }
    if (request.supportXenHanaIsSet()) {
        localVarQueryParams["__support_xen_hana"] = parameterToString(request.getSupportXenHana());
    }
    if (request.containerFormatIsSet()) {
        localVarQueryParams["container_format"] = parameterToString(request.getContainerFormat());
    }
    if (request.diskFormatIsSet()) {
        localVarQueryParams["disk_format"] = parameterToString(request.getDiskFormat());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.memberStatusIsSet()) {
        localVarQueryParams["member_status"] = parameterToString(request.getMemberStatus());
    }
    if (request.minDiskIsSet()) {
        localVarQueryParams["min_disk"] = parameterToString(request.getMinDisk());
    }
    if (request.minRamIsSet()) {
        localVarQueryParams["min_ram"] = parameterToString(request.getMinRam());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.ownerIsSet()) {
        localVarQueryParams["owner"] = parameterToString(request.getOwner());
    }
    if (request.protectedIsSet()) {
        localVarQueryParams["protected"] = parameterToString(request.isProtected());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.virtualEnvTypeIsSet()) {
        localVarQueryParams["virtual_env_type"] = parameterToString(request.getVirtualEnvType());
    }
    if (request.visibilityIsSet()) {
        localVarQueryParams["visibility"] = parameterToString(request.getVisibility());
    }
    if (request.flavorIdIsSet()) {
        localVarQueryParams["flavor_id"] = parameterToString(request.getFlavorId());
    }
    if (request.createdAtIsSet()) {
        localVarQueryParams["created_at"] = parameterToString(request.getCreatedAt());
    }
    if (request.updatedAtIsSet()) {
        localVarQueryParams["updated_at"] = parameterToString(request.getUpdatedAt());
    }
    if (request.architectureIsSet()) {
        localVarQueryParams["architecture"] = parameterToString(request.getArchitecture());
    }
    if (request.xSdkDateIsSet()) {
        localVarHeaderParams["X-Sdk-Date"] = parameterToString(request.getXSdkDate());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListImages());

    std::shared_ptr<ListImagesResponse> localVarResult = std::make_shared<ListImagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListImagesTagsResponse> ImsClient::listImagesTags(ListImagesTagsRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/images/tags";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListImagesTags());

    std::shared_ptr<ListImagesTagsResponse> localVarResult = std::make_shared<ListImagesTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListOsVersionsResponse> ImsClient::listOsVersions(ListOsVersionsRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/os_version";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListOsVersions());

    std::shared_ptr<ListOsVersionsResponse> localVarResult = std::make_shared<ListOsVersionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTagsResponse> ImsClient::listTags(ListTagsRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/tags";

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
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.imagetypeIsSet()) {
        localVarQueryParams["__imagetype"] = parameterToString(request.getImagetype());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.minDiskIsSet()) {
        localVarQueryParams["min_disk"] = parameterToString(request.getMinDisk());
    }
    if (request.platformIsSet()) {
        localVarQueryParams["__platform"] = parameterToString(request.getPlatform());
    }
    if (request.osTypeIsSet()) {
        localVarQueryParams["__os_type"] = parameterToString(request.getOsType());
    }
    if (request.memberStatusIsSet()) {
        localVarQueryParams["member_status"] = parameterToString(request.getMemberStatus());
    }
    if (request.virtualEnvTypeIsSet()) {
        localVarQueryParams["virtual_env_type"] = parameterToString(request.getVirtualEnvType());
    }
    if (request.enterpriseProjectIdIsSet()) {
        localVarQueryParams["enterprise_project_id"] = parameterToString(request.getEnterpriseProjectId());
    }
    if (request.architectureIsSet()) {
        localVarQueryParams["architecture"] = parameterToString(request.getArchitecture());
    }
    if (request.createdAtIsSet()) {
        localVarQueryParams["created_at"] = parameterToString(request.getCreatedAt());
    }
    if (request.updatedAtIsSet()) {
        localVarQueryParams["updated_at"] = parameterToString(request.getUpdatedAt());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListTags());

    std::shared_ptr<ListTagsResponse> localVarResult = std::make_shared<ListTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RegisterImageResponse> ImsClient::registerImage(RegisterImageRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/{image_id}/upload";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForRegisterImage());

    std::shared_ptr<RegisterImageResponse> localVarResult = std::make_shared<RegisterImageResponse>();
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
std::shared_ptr<ShowImageMemberResponse> ImsClient::showImageMember(ShowImageMemberRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/cloudimages/{image_id}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["member_id"] = parameterToString(request.getMemberId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForShowImageMember());

    std::shared_ptr<ShowImageMemberResponse> localVarResult = std::make_shared<ShowImageMemberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowImageQuotaResponse> ImsClient::showImageQuota(ShowImageQuotaRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/quota";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForShowImageQuota());

    std::shared_ptr<ShowImageQuotaResponse> localVarResult = std::make_shared<ShowImageQuotaResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobResponse> ImsClient::showJob(ShowJobRequest &request)
{
    std::string localVarPath = "/v1/{project_id}/jobs/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForShowJob());

    std::shared_ptr<ShowJobResponse> localVarResult = std::make_shared<ShowJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobProgressResponse> ImsClient::showJobProgress(ShowJobProgressRequest &request)
{
    std::string localVarPath = "/v1/cloudimages/job/{job_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForShowJobProgress());

    std::shared_ptr<ShowJobProgressResponse> localVarResult = std::make_shared<ShowJobProgressResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateImageResponse> ImsClient::updateImage(UpdateImageRequest &request)
{
    std::string localVarPath = "/v2/cloudimages/{image_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PATCH", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForUpdateImage());

    std::shared_ptr<UpdateImageResponse> localVarResult = std::make_shared<UpdateImageResponse>();
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
std::shared_ptr<ListVersionsResponse> ImsClient::listVersions(ListVersionsRequest &request)
{
    std::string localVarPath = "/";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForListVersions());

    std::shared_ptr<ListVersionsResponse> localVarResult = std::make_shared<ListVersionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowVersionResponse> ImsClient::showVersion(ShowVersionRequest &request)
{
    std::string localVarPath = "/{version}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["version"] = parameterToString(request.getVersion());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForShowVersion());

    std::shared_ptr<ShowVersionResponse> localVarResult = std::make_shared<ShowVersionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceAddImageMemberResponse> ImsClient::glanceAddImageMember(GlanceAddImageMemberRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceAddImageMember());

    std::shared_ptr<GlanceAddImageMemberResponse> localVarResult = std::make_shared<GlanceAddImageMemberResponse>();
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
std::shared_ptr<GlanceCreateImageMetadataResponse> ImsClient::glanceCreateImageMetadata(GlanceCreateImageMetadataRequest &request)
{
    std::string localVarPath = "/v2/images";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceCreateImageMetadata());

    std::shared_ptr<GlanceCreateImageMetadataResponse> localVarResult = std::make_shared<GlanceCreateImageMetadataResponse>();
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
std::shared_ptr<GlanceCreateTagResponse> ImsClient::glanceCreateTag(GlanceCreateTagRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/tags/{tag}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["tag"] = parameterToString(request.getTag());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceCreateTag());

    std::shared_ptr<GlanceCreateTagResponse> localVarResult = std::make_shared<GlanceCreateTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceDeleteImageResponse> ImsClient::glanceDeleteImage(GlanceDeleteImageRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceDeleteImage());

    std::shared_ptr<GlanceDeleteImageResponse> localVarResult = std::make_shared<GlanceDeleteImageResponse>();
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
std::shared_ptr<GlanceDeleteImageMemberResponse> ImsClient::glanceDeleteImageMember(GlanceDeleteImageMemberRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["member_id"] = parameterToString(request.getMemberId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceDeleteImageMember());

    std::shared_ptr<GlanceDeleteImageMemberResponse> localVarResult = std::make_shared<GlanceDeleteImageMemberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceDeleteTagResponse> ImsClient::glanceDeleteTag(GlanceDeleteTagRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/tags/{tag}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["tag"] = parameterToString(request.getTag());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceDeleteTag());

    std::shared_ptr<GlanceDeleteTagResponse> localVarResult = std::make_shared<GlanceDeleteTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceListImageMemberSchemasResponse> ImsClient::glanceListImageMemberSchemas(GlanceListImageMemberSchemasRequest &request)
{
    std::string localVarPath = "/v2/schemas/members";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceListImageMemberSchemas());

    std::shared_ptr<GlanceListImageMemberSchemasResponse> localVarResult = std::make_shared<GlanceListImageMemberSchemasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceListImageMembersResponse> ImsClient::glanceListImageMembers(GlanceListImageMembersRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceListImageMembers());

    std::shared_ptr<GlanceListImageMembersResponse> localVarResult = std::make_shared<GlanceListImageMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceListImageSchemasResponse> ImsClient::glanceListImageSchemas(GlanceListImageSchemasRequest &request)
{
    std::string localVarPath = "/v2/schemas/images";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceListImageSchemas());

    std::shared_ptr<GlanceListImageSchemasResponse> localVarResult = std::make_shared<GlanceListImageSchemasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceListImagesResponse> ImsClient::glanceListImages(GlanceListImagesRequest &request)
{
    std::string localVarPath = "/v2/images";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.imagetypeIsSet()) {
        localVarQueryParams["__imagetype"] = parameterToString(request.getImagetype());
    }
    if (request.isregisteredIsSet()) {
        localVarQueryParams["__isregistered"] = parameterToString(request.isIsregistered());
    }
    if (request.osBitIsSet()) {
        localVarQueryParams["__os_bit"] = parameterToString(request.getOsBit());
    }
    if (request.osTypeIsSet()) {
        localVarQueryParams["__os_type"] = parameterToString(request.getOsType());
    }
    if (request.platformIsSet()) {
        localVarQueryParams["__platform"] = parameterToString(request.getPlatform());
    }
    if (request.supportDiskintensiveIsSet()) {
        localVarQueryParams["__support_diskintensive"] = parameterToString(request.getSupportDiskintensive());
    }
    if (request.supportHighperformanceIsSet()) {
        localVarQueryParams["__support_highperformance"] = parameterToString(request.getSupportHighperformance());
    }
    if (request.supportKvmIsSet()) {
        localVarQueryParams["__support_kvm"] = parameterToString(request.getSupportKvm());
    }
    if (request.supportKvmGpuTypeIsSet()) {
        localVarQueryParams["__support_kvm_gpu_type"] = parameterToString(request.getSupportKvmGpuType());
    }
    if (request.supportKvmInfinibandIsSet()) {
        localVarQueryParams["__support_kvm_infiniband"] = parameterToString(request.getSupportKvmInfiniband());
    }
    if (request.supportLargememoryIsSet()) {
        localVarQueryParams["__support_largememory"] = parameterToString(request.getSupportLargememory());
    }
    if (request.supportXenIsSet()) {
        localVarQueryParams["__support_xen"] = parameterToString(request.getSupportXen());
    }
    if (request.supportXenGpuTypeIsSet()) {
        localVarQueryParams["__support_xen_gpu_type"] = parameterToString(request.getSupportXenGpuType());
    }
    if (request.supportXenHanaIsSet()) {
        localVarQueryParams["__support_xen_hana"] = parameterToString(request.getSupportXenHana());
    }
    if (request.containerFormatIsSet()) {
        localVarQueryParams["container_format"] = parameterToString(request.getContainerFormat());
    }
    if (request.diskFormatIsSet()) {
        localVarQueryParams["disk_format"] = parameterToString(request.getDiskFormat());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.markerIsSet()) {
        localVarQueryParams["marker"] = parameterToString(request.getMarker());
    }
    if (request.memberStatusIsSet()) {
        localVarQueryParams["member_status"] = parameterToString(request.getMemberStatus());
    }
    if (request.minDiskIsSet()) {
        localVarQueryParams["min_disk"] = parameterToString(request.getMinDisk());
    }
    if (request.minRamIsSet()) {
        localVarQueryParams["min_ram"] = parameterToString(request.getMinRam());
    }
    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.ownerIsSet()) {
        localVarQueryParams["owner"] = parameterToString(request.getOwner());
    }
    if (request.protectedIsSet()) {
        localVarQueryParams["protected"] = parameterToString(request.isProtected());
    }
    if (request.sortDirIsSet()) {
        localVarQueryParams["sort_dir"] = parameterToString(request.getSortDir());
    }
    if (request.sortKeyIsSet()) {
        localVarQueryParams["sort_key"] = parameterToString(request.getSortKey());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.tagIsSet()) {
        localVarQueryParams["tag"] = parameterToString(request.getTag());
    }
    if (request.visibilityIsSet()) {
        localVarQueryParams["visibility"] = parameterToString(request.getVisibility());
    }
    if (request.createdAtIsSet()) {
        localVarQueryParams["created_at"] = parameterToString(request.getCreatedAt());
    }
    if (request.updatedAtIsSet()) {
        localVarQueryParams["updated_at"] = parameterToString(request.getUpdatedAt());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceListImages());

    std::shared_ptr<GlanceListImagesResponse> localVarResult = std::make_shared<GlanceListImagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceShowImageResponse> ImsClient::glanceShowImage(GlanceShowImageRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceShowImage());

    std::shared_ptr<GlanceShowImageResponse> localVarResult = std::make_shared<GlanceShowImageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceShowImageMemberResponse> ImsClient::glanceShowImageMember(GlanceShowImageMemberRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["member_id"] = parameterToString(request.getMemberId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceShowImageMember());

    std::shared_ptr<GlanceShowImageMemberResponse> localVarResult = std::make_shared<GlanceShowImageMemberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceShowImageMemberSchemasResponse> ImsClient::glanceShowImageMemberSchemas(GlanceShowImageMemberSchemasRequest &request)
{
    std::string localVarPath = "/v2/schemas/member";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceShowImageMemberSchemas());

    std::shared_ptr<GlanceShowImageMemberSchemasResponse> localVarResult = std::make_shared<GlanceShowImageMemberSchemasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceShowImageSchemasResponse> ImsClient::glanceShowImageSchemas(GlanceShowImageSchemasRequest &request)
{
    std::string localVarPath = "/v2/schemas/image";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceShowImageSchemas());

    std::shared_ptr<GlanceShowImageSchemasResponse> localVarResult = std::make_shared<GlanceShowImageSchemasResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GlanceUpdateImageResponse> ImsClient::glanceUpdateImage(GlanceUpdateImageRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/openstack-images-v2.1-json-patch", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PATCH", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceUpdateImage());

    std::shared_ptr<GlanceUpdateImageResponse> localVarResult = std::make_shared<GlanceUpdateImageResponse>();
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
std::shared_ptr<GlanceUpdateImageMemberResponse> ImsClient::glanceUpdateImageMember(GlanceUpdateImageMemberRequest &request)
{
    std::string localVarPath = "/v2/images/{image_id}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["image_id"] = parameterToString(request.getImageId());
    localVarPathParams["member_id"] = parameterToString(request.getMemberId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, ImsMeta::genRequestDefForGlanceUpdateImageMember());

    std::shared_ptr<GlanceUpdateImageMemberResponse> localVarResult = std::make_shared<GlanceUpdateImageMemberResponse>();
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
std::string ImsClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string ImsClient::parameterToString(std::string value)
{
    return value;
}

std::string ImsClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string ImsClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string ImsClient::parameterToString(float value)
{
    return toString(value);
}

std::string ImsClient::parameterToString(double value)
{
    return toString(value);
}

std::string ImsClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string ImsClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

