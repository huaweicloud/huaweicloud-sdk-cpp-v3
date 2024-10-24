#ifndef HUAWEICLOUD_SDK_RAM_V1_RamClient_H_
#define HUAWEICLOUD_SDK_RAM_V1_RamClient_H_

#include <huaweicloud/ram/v1/RamExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ram/v1/model/AssociatePermissionReqBody.h>
#include <huaweicloud/ram/v1/model/AssociateResourceSharePermissionRequest.h>
#include <huaweicloud/ram/v1/model/AssociateResourceSharePermissionResponse.h>
#include <huaweicloud/ram/v1/model/DisassociatePermissionReqBody.h>
#include <huaweicloud/ram/v1/model/DisassociateResourceSharePermissionRequest.h>
#include <huaweicloud/ram/v1/model/DisassociateResourceSharePermissionResponse.h>
#include <huaweicloud/ram/v1/model/ListResourceSharePermissionsRequest.h>
#include <huaweicloud/ram/v1/model/ListResourceSharePermissionsResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/ListQuotaRequest.h>
#include <huaweicloud/ram/v1/model/ListQuotaResponse.h>
#include <huaweicloud/ram/v1/model/ListResourceTypesRequest.h>
#include <huaweicloud/ram/v1/model/ListResourceTypesResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/DisableOrganizationShareRequest.h>
#include <huaweicloud/ram/v1/model/DisableOrganizationShareResponse.h>
#include <huaweicloud/ram/v1/model/EnableOrganizationShareRequest.h>
#include <huaweicloud/ram/v1/model/EnableOrganizationShareResponse.h>
#include <huaweicloud/ram/v1/model/ShowOrganizationShareRequest.h>
#include <huaweicloud/ram/v1/model/ShowOrganizationShareResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/ListPermissionVersionsRequest.h>
#include <huaweicloud/ram/v1/model/ListPermissionVersionsResponse.h>
#include <huaweicloud/ram/v1/model/ListPermissionsRequest.h>
#include <huaweicloud/ram/v1/model/ListPermissionsResponse.h>
#include <huaweicloud/ram/v1/model/ShowPermissionRequest.h>
#include <huaweicloud/ram/v1/model/ShowPermissionResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/SearchSharedPrincipalsReqBody.h>
#include <huaweicloud/ram/v1/model/SearchSharedPrincipalsRequest.h>
#include <huaweicloud/ram/v1/model/SearchSharedPrincipalsResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/SearchSharedResourcesReqBody.h>
#include <huaweicloud/ram/v1/model/SearchSharedResourcesRequest.h>
#include <huaweicloud/ram/v1/model/SearchSharedResourcesResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/CreateResourceShareReqBody.h>
#include <huaweicloud/ram/v1/model/CreateResourceShareRequest.h>
#include <huaweicloud/ram/v1/model/CreateResourceShareResponse.h>
#include <huaweicloud/ram/v1/model/DeleteResourceShareRequest.h>
#include <huaweicloud/ram/v1/model/DeleteResourceShareResponse.h>
#include <huaweicloud/ram/v1/model/SearchResourceSharesReqBody.h>
#include <huaweicloud/ram/v1/model/SearchResourceSharesRequest.h>
#include <huaweicloud/ram/v1/model/SearchResourceSharesResponse.h>
#include <huaweicloud/ram/v1/model/UpdateResourceShareReqBody.h>
#include <huaweicloud/ram/v1/model/UpdateResourceShareRequest.h>
#include <huaweicloud/ram/v1/model/UpdateResourceShareResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/AssociateResourceShareRequest.h>
#include <huaweicloud/ram/v1/model/AssociateResourceShareResponse.h>
#include <huaweicloud/ram/v1/model/DisassociateResourceShareRequest.h>
#include <huaweicloud/ram/v1/model/DisassociateResourceShareResponse.h>
#include <huaweicloud/ram/v1/model/ResourceShareAssociationReqBody.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareAssociationsReqBody.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareAssociationsRequest.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareAssociationsResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/AcceptResourceShareInvitationRequest.h>
#include <huaweicloud/ram/v1/model/AcceptResourceShareInvitationResponse.h>
#include <huaweicloud/ram/v1/model/RejectResourceShareInvitationRequest.h>
#include <huaweicloud/ram/v1/model/RejectResourceShareInvitationResponse.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareInvitationReqBody.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareInvitationRequest.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareInvitationResponse.h>
#include <string>

#include <huaweicloud/ram/v1/model/BatchCreateResourceShareTagsRequest.h>
#include <huaweicloud/ram/v1/model/BatchCreateResourceShareTagsResponse.h>
#include <huaweicloud/ram/v1/model/BatchDeleteResourceShareTagsRequest.h>
#include <huaweicloud/ram/v1/model/BatchDeleteResourceShareTagsResponse.h>
#include <huaweicloud/ram/v1/model/ListResourceShareTagsRequest.h>
#include <huaweicloud/ram/v1/model/ListResourceShareTagsResponse.h>
#include <huaweicloud/ram/v1/model/ListResourceSharesByTagsRequest.h>
#include <huaweicloud/ram/v1/model/ListResourceSharesByTagsResponse.h>
#include <huaweicloud/ram/v1/model/ResourceSharesByTagsReqBody.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareCountByTagsRequest.h>
#include <huaweicloud/ram/v1/model/SearchResourceShareCountByTagsResponse.h>
#include <huaweicloud/ram/v1/model/TagResourceReqBody.h>
#include <huaweicloud/ram/v1/model/UntagResourceReqBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ram::V1::Model;

class HUAWEICLOUD_RAM_V1_EXPORT  RamClient : public Client
{
public:

    RamClient();

    virtual ~RamClient();

    static ClientBuilder<RamClient> newBuilder();

    // 绑定或替换共享资源权限
    //
    // 为资源共享实例中包含的资源类型绑定或替换共享资源权限。 对于资源共享实例中的每一种资源类型，您可以设置唯一权限。仅当资源共享实例中当前没有该资源类型的资源时，您才能绑定新的共享资源权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateResourceSharePermissionResponse> associateResourceSharePermission(
        AssociateResourceSharePermissionRequest &request
    );
    // 移除共享资源权限
    //
    // 移除资源共享实例绑定的共享资源权限。权限更改立即生效。只有当目前资源共享实例中没有绑定相关资源类型时，您才能从资源共享实例中移除共享资源权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateResourceSharePermissionResponse> disassociateResourceSharePermission(
        DisassociateResourceSharePermissionRequest &request
    );
    // 检索绑定的共享资源权限
    //
    // 检索资源共享实例关联的共享资源权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceSharePermissionsResponse> listResourceSharePermissions(
        ListResourceSharePermissionsRequest &request
    );

    // 查询资源共享的配额
    //
    // 查询当前账号的资源共享配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotaResponse> listQuota(
        ListQuotaRequest &request
    );
    // 检索云服务资源类型
    //
    // 查询已对接云服务的资源类型和区域等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceTypesResponse> listResourceTypes(
        ListResourceTypesRequest &request
    );

    // 关闭与组织共享
    //
    // 关闭与组织共享资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableOrganizationShareResponse> disableOrganizationShare(
        DisableOrganizationShareRequest &request
    );
    // 启用与组织共享
    //
    // 启用与组织共享资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableOrganizationShareResponse> enableOrganizationShare(
        EnableOrganizationShareRequest &request
    );
    // 检索是否启用与组织共享
    //
    // 检索是否启用与组织共享资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrganizationShareResponse> showOrganizationShare(
        ShowOrganizationShareRequest &request
    );

    // 获取权限的所有版本
    //
    // 获取权限的所有版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionVersionsResponse> listPermissionVersions(
        ListPermissionVersionsRequest &request
    );
    // 检索共享资源权限列表
    //
    // 检索指定资源类型的共享资源权限列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPermissionsResponse> listPermissions(
        ListPermissionsRequest &request
    );
    // 检索资源共享权限内容
    //
    // 检索指定资源类型的共享资源指定版本的权限内容，如果不指定权限版本，则返回默认版本的权限内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPermissionResponse> showPermission(
        ShowPermissionRequest &request
    );

    // 检索资源使用者
    //
    // 检索共享资源的使用者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchSharedPrincipalsResponse> searchSharedPrincipals(
        SearchSharedPrincipalsRequest &request
    );

    // 检索共享的资源
    //
    // 检索您共享的或共享给您的资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchSharedResourcesResponse> searchSharedResources(
        SearchSharedResourcesRequest &request
    );

    // 创建资源共享实例
    //
    // 创建一个资源共享实例。您可以指定需要共享的资源列表，资源使用者列表，以及授予资源使用者的权限列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResourceShareResponse> createResourceShare(
        CreateResourceShareRequest &request
    );
    // 删除资源共享实例
    //
    // 删除指定的资源共享实例。此操作不会删除实体资源，仅停止向其他账号共享资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteResourceShareResponse> deleteResourceShare(
        DeleteResourceShareRequest &request
    );
    // 检索资源共享实例
    //
    // 检索您创建的或者共享给您的资源共享实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceSharesResponse> searchResourceShares(
        SearchResourceSharesRequest &request
    );
    // 更新资源共享实例
    //
    // 修改资源共享实例的特定属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateResourceShareResponse> updateResourceShare(
        UpdateResourceShareRequest &request
    );

    // 绑定资源使用者和共享资源
    //
    // 向资源共享实例绑定指定的资源使用者列表或共享资源列表。对于新增的共享资源，有权访问此资源共享实例的资源使用者获得该共享资源的访问权限。对于新增的资源使用者，获得对此资源共享实例中共享资源的访问权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateResourceShareResponse> associateResourceShare(
        AssociateResourceShareRequest &request
    );
    // 移除资源使用者或共享资源
    //
    // 将指定的资源使用者或共享资源从指定的资源共享实例中移除。资源使用者也可以从指定的资源共享实例中主动退出。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateResourceShareResponse> disassociateResourceShare(
        DisassociateResourceShareRequest &request
    );
    // 检索绑定的资源使用者和共享资源
    //
    // 检索您拥有的资源共享实例中绑定的共享资源和资源使用者。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceShareAssociationsResponse> searchResourceShareAssociations(
        SearchResourceShareAssociationsRequest &request
    );

    // 接受共享邀请
    //
    // 接受来自其他账号的资源共享邀请。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AcceptResourceShareInvitationResponse> acceptResourceShareInvitation(
        AcceptResourceShareInvitationRequest &request
    );
    // 拒绝共享邀请
    //
    // 拒绝来自其他账号的资源共享邀请。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RejectResourceShareInvitationResponse> rejectResourceShareInvitation(
        RejectResourceShareInvitationRequest &request
    );
    // 检索共享邀请
    //
    // 通过条件检索资源共享邀请。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceShareInvitationResponse> searchResourceShareInvitation(
        SearchResourceShareInvitationRequest &request
    );

    // 资源共享实例增加标签
    //
    // 资源共享实例增加标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateResourceShareTagsResponse> batchCreateResourceShareTags(
        BatchCreateResourceShareTagsRequest &request
    );
    // 删除资源共享实例的标签
    //
    // 删除资源共享实例指定的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteResourceShareTagsResponse> batchDeleteResourceShareTags(
        BatchDeleteResourceShareTagsRequest &request
    );
    // 查询已使用的标签列表
    //
    // 查询资源共享实例已使用标签的列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceShareTagsResponse> listResourceShareTags(
        ListResourceShareTagsRequest &request
    );
    // 根据标签信息查询实例列表
    //
    // 根据标签信息查询资源共享实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceSharesByTagsResponse> listResourceSharesByTags(
        ListResourceSharesByTagsRequest &request
    );
    // 根据标签信息查询实例数量
    //
    // 根据标签信息查询资源共享实例数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchResourceShareCountByTagsResponse> searchResourceShareCountByTags(
        SearchResourceShareCountByTagsRequest &request
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

template class HUAWEICLOUD_RAM_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ram::V1::RamClient>;

#endif // HUAWEICLOUD_SDK_RAM_V1_RamClient_H_

