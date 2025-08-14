#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_

#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/identitycenterstore/v1/model/CreateGroupReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupsRequestBody.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateGroupResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateExternalIdPConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateExternalIdPConfigurationForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateIDPReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPCertificateRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPCertificateResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPConfigurationForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DisableExternalIdPConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DisableExternalIdPConfigurationForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/EnableExternalIdPConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/EnableExternalIdPConfigurationForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListExternalIdPCertificatesRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListExternalIdPCertificatesResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListExternalIdPConfigurationsForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListExternalIdPConfigurationsForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateExternalIdPConfigurationForDirectoryReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateExternalIdPConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateExternalIdPConfigurationForDirectoryResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/DescribePasswordPolicyRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribePasswordPolicyResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdatePasswordPolicyReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdatePasswordPolicyRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdatePasswordPolicyResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateSpCertificateRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateSpCertificateResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteSpCertificateRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteSpCertificateResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetSpConfigurationForDirectoryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetSpConfigurationForDirectoryResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListSpCertificatesRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListSpCertificatesResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/SpCertificateDto.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateSpActiveCertificateRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateSpActiveCertificateResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/GetIdentityStoreSummaryRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetIdentityStoreSummaryResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/CreateBearerTokenRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateBearerTokenResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateProvisioningTenantRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateProvisioningTenantResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteBearerTokenRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteBearerTokenResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteProvisioningTenantRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteProvisioningTenantResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListBearerTokensRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListBearerTokensResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListProvisioningTenantsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListProvisioningTenantsResponse.h>
#include <string>

#include <huaweicloud/identitycenterstore/v1/model/BatchDeleteSessionsReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/BatchDeleteSessionsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/BatchDeleteSessionsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/CreateUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteMfaDeviceForUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteMfaDeviceForUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DeleteUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUsersRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUsersRequestBody.h>
#include <huaweicloud/identitycenterstore/v1/model/DescribeUsersResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/DisableUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/DisableUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/EnableUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/EnableUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/GetUserIdResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListSessionsRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListSessionsResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ListUsersRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ListUsersResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/RegisterMfaDeviceForUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/RegisterMfaDeviceForUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/ResetPwdModeRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/ResetPwdModeResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateMfaDeviceForUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateMfaDeviceForUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateMfaDeviceForUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdatePwdModeReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserReqBody.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/UpdateUserResponse.h>
#include <huaweicloud/identitycenterstore/v1/model/VerifyEmailRequest.h>
#include <huaweicloud/identitycenterstore/v1/model/VerifyEmailResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Identitycenterstore::V1::Model;

class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdentityCenterStoreClient : public Client
{
public:

    IdentityCenterStoreClient();

    virtual ~IdentityCenterStoreClient();

    static ClientBuilder<IdentityCenterStoreClient> newBuilder();

    // 创建用户组
    //
    // 在指定的身份源中创建一个IAM身份中心用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupResponse> createGroup(
        CreateGroupRequest &request
    );
    // 删除用户组
    //
    // 根据用户组ID，删除对应的IAM身份中心用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupResponse> deleteGroup(
        DeleteGroupRequest &request
    );
    // 查询用户组详情
    //
    // 根据用户组ID，查询IAM身份中心用户组的详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeGroupResponse> describeGroup(
        DescribeGroupRequest &request
    );
    // 批量查询指定用户组详情
    //
    // 批量查询指定用户组详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeGroupsResponse> describeGroups(
        DescribeGroupsRequest &request
    );
    // 查询用户组ID
    //
    // 根据显示名或外部身份源ID，以精确匹配的方式查询用户组ID。显示名和外部身份源ID两种查询方式二选一，不支持同时传入。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetGroupIdResponse> getGroupId(
        GetGroupIdRequest &request
    );
    // 列出用户组
    //
    // 查询指定身份源下的IAM身份中心用户组列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupsResponse> listGroups(
        ListGroupsRequest &request
    );
    // 更新用户组
    //
    // 根据用户组ID，更新对应IAM身份中心用户组的属性。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupResponse> updateGroup(
        UpdateGroupRequest &request
    );

    // 绑定用户和组
    //
    // 将用户添加到用户组中，用户和用户组必须在同一身份源下。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupMembershipResponse> createGroupMembership(
        CreateGroupMembershipRequest &request
    );
    // 解绑用户和组
    //
    // 根据关联关系ID解绑用户和用户组，也就是将用户移出用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupMembershipResponse> deleteGroupMembership(
        DeleteGroupMembershipRequest &request
    );
    // 查询绑定关系详情
    //
    // 根据关联关系ID，查询此关联关系的详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeGroupMembershipResponse> describeGroupMembership(
        DescribeGroupMembershipRequest &request
    );
    // 查询绑定关系ID
    //
    // 根据用户ID和用户组ID，查询对应的关联关系ID。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetGroupMembershipIdResponse> getGroupMembershipId(
        GetGroupMembershipIdRequest &request
    );
    // 查询用户是否是用户组成员
    //
    // 根据用户ID和用户组ID列表，查询用户是否为用户组的成员。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<IsMemberInGroupsResponse> isMemberInGroups(
        IsMemberInGroupsRequest &request
    );
    // 列出组中的用户
    //
    // 根据用户组ID，列出用户组中的用户。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMembershipsResponse> listGroupMemberships(
        ListGroupMembershipsRequest &request
    );
    // 列出用户加入的组
    //
    // 根据用户ID，列出用户加入的用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMembershipsForMemberResponse> listGroupMembershipsForMember(
        ListGroupMembershipsForMemberRequest &request
    );

    // 创建外部身份提供商配置
    //
    // 创建外部身份提供商配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateExternalIdPConfigurationForDirectoryResponse> createExternalIdPConfigurationForDirectory(
        CreateExternalIdPConfigurationForDirectoryRequest &request
    );
    // 删除外部身份提供商证书
    //
    // 删除外部身份提供商证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteExternalIdPCertificateResponse> deleteExternalIdPCertificate(
        DeleteExternalIdPCertificateRequest &request
    );
    // 删除外部身份提供商配置
    //
    // 删除外部身份提供商配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteExternalIdPConfigurationForDirectoryResponse> deleteExternalIdPConfigurationForDirectory(
        DeleteExternalIdPConfigurationForDirectoryRequest &request
    );
    // 停用外部身份提供商
    //
    // 停用外部身份提供商。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableExternalIdPConfigurationForDirectoryResponse> disableExternalIdPConfigurationForDirectory(
        DisableExternalIdPConfigurationForDirectoryRequest &request
    );
    // 启用外部身份提供商
    //
    // 启用外部身份提供商。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableExternalIdPConfigurationForDirectoryResponse> enableExternalIdPConfigurationForDirectory(
        EnableExternalIdPConfigurationForDirectoryRequest &request
    );
    // 导入外部身份提供商证书
    //
    // 导入外部身份提供商证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportExternalIdPCertificateResponse> importExternalIdPCertificate(
        ImportExternalIdPCertificateRequest &request
    );
    // 列出外部身份提供商证书
    //
    // 查询外部身份提供商证书列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExternalIdPCertificatesResponse> listExternalIdPCertificates(
        ListExternalIdPCertificatesRequest &request
    );
    // 查询外部身份提供商配置
    //
    // 查询外部身份提供商配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExternalIdPConfigurationsForDirectoryResponse> listExternalIdPConfigurationsForDirectory(
        ListExternalIdPConfigurationsForDirectoryRequest &request
    );
    // 更新外部身份提供商配置
    //
    // 更新外部身份提供商配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateExternalIdPConfigurationForDirectoryResponse> updateExternalIdPConfigurationForDirectory(
        UpdateExternalIdPConfigurationForDirectoryRequest &request
    );

    // 查询自定义密码策略
    //
    // 查询自定义密码策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribePasswordPolicyResponse> describePasswordPolicy(
        DescribePasswordPolicyRequest &request
    );
    // 更新自定义密码策略
    //
    // 更新自定义密码策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePasswordPolicyResponse> updatePasswordPolicy(
        UpdatePasswordPolicyRequest &request
    );

    // 创建服务提供商证书
    //
    // 创建服务提供商SAML协议签名证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSpCertificateResponse> createSpCertificate(
        CreateSpCertificateRequest &request
    );
    // 删除服务提供商证书
    //
    // 删除服务提供商SAML协议签名证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSpCertificateResponse> deleteSpCertificate(
        DeleteSpCertificateRequest &request
    );
    // 查询服务提供商配置
    //
    // 查询服务提供商配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetSpConfigurationForDirectoryResponse> getSpConfigurationForDirectory(
        GetSpConfigurationForDirectoryRequest &request
    );
    // 列出服务提供商证书
    //
    // 查询服务提供商SAML协议签名证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSpCertificatesResponse> listSpCertificates(
        ListSpCertificatesRequest &request
    );
    // 激活服务提供商证书
    //
    // 激活服务提供商SAML协议签名证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSpActiveCertificateResponse> updateSpActiveCertificate(
        UpdateSpActiveCertificateRequest &request
    );

    // 查询身份源配额信息
    //
    // 查询身份源配额信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetIdentityStoreSummaryResponse> getIdentityStoreSummary(
        GetIdentityStoreSummaryRequest &request
    );

    // 创建访问令牌
    //
    // 创建访问令牌。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBearerTokenResponse> createBearerToken(
        CreateBearerTokenRequest &request
    );
    // 启用自动预置
    //
    // 启用自动预置，开启SCIM协议自动同步功能。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProvisioningTenantResponse> createProvisioningTenant(
        CreateProvisioningTenantRequest &request
    );
    // 删除访问令牌
    //
    // 删除访问令牌。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBearerTokenResponse> deleteBearerToken(
        DeleteBearerTokenRequest &request
    );
    // 删除自动预置
    //
    // 删除自动预置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProvisioningTenantResponse> deleteProvisioningTenant(
        DeleteProvisioningTenantRequest &request
    );
    // 列出访问令牌
    //
    // 查询访问令牌列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBearerTokensResponse> listBearerTokens(
        ListBearerTokensRequest &request
    );
    // 查询自动预置信息
    //
    // 查询是否开启自动预置，返回具体SCIM自动预配配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProvisioningTenantsResponse> listProvisioningTenants(
        ListProvisioningTenantsRequest &request
    );

    // 批量删除用户登录会话
    //
    // 批量删除用户登录会话。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteSessionsResponse> batchDeleteSessions(
        BatchDeleteSessionsRequest &request
    );
    // 列出用户MFA设备
    //
    // 查询指定用户的MFA设备列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListMfaDevicesForUserResponse> batchListMfaDevicesForUser(
        BatchListMfaDevicesForUserRequest &request
    );
    // 创建用户
    //
    // 在指定的身份源中创建一个IAM身份中心用户。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUserResponse> createUser(
        CreateUserRequest &request
    );
    // 删除用户MFA设备
    //
    // 删除用户绑定的MFA设备。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMfaDeviceForUserResponse> deleteMfaDeviceForUser(
        DeleteMfaDeviceForUserRequest &request
    );
    // 删除用户
    //
    // 根据用户ID，删除对应的IAM身份中心用户。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteUserResponse> deleteUser(
        DeleteUserRequest &request
    );
    // 查询用户详情
    //
    // 根据用户ID，查询对应IAM身份中心用户的详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeUserResponse> describeUser(
        DescribeUserRequest &request
    );
    // 批量查询指定用户详情
    //
    // 批量查询指定用户详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeUsersResponse> describeUsers(
        DescribeUsersRequest &request
    );
    // 禁用用户
    //
    // 禁用IAM身份中心的用户。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableUserResponse> disableUser(
        DisableUserRequest &request
    );
    // 启用用户
    //
    // 启用IAM身份中心的用户
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableUserResponse> enableUser(
        EnableUserRequest &request
    );
    // 查询用户ID
    //
    // 根据用户名或外部身份源ID，以精确匹配的方式查询用户ID。用户名和外部身份源ID两种查询方式二选一，不支持同时传入。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetUserIdResponse> getUserId(
        GetUserIdRequest &request
    );
    // 列出用户登录会话
    //
    // 查询指定用户的登录会话信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSessionsResponse> listSessions(
        ListSessionsRequest &request
    );
    // 列出用户
    //
    // 查询指定身份源下的IAM身份中心用户列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsersResponse> listUsers(
        ListUsersRequest &request
    );
    // 注册MFA设备
    //
    // 为用户发起注册MFA设备，返回一个MFA注册地址。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterMfaDeviceForUserResponse> registerMfaDeviceForUser(
        RegisterMfaDeviceForUserRequest &request
    );
    // 通过电子邮件发送密码重置链接或生成用户的一次性密码
    //
    // 通过电子邮件发送密码重置链接或生成用户的一次性密码。。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdModeResponse> resetPwdMode(
        ResetPwdModeRequest &request
    );
    // 更新MFA设备显示名称
    //
    // 更新MFA设备显示名称。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMfaDeviceForUserResponse> updateMfaDeviceForUser(
        UpdateMfaDeviceForUserRequest &request
    );
    // 更新用户
    //
    // 根据用户ID，更新对应IAM身份中心用户的属性。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateUserResponse> updateUser(
        UpdateUserRequest &request
    );
    // 验证用户邮箱
    //
    // 验证用户邮箱。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<VerifyEmailResponse> verifyEmail(
        VerifyEmailRequest &request
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

template class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Identitycenterstore::V1::IdentityCenterStoreClient>;

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreClient_H_

