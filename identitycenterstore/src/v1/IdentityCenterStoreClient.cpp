#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreClient.h>
#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreMeta.h>

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
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Identitycenterstore::V1::Model;

IdentityCenterStoreClient::IdentityCenterStoreClient()
{
}

IdentityCenterStoreClient::~IdentityCenterStoreClient()
{
}

ClientBuilder<IdentityCenterStoreClient> IdentityCenterStoreClient::newBuilder()
{
    ClientBuilder<IdentityCenterStoreClient> client = ClientBuilder<IdentityCenterStoreClient>("");
    return client;
}
std::shared_ptr<CreateGroupResponse> IdentityCenterStoreClient::createGroup(CreateGroupRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateGroup());

    std::shared_ptr<CreateGroupResponse> localVarResult = std::make_shared<CreateGroupResponse>();
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
std::shared_ptr<DeleteGroupResponse> IdentityCenterStoreClient::deleteGroup(DeleteGroupRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteGroup());

    std::shared_ptr<DeleteGroupResponse> localVarResult = std::make_shared<DeleteGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeGroupResponse> IdentityCenterStoreClient::describeGroup(DescribeGroupRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribeGroup());

    std::shared_ptr<DescribeGroupResponse> localVarResult = std::make_shared<DescribeGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeGroupsResponse> IdentityCenterStoreClient::describeGroups(DescribeGroupsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups/batch-query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribeGroups());

    std::shared_ptr<DescribeGroupsResponse> localVarResult = std::make_shared<DescribeGroupsResponse>();
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
std::shared_ptr<GetGroupIdResponse> IdentityCenterStoreClient::getGroupId(GetGroupIdRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups/retrieve-group-id";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForGetGroupId());

    std::shared_ptr<GetGroupIdResponse> localVarResult = std::make_shared<GetGroupIdResponse>();
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
std::shared_ptr<ListGroupsResponse> IdentityCenterStoreClient::listGroups(ListGroupsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

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
    if (request.displayNameIsSet()) {
        localVarQueryParams["display_name"] = parameterToString(request.getDisplayName());
    }
    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListGroups());

    std::shared_ptr<ListGroupsResponse> localVarResult = std::make_shared<ListGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGroupResponse> IdentityCenterStoreClient::updateGroup(UpdateGroupRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdateGroup());

    std::shared_ptr<UpdateGroupResponse> localVarResult = std::make_shared<UpdateGroupResponse>();
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
std::shared_ptr<CreateGroupMembershipResponse> IdentityCenterStoreClient::createGroupMembership(CreateGroupMembershipRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateGroupMembership());

    std::shared_ptr<CreateGroupMembershipResponse> localVarResult = std::make_shared<CreateGroupMembershipResponse>();
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
std::shared_ptr<DeleteGroupMembershipResponse> IdentityCenterStoreClient::deleteGroupMembership(DeleteGroupMembershipRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships/{membership_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["membership_id"] = parameterToString(request.getMembershipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteGroupMembership());

    std::shared_ptr<DeleteGroupMembershipResponse> localVarResult = std::make_shared<DeleteGroupMembershipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeGroupMembershipResponse> IdentityCenterStoreClient::describeGroupMembership(DescribeGroupMembershipRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships/{membership_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["membership_id"] = parameterToString(request.getMembershipId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribeGroupMembership());

    std::shared_ptr<DescribeGroupMembershipResponse> localVarResult = std::make_shared<DescribeGroupMembershipResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetGroupMembershipIdResponse> IdentityCenterStoreClient::getGroupMembershipId(GetGroupMembershipIdRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships/retrieve-group-membership-id";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForGetGroupMembershipId());

    std::shared_ptr<GetGroupMembershipIdResponse> localVarResult = std::make_shared<GetGroupMembershipIdResponse>();
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
std::shared_ptr<IsMemberInGroupsResponse> IdentityCenterStoreClient::isMemberInGroups(IsMemberInGroupsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/is-member-in-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForIsMemberInGroups());

    std::shared_ptr<IsMemberInGroupsResponse> localVarResult = std::make_shared<IsMemberInGroupsResponse>();
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
std::shared_ptr<ListGroupMembershipsResponse> IdentityCenterStoreClient::listGroupMemberships(ListGroupMembershipsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

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
    if (request.groupIdIsSet()) {
        localVarQueryParams["group_id"] = parameterToString(request.getGroupId());
    }
    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListGroupMemberships());

    std::shared_ptr<ListGroupMembershipsResponse> localVarResult = std::make_shared<ListGroupMembershipsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMembershipsForMemberResponse> IdentityCenterStoreClient::listGroupMembershipsForMember(ListGroupMembershipsForMemberRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/group-memberships-for-member";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

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
    if (request.userIdIsSet()) {
        localVarQueryParams["user_id"] = parameterToString(request.getUserId());
    }
    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListGroupMembershipsForMember());

    std::shared_ptr<ListGroupMembershipsForMemberResponse> localVarResult = std::make_shared<ListGroupMembershipsForMemberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateExternalIdPConfigurationForDirectoryResponse> IdentityCenterStoreClient::createExternalIdPConfigurationForDirectory(CreateExternalIdPConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateExternalIdPConfigurationForDirectory());

    std::shared_ptr<CreateExternalIdPConfigurationForDirectoryResponse> localVarResult = std::make_shared<CreateExternalIdPConfigurationForDirectoryResponse>();
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
std::shared_ptr<DeleteExternalIdPCertificateResponse> IdentityCenterStoreClient::deleteExternalIdPCertificate(DeleteExternalIdPCertificateRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}/certificate/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteExternalIdPCertificate());

    std::shared_ptr<DeleteExternalIdPCertificateResponse> localVarResult = std::make_shared<DeleteExternalIdPCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteExternalIdPConfigurationForDirectoryResponse> IdentityCenterStoreClient::deleteExternalIdPConfigurationForDirectory(DeleteExternalIdPConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteExternalIdPConfigurationForDirectory());

    std::shared_ptr<DeleteExternalIdPConfigurationForDirectoryResponse> localVarResult = std::make_shared<DeleteExternalIdPConfigurationForDirectoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisableExternalIdPConfigurationForDirectoryResponse> IdentityCenterStoreClient::disableExternalIdPConfigurationForDirectory(DisableExternalIdPConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}/disable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDisableExternalIdPConfigurationForDirectory());

    std::shared_ptr<DisableExternalIdPConfigurationForDirectoryResponse> localVarResult = std::make_shared<DisableExternalIdPConfigurationForDirectoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableExternalIdPConfigurationForDirectoryResponse> IdentityCenterStoreClient::enableExternalIdPConfigurationForDirectory(EnableExternalIdPConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}/enable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForEnableExternalIdPConfigurationForDirectory());

    std::shared_ptr<EnableExternalIdPConfigurationForDirectoryResponse> localVarResult = std::make_shared<EnableExternalIdPConfigurationForDirectoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ImportExternalIdPCertificateResponse> IdentityCenterStoreClient::importExternalIdPCertificate(ImportExternalIdPCertificateRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}/certificate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForImportExternalIdPCertificate());

    std::shared_ptr<ImportExternalIdPCertificateResponse> localVarResult = std::make_shared<ImportExternalIdPCertificateResponse>();
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
std::shared_ptr<ListExternalIdPCertificatesResponse> IdentityCenterStoreClient::listExternalIdPCertificates(ListExternalIdPCertificatesRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}/certificate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListExternalIdPCertificates());

    std::shared_ptr<ListExternalIdPCertificatesResponse> localVarResult = std::make_shared<ListExternalIdPCertificatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListExternalIdPConfigurationsForDirectoryResponse> IdentityCenterStoreClient::listExternalIdPConfigurationsForDirectory(ListExternalIdPConfigurationsForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListExternalIdPConfigurationsForDirectory());

    std::shared_ptr<ListExternalIdPConfigurationsForDirectoryResponse> localVarResult = std::make_shared<ListExternalIdPConfigurationsForDirectoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateExternalIdPConfigurationForDirectoryResponse> IdentityCenterStoreClient::updateExternalIdPConfigurationForDirectory(UpdateExternalIdPConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/external-idp/{idp_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["idp_id"] = parameterToString(request.getIdpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdateExternalIdPConfigurationForDirectory());

    std::shared_ptr<UpdateExternalIdPConfigurationForDirectoryResponse> localVarResult = std::make_shared<UpdateExternalIdPConfigurationForDirectoryResponse>();
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
std::shared_ptr<DescribePasswordPolicyResponse> IdentityCenterStoreClient::describePasswordPolicy(DescribePasswordPolicyRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/password-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribePasswordPolicy());

    std::shared_ptr<DescribePasswordPolicyResponse> localVarResult = std::make_shared<DescribePasswordPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdatePasswordPolicyResponse> IdentityCenterStoreClient::updatePasswordPolicy(UpdatePasswordPolicyRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/password-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdatePasswordPolicy());

    std::shared_ptr<UpdatePasswordPolicyResponse> localVarResult = std::make_shared<UpdatePasswordPolicyResponse>();
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
std::shared_ptr<CreateSpCertificateResponse> IdentityCenterStoreClient::createSpCertificate(CreateSpCertificateRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/saml-certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateSpCertificate());

    std::shared_ptr<CreateSpCertificateResponse> localVarResult = std::make_shared<CreateSpCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteSpCertificateResponse> IdentityCenterStoreClient::deleteSpCertificate(DeleteSpCertificateRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/saml-certificates/{certificate_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteSpCertificate());

    std::shared_ptr<DeleteSpCertificateResponse> localVarResult = std::make_shared<DeleteSpCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetSpConfigurationForDirectoryResponse> IdentityCenterStoreClient::getSpConfigurationForDirectory(GetSpConfigurationForDirectoryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/sp-config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForGetSpConfigurationForDirectory());

    std::shared_ptr<GetSpConfigurationForDirectoryResponse> localVarResult = std::make_shared<GetSpConfigurationForDirectoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSpCertificatesResponse> IdentityCenterStoreClient::listSpCertificates(ListSpCertificatesRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/saml-certificates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListSpCertificates());

    std::shared_ptr<ListSpCertificatesResponse> localVarResult = std::make_shared<ListSpCertificatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateSpActiveCertificateResponse> IdentityCenterStoreClient::updateSpActiveCertificate(UpdateSpActiveCertificateRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/saml-certificates/{certificate_id}/active";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["certificate_id"] = parameterToString(request.getCertificateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdateSpActiveCertificate());

    std::shared_ptr<UpdateSpActiveCertificateResponse> localVarResult = std::make_shared<UpdateSpActiveCertificateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetIdentityStoreSummaryResponse> IdentityCenterStoreClient::getIdentityStoreSummary(GetIdentityStoreSummaryRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/identity-store-summary";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForGetIdentityStoreSummary());

    std::shared_ptr<GetIdentityStoreSummaryResponse> localVarResult = std::make_shared<GetIdentityStoreSummaryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateBearerTokenResponse> IdentityCenterStoreClient::createBearerToken(CreateBearerTokenRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/tenant/{tenant_id}/bearer-token";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateBearerToken());

    std::shared_ptr<CreateBearerTokenResponse> localVarResult = std::make_shared<CreateBearerTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateProvisioningTenantResponse> IdentityCenterStoreClient::createProvisioningTenant(CreateProvisioningTenantRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/provision-tenant";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateProvisioningTenant());

    std::shared_ptr<CreateProvisioningTenantResponse> localVarResult = std::make_shared<CreateProvisioningTenantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteBearerTokenResponse> IdentityCenterStoreClient::deleteBearerToken(DeleteBearerTokenRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/tenant/{tenant_id}/bearer-token/{token_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());
    localVarPathParams["token_id"] = parameterToString(request.getTokenId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteBearerToken());

    std::shared_ptr<DeleteBearerTokenResponse> localVarResult = std::make_shared<DeleteBearerTokenResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteProvisioningTenantResponse> IdentityCenterStoreClient::deleteProvisioningTenant(DeleteProvisioningTenantRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/tenant/{tenant_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteProvisioningTenant());

    std::shared_ptr<DeleteProvisioningTenantResponse> localVarResult = std::make_shared<DeleteProvisioningTenantResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBearerTokensResponse> IdentityCenterStoreClient::listBearerTokens(ListBearerTokensRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/tenant/{tenant_id}/bearer-token";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListBearerTokens());

    std::shared_ptr<ListBearerTokensResponse> localVarResult = std::make_shared<ListBearerTokensResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProvisioningTenantsResponse> IdentityCenterStoreClient::listProvisioningTenants(ListProvisioningTenantsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/provision-tenant";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListProvisioningTenants());

    std::shared_ptr<ListProvisioningTenantsResponse> localVarResult = std::make_shared<ListProvisioningTenantsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BatchDeleteSessionsResponse> IdentityCenterStoreClient::batchDeleteSessions(BatchDeleteSessionsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/sessions/batch-delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForBatchDeleteSessions());

    std::shared_ptr<BatchDeleteSessionsResponse> localVarResult = std::make_shared<BatchDeleteSessionsResponse>();
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
std::shared_ptr<BatchListMfaDevicesForUserResponse> IdentityCenterStoreClient::batchListMfaDevicesForUser(BatchListMfaDevicesForUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/retrieve-mfa-devices";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForBatchListMfaDevicesForUser());

    std::shared_ptr<BatchListMfaDevicesForUserResponse> localVarResult = std::make_shared<BatchListMfaDevicesForUserResponse>();
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
std::shared_ptr<CreateUserResponse> IdentityCenterStoreClient::createUser(CreateUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForCreateUser());

    std::shared_ptr<CreateUserResponse> localVarResult = std::make_shared<CreateUserResponse>();
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
std::shared_ptr<DeleteMfaDeviceForUserResponse> IdentityCenterStoreClient::deleteMfaDeviceForUser(DeleteMfaDeviceForUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/mfa-devices/{device_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());
    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteMfaDeviceForUser());

    std::shared_ptr<DeleteMfaDeviceForUserResponse> localVarResult = std::make_shared<DeleteMfaDeviceForUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteUserResponse> IdentityCenterStoreClient::deleteUser(DeleteUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDeleteUser());

    std::shared_ptr<DeleteUserResponse> localVarResult = std::make_shared<DeleteUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeUserResponse> IdentityCenterStoreClient::describeUser(DescribeUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribeUser());

    std::shared_ptr<DescribeUserResponse> localVarResult = std::make_shared<DescribeUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DescribeUsersResponse> IdentityCenterStoreClient::describeUsers(DescribeUsersRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/batch-query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDescribeUsers());

    std::shared_ptr<DescribeUsersResponse> localVarResult = std::make_shared<DescribeUsersResponse>();
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
std::shared_ptr<DisableUserResponse> IdentityCenterStoreClient::disableUser(DisableUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/disable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForDisableUser());

    std::shared_ptr<DisableUserResponse> localVarResult = std::make_shared<DisableUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableUserResponse> IdentityCenterStoreClient::enableUser(EnableUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/enable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForEnableUser());

    std::shared_ptr<EnableUserResponse> localVarResult = std::make_shared<EnableUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetUserIdResponse> IdentityCenterStoreClient::getUserId(GetUserIdRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/retrieve-user-id";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForGetUserId());

    std::shared_ptr<GetUserIdResponse> localVarResult = std::make_shared<GetUserIdResponse>();
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
std::shared_ptr<ListSessionsResponse> IdentityCenterStoreClient::listSessions(ListSessionsRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/sessions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListSessions());

    std::shared_ptr<ListSessionsResponse> localVarResult = std::make_shared<ListSessionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListUsersResponse> IdentityCenterStoreClient::listUsers(ListUsersRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());

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
    if (request.userNameIsSet()) {
        localVarQueryParams["user_name"] = parameterToString(request.getUserName());
    }
    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForListUsers());

    std::shared_ptr<ListUsersResponse> localVarResult = std::make_shared<ListUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RegisterMfaDeviceForUserResponse> IdentityCenterStoreClient::registerMfaDeviceForUser(RegisterMfaDeviceForUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/mfa-devices/register-mfa-device";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForRegisterMfaDeviceForUser());

    std::shared_ptr<RegisterMfaDeviceForUserResponse> localVarResult = std::make_shared<RegisterMfaDeviceForUserResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResetPwdModeResponse> IdentityCenterStoreClient::resetPwdMode(ResetPwdModeRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/reset-password";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForResetPwdMode());

    std::shared_ptr<ResetPwdModeResponse> localVarResult = std::make_shared<ResetPwdModeResponse>();
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
std::shared_ptr<UpdateMfaDeviceForUserResponse> IdentityCenterStoreClient::updateMfaDeviceForUser(UpdateMfaDeviceForUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/mfa-devices/{device_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());
    localVarPathParams["device_id"] = parameterToString(request.getDeviceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdateMfaDeviceForUser());

    std::shared_ptr<UpdateMfaDeviceForUserResponse> localVarResult = std::make_shared<UpdateMfaDeviceForUserResponse>();
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
std::shared_ptr<UpdateUserResponse> IdentityCenterStoreClient::updateUser(UpdateUserRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForUpdateUser());

    std::shared_ptr<UpdateUserResponse> localVarResult = std::make_shared<UpdateUserResponse>();
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
std::shared_ptr<VerifyEmailResponse> IdentityCenterStoreClient::verifyEmail(VerifyEmailRequest &request)
{
    std::string localVarPath = "/v1/identity-stores/{identity_store_id}/users/{user_id}/verify-email";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["identity_store_id"] = parameterToString(request.getIdentityStoreId());
    localVarPathParams["user_id"] = parameterToString(request.getUserId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.xSecurityTokenIsSet()) {
        localVarHeaderParams["X-Security-Token"] = parameterToString(request.getXSecurityToken());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, IdentityCenterStoreMeta::genRequestDefForVerifyEmail());

    std::shared_ptr<VerifyEmailResponse> localVarResult = std::make_shared<VerifyEmailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string IdentityCenterStoreClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string IdentityCenterStoreClient::parameterToString(std::string value)
{
    return value;
}

std::string IdentityCenterStoreClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string IdentityCenterStoreClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string IdentityCenterStoreClient::parameterToString(float value)
{
    return toString(value);
}

std::string IdentityCenterStoreClient::parameterToString(double value)
{
    return toString(value);
}

std::string IdentityCenterStoreClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string IdentityCenterStoreClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

