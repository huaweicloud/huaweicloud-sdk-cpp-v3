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
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountAssignmentsResponse.h>
#include <string>

#include <huaweicloud/identitycenter/v1/model/ListInstancesRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListInstancesResponse.h>
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

#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetResponse.h>
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
#include <huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomRoleForPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/GetCustomRoleForPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetResponse.h>
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

#include <huaweicloud/identitycenter/v1/model/AttachManagedRoleToPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/AttachManagedRoleToPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedRoleFromPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/DetachManagedRoleFromPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetRequest.h>
#include <huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetResponse.h>
#include <huaweicloud/identitycenter/v1/model/ResourceAttachManagedPolicyToPermissionSetReqBody.h>
#include <huaweicloud/identitycenter/v1/model/ResourceDetachManagedPolicyFromPermissionSetReqBody.h>
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

    // 创建账号分配
    //
    // 使用指定的权限集为指定账号分配对应主体的访问权限，主体可为IAM身份中心用户或用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccountAssignmentResponse> createAccountAssignment(
        CreateAccountAssignmentRequest &request
    );
    // 删除账号分配
    //
    // 使用指定的权限集从指定的账号删除主体的访问权限，主体可为IAM身份中心用户或用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAccountAssignmentResponse> deleteAccountAssignment(
        DeleteAccountAssignmentRequest &request
    );
    // 查询账号分配创建状态详情
    //
    // 根据请求ID，查询指定IAM身份中心实例下的账号分配创建状态详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeAccountAssignmentCreationStatusResponse> describeAccountAssignmentCreationStatus(
        DescribeAccountAssignmentCreationStatusRequest &request
    );
    // 查询账号分配删除状态详情
    //
    // 根据请求ID，查询指定IAM身份中心实例下的账号分配删除状态详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeAccountAssignmentDeletionStatusResponse> describeAccountAssignmentDeletionStatus(
        DescribeAccountAssignmentDeletionStatusRequest &request
    );
    // 列出账号分配创建状态
    //
    // 查询指定IAM身份中心实例下的账号分配的创建状态列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentCreationStatusResponse> listAccountAssignmentCreationStatus(
        ListAccountAssignmentCreationStatusRequest &request
    );
    // 列出账号分配删除状态
    //
    // 查询指定IAM身份中心实例下的账号分配的删除状态列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentDeletionStatusResponse> listAccountAssignmentDeletionStatus(
        ListAccountAssignmentDeletionStatusRequest &request
    );
    // 列出账号和权限集关联的用户或用户组
    //
    // 列出与指定账号以及指定权限集关联的用户或用户组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountAssignmentsResponse> listAccountAssignments(
        ListAccountAssignmentsRequest &request
    );

    // 列出实例
    //
    // 查询IAM身份中心的实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );

    // 启用指定实例的访问控制功能
    //
    // 启用指定实例的访问控制功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceAccessControlAttributeConfigurationResponse> createInstanceAccessControlAttributeConfiguration(
        CreateInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 解除指定实例的访问控制属性配置
    //
    // 禁用指定IAM身份中心实例的基于属性的访问控制（ABAC）功能，并删除已配置的所有属性映射。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceAccessControlAttributeConfigurationResponse> deleteInstanceAccessControlAttributeConfiguration(
        DeleteInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 获取指定实例的访问控制属性配置
    //
    // 返回已配置为与指定IAM身份中心实例的基于属性的访问控制（ABAC）一起使用的IAM身份中心身份源属性列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeInstanceAccessControlAttributeConfigurationResponse> describeInstanceAccessControlAttributeConfiguration(
        DescribeInstanceAccessControlAttributeConfigurationRequest &request
    );
    // 更新指定实例的访问控制属性配置
    //
    // 更新可与IAM身份中心实例一起使用的IAM身份中心身份源属性，以进行基于属性的访问控制（ABAC）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceAccessControlAttributeConfigurationResponse> updateInstanceAccessControlAttributeConfiguration(
        UpdateInstanceAccessControlAttributeConfigurationRequest &request
    );

    // 添加系统身份策略
    //
    // 在指定的权限集中添加系统身份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachManagedPolicyToPermissionSetResponse> attachManagedPolicyToPermissionSet(
        AttachManagedPolicyToPermissionSetRequest &request
    );
    // 创建权限集
    //
    // 在指定的IAM身份中心实例中创建一个权限集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePermissionSetResponse> createPermissionSet(
        CreatePermissionSetRequest &request
    );
    // 删除自定义身份策略
    //
    // 删除指定权限集中的自定义身份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCustomPolicyFromPermissionSetResponse> deleteCustomPolicyFromPermissionSet(
        DeleteCustomPolicyFromPermissionSetRequest &request
    );
    // 删除指定权限集中的自定义策略
    //
    // 删除指定权限集中的自定义策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCustomRoleFromPermissionSetResponse> deleteCustomRoleFromPermissionSet(
        DeleteCustomRoleFromPermissionSetRequest &request
    );
    // 删除权限集
    //
    // 根据权限集ID，删除指定的权限集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePermissionSetResponse> deletePermissionSet(
        DeletePermissionSetRequest &request
    );
    // 查询权限集详情
    //
    // 根据权限集ID，查询指定权限集的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribePermissionSetResponse> describePermissionSet(
        DescribePermissionSetRequest &request
    );
    // 查询权限集预分配状态详情
    //
    // 根据请求ID，查询权限集预分配状态的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribePermissionSetProvisioningStatusResponse> describePermissionSetProvisioningStatus(
        DescribePermissionSetProvisioningStatusRequest &request
    );
    // 删除系统身份策略
    //
    // 删除指定权限集中的系统身份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachManagedPolicyFromPermissionSetResponse> detachManagedPolicyFromPermissionSet(
        DetachManagedPolicyFromPermissionSetRequest &request
    );
    // 查询自定义身份策略详情
    //
    // 查询指定权限集中的自定义身份策略详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetCustomPolicyForPermissionSetResponse> getCustomPolicyForPermissionSet(
        GetCustomPolicyForPermissionSetRequest &request
    );
    // 获取分配给权限集的自定义策略
    //
    // 获取分配给权限集的自定义策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetCustomRoleForPermissionSetResponse> getCustomRoleForPermissionSet(
        GetCustomRoleForPermissionSetRequest &request
    );
    // 列出权限集关联的账号
    //
    // 查询与指定权限集关联的账号列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountsForProvisionedPermissionSetResponse> listAccountsForProvisionedPermissionSet(
        ListAccountsForProvisionedPermissionSetRequest &request
    );
    // 列出系统身份策略
    //
    // 获取添加到指定权限集中的系统身份策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedPoliciesInPermissionSetResponse> listManagedPoliciesInPermissionSet(
        ListManagedPoliciesInPermissionSetRequest &request
    );
    // 列出权限集预分配状态
    //
    // 查询指定实例中的权限集预分配状态列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetProvisioningStatusResponse> listPermissionSetProvisioningStatus(
        ListPermissionSetProvisioningStatusRequest &request
    );
    // 列出权限集
    //
    // 查询指定实例下的权限集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetsResponse> listPermissionSets(
        ListPermissionSetsRequest &request
    );
    // 列出分配给账号的权限集
    //
    // 查询分配给指定账号的权限集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionSetsProvisionedToAccountResponse> listPermissionSetsProvisionedToAccount(
        ListPermissionSetsProvisionedToAccountRequest &request
    );
    // 预分配权限集
    //
    // 将指定权限集预分配给指定账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ProvisionPermissionSetResponse> provisionPermissionSet(
        ProvisionPermissionSetRequest &request
    );
    // 添加自定义身份策略
    //
    // 在指定的权限集中添加自定义身份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutCustomPolicyToPermissionSetResponse> putCustomPolicyToPermissionSet(
        PutCustomPolicyToPermissionSetRequest &request
    );
    // 将自定义策略附加到权限集
    //
    // 将自定义策略附加到权限集
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutCustomRoleToPermissionSetResponse> putCustomRoleToPermissionSet(
        PutCustomRoleToPermissionSetRequest &request
    );
    // 更新权限集
    //
    // 根据权限集ID，更新指定权限集的属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePermissionSetResponse> updatePermissionSet(
        UpdatePermissionSetRequest &request
    );

    // 为指定资源添加标签
    //
    // 给指定的资源添加一个或多个标签。当前支持为权限集添加标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagResourceResponse> createTagResource(
        CreateTagResourceRequest &request
    );
    // 删除指定资源的指定标签
    //
    // 从指定资源中删除指定的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResourceResponse> deleteTagResource(
        DeleteTagResourceRequest &request
    );
    // 列出绑定到指定资源的标签
    //
    // 列出绑定到指定资源的标签。当前支持为权限集添加标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagResourcesResponse> listTagResources(
        ListTagResourcesRequest &request
    );

    // 添加系统策略
    //
    // 在指定的权限集中添加系统策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachManagedRoleToPermissionSetResponse> attachManagedRoleToPermissionSet(
        AttachManagedRoleToPermissionSetRequest &request
    );
    // 删除系统策略
    //
    // 删除指定权限集中的系统策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachManagedRoleFromPermissionSetResponse> detachManagedRoleFromPermissionSet(
        DetachManagedRoleFromPermissionSetRequest &request
    );
    // 列出系统策略
    //
    // 获取添加到指定权限集中的系统策略列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedRolesInPermissionSetResponse> listManagedRolesInPermissionSet(
        ListManagedRolesInPermissionSetRequest &request
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

