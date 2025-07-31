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

