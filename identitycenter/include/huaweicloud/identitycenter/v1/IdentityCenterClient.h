#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterClient_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterClient_H_

#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/identitycenter/v1/model/CreateAccountAssignmentReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreateAccountAssignmentRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateAccountAssignmentResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentReqBody.h>
#include <huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentCreationStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentDeletionStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/DisassociateProfileReqBody.h>
#include <huaweicloud/identitycenter/v1/model/DisassociateProfileRequest.h>
#include <huaweicloud/identitycenter/v1/model/DisassociateProfileResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsForPrincipalRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsForPrincipalResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateApplicationInstanceReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreateApplicationInstanceRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateApplicationInstanceResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationInstanceRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationInstanceResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteProfileRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteProfileResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeApplicationProviderRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeApplicationProviderResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeApplicationRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeApplicationResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetApplicationAssignmentConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetApplicationAssignmentConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetApplicationInstanceRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetApplicationInstanceResponse.h>
#include <huaweicloud/identitycenter/v1/model/ImportApplicationInstanceServiceProviderMetadataReqBody.h>
#include <huaweicloud/identitycenter/v1/model/ImportApplicationInstanceServiceProviderMetadataRequest.h>
#include <huaweicloud/identitycenter/v1/model/ImportApplicationInstanceServiceProviderMetadataResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationInstancesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationInstancesResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationProvidersRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationProvidersResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationTemplatesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationTemplatesResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationsResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListCatalogApplicationsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListCatalogApplicationsResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListProfilesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListProfilesResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceDisplayDataReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceDisplayDataRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceDisplayDataResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseSchemaConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseSchemaConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseSchemaConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceSecurityConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceSecurityConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceSecurityConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceStatusReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceStatusResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateApplicationAssignmentReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreateApplicationAssignmentRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateApplicationAssignmentResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationAssignmentReqBody.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationAssignmentRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationAssignmentResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsForPrincipalRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsForPrincipalResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateApplicationInstanceCertificateRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateApplicationInstanceCertificateResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationInstanceCertificateRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteApplicationInstanceCertificateResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationInstanceCertificatesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListApplicationInstanceCertificatesResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceActiveCertificateRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceActiveCertificateResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/GetSsoConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetSsoConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateSsoConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateSsoConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateSsoConfigurationResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateAliasReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreateAliasRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateAliasResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteIdentityCenterRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteIdentityCenterResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeRegisteredRegionsRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeRegisteredRegionsResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetHaConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetHaConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetIdentityCenterServiceStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetIdentityCenterServiceStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListIdentityStoreAssociationRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListIdentityStoreAssociationResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListInstancesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListInstancesResponse.h>
#include <huaweicloud/identitycenter/v1/model/RegisterRegionReqBody.h>
#include <huaweicloud/identitycenter/v1/model/RegisterRegionRequest.h>
#include <huaweicloud/identitycenter/v1/model/RegisterRegionResponse.h>
#include <huaweicloud/identitycenter/v1/model/StartIdentityCenterRequest.h>
#include <huaweicloud/identitycenter/v1/model/StartIdentityCenterResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateHAConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateHaConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateHaConfigurationResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateInstanceAccessControlAttributeConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreateInstanceAccessControlAttributeConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateInstanceAccessControlAttributeConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteInstanceAccessControlAttributeConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribeInstanceAccessControlAttributeConfigurationResponse.h>
#include <huaweicloud/identitycenter/v1/model/UpdateInstanceAccessControlAttributeConfigurationReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdateInstanceAccessControlAttributeConfigurationResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/GetMfaDeviceManagementForIdentityStoreRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetMfaDeviceManagementForIdentityStoreResponse.h>
#include <huaweicloud/identitycenter/v1/model/PutMfaDeviceManagementForDirectoryReqBody.h>
#include <huaweicloud/identitycenter/v1/model/PutMfaDeviceManagementForIdentityStoreRequest.h>
#include <huaweicloud/identitycenter/v1/model/PutMfaDeviceManagementForIdentityStoreResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedRoleToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedRoleToPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/CreatePermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/CreatePermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreatePermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteCustomPolicyFromPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteCustomPolicyFromPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteCustomRoleFromPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteCustomRoleFromPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeletePermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeletePermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribePermissionSetProvisioningStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/DescribePermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DescribePermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedPolicyFromPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedPolicyFromPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedRoleFromPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedRoleFromPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomRoleForPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomRoleForPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetPermissionSetSummaryRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetPermissionSetSummaryResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetProvisioningStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetProvisioningStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetsProvisionedToAccountResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListPermissionSetsResponse.h>
#include <huaweicloud/identitycenter/v1/model/ProvisionPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/ProvisionPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ProvisionPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomPolicyToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomPolicyToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomPolicyToPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomRoleToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomRoleToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/PutCustomRoleToPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ResourceAttachManagedPolicyToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/ResourceDetachManagedPolicyFromPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdatePermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/UpdatePermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/UpdatePermissionSetResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/CreateTagResourceRequest.h>
#include <huaweicloud/identitycenter/v1/model/CreateTagResourceResponse.h>
#include <huaweicloud/identitycenter/v1/model/DeleteTagResourceReqBody.h>
#include <huaweicloud/identitycenter/v1/model/DeleteTagResourceRequest.h>
#include <huaweicloud/identitycenter/v1/model/DeleteTagResourceResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListTagResourcesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListTagResourcesResponse.h>
#include <huaweicloud/identitycenter/v1/model/TagResourceReqBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Identitycenter::V1::Model;

class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  IdentityCenterClient : public Client
{
public:

    IdentityCenterClient();

    virtual ~IdentityCenterClient();

    static ClientBuilder<IdentityCenterClient> newBuilder();

    // 创建账户分配
    //
    // 使用指定的权限集为指定账户分配对应主体的访问权限，主体可为IdentityCenter用户或IdentityCenter用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccountAssignmentResponse> createAccountAssignment(
        CreateAccountAssignmentRequest &request
    );
    // 删除账号分配
    //
    // 使用指定的权限集从指定的账号删除主体的访问权限，主体可为IAM身份中心用户或用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAccountAssignmentResponse> deleteAccountAssignment(
        DeleteAccountAssignmentRequest &request
    );
    // 查询账户分配创建状态详情
    //
    // 根据请求ID，查询指定IAM Identity Center实例下的账户分配创建状态详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeAccountAssignmentCreationStatusResponse> describeAccountAssignmentCreationStatus(
        DescribeAccountAssignmentCreationStatusRequest &request
    );
    // 查询账户分配删除状态详情
    //
    // 根据请求ID，查询指定IAM Identity Center实例下的账户分配删除状态详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeAccountAssignmentDeletionStatusResponse> describeAccountAssignmentDeletionStatus(
        DescribeAccountAssignmentDeletionStatusRequest &request
    );
    // 解除与用户或组绑定的所有账号授权关联
    //
    // 解除与用户或组绑定的所有账号授权关联。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateProfileResponse> disassociateProfile(
        DisassociateProfileRequest &request
    );
    // 列出账户分配创建状态
    //
    // 查询指定IAM Identity Center实例下的账户分配的创建状态列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentCreationStatusResponse> listAccountAssignmentCreationStatus(
        ListAccountAssignmentCreationStatusRequest &request
    );
    // 列出账户分配删除状态
    //
    // 查询指定IAM Identity Center实例下的账户分配的删除状态列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentDeletionStatusResponse> listAccountAssignmentDeletionStatus(
        ListAccountAssignmentDeletionStatusRequest &request
    );
    // 列出账户和权限集关联的用户或用户组
    //
    // 列出与指定账户以及指定权限集关联的用户或用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentsResponse> listAccountAssignments(
        ListAccountAssignmentsRequest &request
    );
    // 检索与用户或用户组关联的账号列表
    //
    // 检索与用户或用户组关联的账号列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentsForPrincipalResponse> listAccountAssignmentsForPrincipal(
        ListAccountAssignmentsForPrincipalRequest &request
    );

    // 创建应用程序实例
    //
    // 创建应用程序实例。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApplicationInstanceResponse> createApplicationInstance(
        CreateApplicationInstanceRequest &request
    );
    // 删除应用程序实例
    //
    // 删除应用程序实例。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationInstanceResponse> deleteApplicationInstance(
        DeleteApplicationInstanceRequest &request
    );
    // 删除应用程序实例与用户或用户组关联关系
    //
    // 删除应用程序实例与用户或用户组关联关系。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProfileResponse> deleteProfile(
        DeleteProfileRequest &request
    );
    // 查询应用程序详情
    //
    // 查询应用程序详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeApplicationResponse> describeApplication(
        DescribeApplicationRequest &request
    );
    // 查询应用程序提供者详情
    //
    // 查询应用程序提供者详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeApplicationProviderResponse> describeApplicationProvider(
        DescribeApplicationProviderRequest &request
    );
    // 查询应用程序分配属性配置
    //
    // 查询应用程序分配属性配置，目的为用户或者用户组分配对应用程序的访问权限。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetApplicationAssignmentConfigurationResponse> getApplicationAssignmentConfiguration(
        GetApplicationAssignmentConfigurationRequest &request
    );
    // 查询应用程序实例详情
    //
    // 查询应用程序实例详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetApplicationInstanceResponse> getApplicationInstance(
        GetApplicationInstanceRequest &request
    );
    // 上传应用程序实例元数据文件
    //
    // 上传应用程序实例元数据文件。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportApplicationInstanceServiceProviderMetadataResponse> importApplicationInstanceServiceProviderMetadata(
        ImportApplicationInstanceServiceProviderMetadataRequest &request
    );
    // 列出应用程序实例
    //
    // 列出应用程序实例。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationInstancesResponse> listApplicationInstances(
        ListApplicationInstancesRequest &request
    );
    // 列出应用程序提供者
    //
    // 查询应用程序提供者列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationProvidersResponse> listApplicationProviders(
        ListApplicationProvidersRequest &request
    );
    // 列出应用程序模板
    //
    // 查询应用程序模板列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationTemplatesResponse> listApplicationTemplates(
        ListApplicationTemplatesRequest &request
    );
    // 列出应用程序
    //
    // 查询应用程序列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationsResponse> listApplications(
        ListApplicationsRequest &request
    );
    // 列出应用程序目录中的预置应用模板
    //
    // 列出应用程序目录中的预置应用模板。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCatalogApplicationsResponse> listCatalogApplications(
        ListCatalogApplicationsRequest &request
    );
    // 列出应用程序实例与用户或用户组存在的关联关系
    //
    // 列出应用程序实例与用户或用户组存在的关联关系。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProfilesResponse> listProfiles(
        ListProfilesRequest &request
    );
    // 更新应用程序实例显示信息
    //
    // 更新应用程序实例显示信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceDisplayDataResponse> updateApplicationInstanceDisplayData(
        UpdateApplicationInstanceDisplayDataRequest &request
    );
    // 更新应用程序属性配置
    //
    // 更新应用程序属性配置信息，更新应用程序中的属性映射、中继状态以及会话过期时间。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceResponseConfigurationResponse> updateApplicationInstanceResponseConfiguration(
        UpdateApplicationInstanceResponseConfigurationRequest &request
    );
    // 更新应用程序Schema属性映射配置
    //
    // 更新应用程序Schema属性映射配置，支持SAML断言中Subject属性映射以及Subject NameID格式。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceResponseSchemaConfigurationResponse> updateApplicationInstanceResponseSchemaConfiguration(
        UpdateApplicationInstanceResponseSchemaConfigurationRequest &request
    );
    // 更新应用程序实例证书配置
    //
    // 更新应用程序实例证书配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceSecurityConfigurationResponse> updateApplicationInstanceSecurityConfiguration(
        UpdateApplicationInstanceSecurityConfigurationRequest &request
    );
    // 更新应用程序实例服务提供商配置
    //
    // 更新应用程序实例服务提供商配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceServiceProviderConfigurationResponse> updateApplicationInstanceServiceProviderConfiguration(
        UpdateApplicationInstanceServiceProviderConfigurationRequest &request
    );
    // 更新应用程序实例状态
    //
    // 更新应用程序实例状态。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceStatusResponse> updateApplicationInstanceStatus(
        UpdateApplicationInstanceStatusRequest &request
    );

    // 应用程序分配用户或用户组
    //
    // 应用程序分配用户或用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApplicationAssignmentResponse> createApplicationAssignment(
        CreateApplicationAssignmentRequest &request
    );
    // 删除应用程序已分配用户或用户组
    //
    // 删除应用程序已分配用户或用户组。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationAssignmentResponse> deleteApplicationAssignment(
        DeleteApplicationAssignmentRequest &request
    );
    // 查询应用程序已分配的用户或用户组列表
    //
    // 查询应用程序已分配的用户或用户组列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationAssignmentsResponse> listApplicationAssignments(
        ListApplicationAssignmentsRequest &request
    );
    // 检索与用户或用户组关联的应用程序列表
    //
    // 检索与用户或用户组关联的应用程序列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationAssignmentsForPrincipalResponse> listApplicationAssignmentsForPrincipal(
        ListApplicationAssignmentsForPrincipalRequest &request
    );

    // 创建应用程序实例证书
    //
    // 创建应用程序实例证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApplicationInstanceCertificateResponse> createApplicationInstanceCertificate(
        CreateApplicationInstanceCertificateRequest &request
    );
    // 删除应用程序实例证书
    //
    // 删除应用程序实例证书。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteApplicationInstanceCertificateResponse> deleteApplicationInstanceCertificate(
        DeleteApplicationInstanceCertificateRequest &request
    );
    // 列出应用程序实例证书
    //
    // 查询应用程序实例证书列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicationInstanceCertificatesResponse> listApplicationInstanceCertificates(
        ListApplicationInstanceCertificatesRequest &request
    );
    // 激活应用程序实例证书
    //
    // 激活应用程序实例证书，实现证书轮转。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateApplicationInstanceActiveCertificateResponse> updateApplicationInstanceActiveCertificate(
        UpdateApplicationInstanceActiveCertificateRequest &request
    );

    // 查询实例配置信息
    //
    // 查询IAM身份中心实例配置信息，包括身份认证配置和会话管理配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetSsoConfigurationResponse> getSsoConfiguration(
        GetSsoConfigurationRequest &request
    );
    // 设置实例配置信息
    //
    // 设置IAM身份中心服务实例配置信息，包括身份认证配置和会话管理配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSsoConfigurationResponse> updateSsoConfiguration(
        UpdateSsoConfigurationRequest &request
    );

    // 自定义访问门户URL
    //
    // 自定义访问门户URL，默认情况下，您可以使用遵循以下格式的 URL访问门户：idcenter.huaweicloud.com/d-xxxxxxxxxx/portal，您可以按如下方式更改为自定义 URL：idcenter.huaweicloud.com/your_subdomain/portal。设置自定义访问门户URL是一次性操作，无法撤销。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAliasResponse> createAlias(
        CreateAliasRequest &request
    );
    // 删除服务实例
    //
    // 删除IAM Identity Center服务实例。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteIdentityCenterResponse> deleteIdentityCenter(
        DeleteIdentityCenterRequest &request
    );
    // 查询服务实例开通所在区域
    //
    // 查询IAM身份中心服务实例开通后，具体开通所在区域。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeRegisteredRegionsResponse> describeRegisteredRegions(
        DescribeRegisteredRegionsRequest &request
    );
    // 查询高可用功能配置
    //
    // 查询高可用功能配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetHaConfigurationResponse> getHaConfiguration(
        GetHaConfigurationRequest &request
    );
    // 查询服务实例状态
    //
    // 查询IAM Identity Center服务实例状态信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetIdentityCenterServiceStatusResponse> getIdentityCenterServiceStatus(
        GetIdentityCenterServiceStatusRequest &request
    );
    // 获取身份源配置
    //
    // 获取IAM身份中心服务实例中的身份源配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIdentityStoreAssociationResponse> listIdentityStoreAssociation(
        ListIdentityStoreAssociationRequest &request
    );
    // 列出实例
    //
    // 查询IAM身份中心的实例列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 选择服务实例开通区域
    //
    // IAM身份中心服务实例开通前，需要选择服务实例具体开通在某一区域。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterRegionResponse> registerRegion(
        RegisterRegionRequest &request
    );
    // 开通服务实例
    //
    // 开通IAM Identity Center服务实例。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartIdentityCenterResponse> startIdentityCenter(
        StartIdentityCenterRequest &request
    );
    // 更新高可用功能配置
    //
    // 授权启用或者禁用高可用功能配置。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHaConfigurationResponse> updateHaConfiguration(
        UpdateHaConfigurationRequest &request
    );

    // 启用指定实例的访问控制功能
    //
    // 启用指定实例的访问控制功能。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceAccessControlAttributeConfigurationResponse> createInstanceAccessControlAttributeConfiguration(
        CreateInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 解除指定实例的访问控制属性配置
    //
    // 禁用指定IAM Identity Center实例的基于属性的访问控制（ABAC）功能，并删除已配置的所有属性映射。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceAccessControlAttributeConfigurationResponse> deleteInstanceAccessControlAttributeConfiguration(
        DeleteInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 获取指定实例的访问控制属性配置
    //
    // 返回已配置为与指定IAM Identity Center实例的基于属性的访问控制（ABAC）一起使用的IAM Identity Center身份存储属性列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeInstanceAccessControlAttributeConfigurationResponse> describeInstanceAccessControlAttributeConfiguration(
        DescribeInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 更新指定实例的访问控制属性配置
    //
    // 更新可与IAM Identity Center实例一起使用的IAM Identity Center身份存储属性，以进行基于属性的访问控制（ABAC）。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceAccessControlAttributeConfigurationResponse> updateInstanceAccessControlAttributeConfiguration(
        UpdateInstanceAccessControlAttributeConfigurationRequest &request
    );

    // 查询MFA管理配置信息
    //
    // 查询MFA管理配置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetMfaDeviceManagementForIdentityStoreResponse> getMfaDeviceManagementForIdentityStore(
        GetMfaDeviceManagementForIdentityStoreRequest &request
    );
    // 设置MFA管理设置信息
    //
    // 设置MFA管理设置信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutMfaDeviceManagementForIdentityStoreResponse> putMfaDeviceManagementForIdentityStore(
        PutMfaDeviceManagementForIdentityStoreRequest &request
    );

    // 添加系统身份策略
    //
    // 在指定的权限集中添加系统身份策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachManagedPolicyToPermissionSetResponse> attachManagedPolicyToPermissionSet(
        AttachManagedPolicyToPermissionSetRequest &request
    );
    // 添加系统策略
    //
    // 在指定的权限集中添加系统策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachManagedRoleToPermissionSetResponse> attachManagedRoleToPermissionSet(
        AttachManagedRoleToPermissionSetRequest &request
    );
    // 创建权限集
    //
    // 在指定的IAM Identity Center实例中创建一个权限集。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePermissionSetResponse> createPermissionSet(
        CreatePermissionSetRequest &request
    );
    // 删除自定义身份策略
    //
    // 删除指定权限集中的自定义身份策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCustomPolicyFromPermissionSetResponse> deleteCustomPolicyFromPermissionSet(
        DeleteCustomPolicyFromPermissionSetRequest &request
    );
    // 删除自定义策略
    //
    // 删除指定权限集中的自定义策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCustomRoleFromPermissionSetResponse> deleteCustomRoleFromPermissionSet(
        DeleteCustomRoleFromPermissionSetRequest &request
    );
    // 删除权限集
    //
    // 根据权限集ID，删除指定的权限集。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePermissionSetResponse> deletePermissionSet(
        DeletePermissionSetRequest &request
    );
    // 查询权限集详情
    //
    // 根据权限集ID，查询指定权限集的详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribePermissionSetResponse> describePermissionSet(
        DescribePermissionSetRequest &request
    );
    // 查询权限集预分配状态详情
    //
    // 根据请求Id，查询权限集预分配状态的详情信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribePermissionSetProvisioningStatusResponse> describePermissionSetProvisioningStatus(
        DescribePermissionSetProvisioningStatusRequest &request
    );
    // 删除系统身份策略
    //
    // 删除指定权限集中的系统身份策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachManagedPolicyFromPermissionSetResponse> detachManagedPolicyFromPermissionSet(
        DetachManagedPolicyFromPermissionSetRequest &request
    );
    // 删除系统策略
    //
    // 删除指定权限集中的系统策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachManagedRoleFromPermissionSetResponse> detachManagedRoleFromPermissionSet(
        DetachManagedRoleFromPermissionSetRequest &request
    );
    // 查询自定义身份策略详情
    //
    // 查询指定权限集中的自定义身份策略详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetCustomPolicyForPermissionSetResponse> getCustomPolicyForPermissionSet(
        GetCustomPolicyForPermissionSetRequest &request
    );
    // 查询自定义策略详情
    //
    // 查询指定权限集中的自定义策略详情。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetCustomRoleForPermissionSetResponse> getCustomRoleForPermissionSet(
        GetCustomRoleForPermissionSetRequest &request
    );
    // 查询权限集配额信息
    //
    // 查询权限集配额信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetPermissionSetSummaryResponse> getPermissionSetSummary(
        GetPermissionSetSummaryRequest &request
    );
    // 列出权限集关联的账号
    //
    // 查询与指定权限集关联的账户列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountsForProvisionedPermissionSetResponse> listAccountsForProvisionedPermissionSet(
        ListAccountsForProvisionedPermissionSetRequest &request
    );
    // 列出系统身份策略
    //
    // 获取添加到指定权限集中的系统身份策略列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedPoliciesInPermissionSetResponse> listManagedPoliciesInPermissionSet(
        ListManagedPoliciesInPermissionSetRequest &request
    );
    // 列出系统策略
    //
    // 获取添加到指定权限集中的系统策略列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedRolesInPermissionSetResponse> listManagedRolesInPermissionSet(
        ListManagedRolesInPermissionSetRequest &request
    );
    // 列出权限集预分配状态
    //
    // 查询指定实例中的权限集预分配状态列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetProvisioningStatusResponse> listPermissionSetProvisioningStatus(
        ListPermissionSetProvisioningStatusRequest &request
    );
    // 列出权限集
    //
    // 查询指定实例下的权限集列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetsResponse> listPermissionSets(
        ListPermissionSetsRequest &request
    );
    // 列出分配给账户的权限集
    //
    // 查询分配给指定账户的权限集列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetsProvisionedToAccountResponse> listPermissionSetsProvisionedToAccount(
        ListPermissionSetsProvisionedToAccountRequest &request
    );
    // 预分配权限集
    //
    // 将指定权限集预分配给指定账户。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ProvisionPermissionSetResponse> provisionPermissionSet(
        ProvisionPermissionSetRequest &request
    );
    // 将自定义身份策略附加到权限集
    //
    // 将自定义身份策略附加到权限集。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutCustomPolicyToPermissionSetResponse> putCustomPolicyToPermissionSet(
        PutCustomPolicyToPermissionSetRequest &request
    );
    // 添加自定义策略
    //
    // 在指定的权限集中添加自定义策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutCustomRoleToPermissionSetResponse> putCustomRoleToPermissionSet(
        PutCustomRoleToPermissionSetRequest &request
    );
    // 更新权限集
    //
    // 根据权限集ID，更新指定权限集的属性。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePermissionSetResponse> updatePermissionSet(
        UpdatePermissionSetRequest &request
    );

    // 为指定资源添加标签
    //
    // 向指定的资源添加一个或多个标签。目前，您可以将标签附加到实例中的权限集。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagResourceResponse> createTagResource(
        CreateTagResourceRequest &request
    );
    // 从指定资源中删除指定主键标签
    //
    // 从指定资源中删除具有指定主键的任何标签。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResourceResponse> deleteTagResource(
        DeleteTagResourceRequest &request
    );
    // 列出绑定到指定资源的标签
    //
    // 列出绑定到指定资源的标签。您可以将标签附加到实例中的权限集。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagResourcesResponse> listTagResources(
        ListTagResourcesRequest &request
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

template class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Identitycenter::V1::IdentityCenterClient>;

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterClient_H_

