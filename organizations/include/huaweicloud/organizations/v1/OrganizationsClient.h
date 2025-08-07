#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsClient_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsClient_H_

#include <huaweicloud/organizations/v1/OrganizationsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/organizations/v1/model/CloseAccountRequest.h>
#include <huaweicloud/organizations/v1/model/CloseAccountResponse.h>
#include <huaweicloud/organizations/v1/model/CreateAccountReqBody.h>
#include <huaweicloud/organizations/v1/model/CreateAccountRequest.h>
#include <huaweicloud/organizations/v1/model/CreateAccountResponse.h>
#include <huaweicloud/organizations/v1/model/CreateResourceAccountReqBody.h>
#include <huaweicloud/organizations/v1/model/CreateResourceAccountRequest.h>
#include <huaweicloud/organizations/v1/model/CreateResourceAccountResponse.h>
#include <huaweicloud/organizations/v1/model/InviteAccountReqBody.h>
#include <huaweicloud/organizations/v1/model/InviteAccountRequest.h>
#include <huaweicloud/organizations/v1/model/InviteAccountResponse.h>
#include <huaweicloud/organizations/v1/model/ListAccountsRequest.h>
#include <huaweicloud/organizations/v1/model/ListAccountsResponse.h>
#include <huaweicloud/organizations/v1/model/ListCloseAccountStatusesRequest.h>
#include <huaweicloud/organizations/v1/model/ListCloseAccountStatusesResponse.h>
#include <huaweicloud/organizations/v1/model/ListCreateAccountStatusesRequest.h>
#include <huaweicloud/organizations/v1/model/ListCreateAccountStatusesResponse.h>
#include <huaweicloud/organizations/v1/model/MoveAccountReqBody.h>
#include <huaweicloud/organizations/v1/model/MoveAccountRequest.h>
#include <huaweicloud/organizations/v1/model/MoveAccountResponse.h>
#include <huaweicloud/organizations/v1/model/RemoveAccountRequest.h>
#include <huaweicloud/organizations/v1/model/RemoveAccountResponse.h>
#include <huaweicloud/organizations/v1/model/ShowAccountRequest.h>
#include <huaweicloud/organizations/v1/model/ShowAccountResponse.h>
#include <huaweicloud/organizations/v1/model/ShowCreateAccountStatusRequest.h>
#include <huaweicloud/organizations/v1/model/ShowCreateAccountStatusResponse.h>
#include <huaweicloud/organizations/v1/model/UpdateAccountReqBody.h>
#include <huaweicloud/organizations/v1/model/UpdateAccountRequest.h>
#include <huaweicloud/organizations/v1/model/UpdateAccountResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/DelegatedAdministratorReqBody.h>
#include <huaweicloud/organizations/v1/model/DeregisterDelegatedAdministratorRequest.h>
#include <huaweicloud/organizations/v1/model/DeregisterDelegatedAdministratorResponse.h>
#include <huaweicloud/organizations/v1/model/ListDelegatedAdministratorsRequest.h>
#include <huaweicloud/organizations/v1/model/ListDelegatedAdministratorsResponse.h>
#include <huaweicloud/organizations/v1/model/ListDelegatedServicesRequest.h>
#include <huaweicloud/organizations/v1/model/ListDelegatedServicesResponse.h>
#include <huaweicloud/organizations/v1/model/RegisterDelegatedAdministratorRequest.h>
#include <huaweicloud/organizations/v1/model/RegisterDelegatedAdministratorResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/AcceptHandshakeRequest.h>
#include <huaweicloud/organizations/v1/model/AcceptHandshakeResponse.h>
#include <huaweicloud/organizations/v1/model/CancelHandshakeRequest.h>
#include <huaweicloud/organizations/v1/model/CancelHandshakeResponse.h>
#include <huaweicloud/organizations/v1/model/DeclineHandshakeRequest.h>
#include <huaweicloud/organizations/v1/model/DeclineHandshakeResponse.h>
#include <huaweicloud/organizations/v1/model/ListHandshakesRequest.h>
#include <huaweicloud/organizations/v1/model/ListHandshakesResponse.h>
#include <huaweicloud/organizations/v1/model/ListReceivedHandshakesRequest.h>
#include <huaweicloud/organizations/v1/model/ListReceivedHandshakesResponse.h>
#include <huaweicloud/organizations/v1/model/ShowHandshakeRequest.h>
#include <huaweicloud/organizations/v1/model/ShowHandshakeResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/ListEntitiesRequest.h>
#include <huaweicloud/organizations/v1/model/ListEntitiesResponse.h>
#include <huaweicloud/organizations/v1/model/ListQuotasRequest.h>
#include <huaweicloud/organizations/v1/model/ListQuotasResponse.h>
#include <huaweicloud/organizations/v1/model/ListServicesRequest.h>
#include <huaweicloud/organizations/v1/model/ListServicesResponse.h>
#include <huaweicloud/organizations/v1/model/ListTagPolicyServicesRequest.h>
#include <huaweicloud/organizations/v1/model/ListTagPolicyServicesResponse.h>
#include <huaweicloud/organizations/v1/model/ShowEffectivePoliciesRequest.h>
#include <huaweicloud/organizations/v1/model/ShowEffectivePoliciesResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/CreateOrganizationRequest.h>
#include <huaweicloud/organizations/v1/model/CreateOrganizationResponse.h>
#include <huaweicloud/organizations/v1/model/DeleteOrganizationRequest.h>
#include <huaweicloud/organizations/v1/model/DeleteOrganizationResponse.h>
#include <huaweicloud/organizations/v1/model/LeaveOrganizationRequest.h>
#include <huaweicloud/organizations/v1/model/LeaveOrganizationResponse.h>
#include <huaweicloud/organizations/v1/model/ListRootsRequest.h>
#include <huaweicloud/organizations/v1/model/ListRootsResponse.h>
#include <huaweicloud/organizations/v1/model/ShowOrganizationRequest.h>
#include <huaweicloud/organizations/v1/model/ShowOrganizationResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/CreateOrganizationalUnitReqBody.h>
#include <huaweicloud/organizations/v1/model/CreateOrganizationalUnitRequest.h>
#include <huaweicloud/organizations/v1/model/CreateOrganizationalUnitResponse.h>
#include <huaweicloud/organizations/v1/model/DeleteOrganizationalUnitRequest.h>
#include <huaweicloud/organizations/v1/model/DeleteOrganizationalUnitResponse.h>
#include <huaweicloud/organizations/v1/model/ListOrganizationalUnitsRequest.h>
#include <huaweicloud/organizations/v1/model/ListOrganizationalUnitsResponse.h>
#include <huaweicloud/organizations/v1/model/ShowOrganizationalUnitRequest.h>
#include <huaweicloud/organizations/v1/model/ShowOrganizationalUnitResponse.h>
#include <huaweicloud/organizations/v1/model/UpdateOrganizationalUnitReqBody.h>
#include <huaweicloud/organizations/v1/model/UpdateOrganizationalUnitRequest.h>
#include <huaweicloud/organizations/v1/model/UpdateOrganizationalUnitResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/AttachPolicyRequest.h>
#include <huaweicloud/organizations/v1/model/AttachPolicyResponse.h>
#include <huaweicloud/organizations/v1/model/CreatePolicyReqBody.h>
#include <huaweicloud/organizations/v1/model/CreatePolicyRequest.h>
#include <huaweicloud/organizations/v1/model/CreatePolicyResponse.h>
#include <huaweicloud/organizations/v1/model/DeletePolicyRequest.h>
#include <huaweicloud/organizations/v1/model/DeletePolicyResponse.h>
#include <huaweicloud/organizations/v1/model/DetachPolicyRequest.h>
#include <huaweicloud/organizations/v1/model/DetachPolicyResponse.h>
#include <huaweicloud/organizations/v1/model/DisablePolicyTypeRequest.h>
#include <huaweicloud/organizations/v1/model/DisablePolicyTypeResponse.h>
#include <huaweicloud/organizations/v1/model/EnablePolicyTypeRequest.h>
#include <huaweicloud/organizations/v1/model/EnablePolicyTypeResponse.h>
#include <huaweicloud/organizations/v1/model/ListEntitiesForPolicyRequest.h>
#include <huaweicloud/organizations/v1/model/ListEntitiesForPolicyResponse.h>
#include <huaweicloud/organizations/v1/model/ListPoliciesRequest.h>
#include <huaweicloud/organizations/v1/model/ListPoliciesResponse.h>
#include <huaweicloud/organizations/v1/model/PolicyTachReqBody.h>
#include <huaweicloud/organizations/v1/model/PolicyTypeReqBody.h>
#include <huaweicloud/organizations/v1/model/ShowPolicyRequest.h>
#include <huaweicloud/organizations/v1/model/ShowPolicyResponse.h>
#include <huaweicloud/organizations/v1/model/UpdatePolicyReqBody.h>
#include <huaweicloud/organizations/v1/model/UpdatePolicyRequest.h>
#include <huaweicloud/organizations/v1/model/UpdatePolicyResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/CreateTagResourceRequest.h>
#include <huaweicloud/organizations/v1/model/CreateTagResourceResponse.h>
#include <huaweicloud/organizations/v1/model/DeleteTagResourceRequest.h>
#include <huaweicloud/organizations/v1/model/DeleteTagResourceResponse.h>
#include <huaweicloud/organizations/v1/model/ListResourceInstancesRequest.h>
#include <huaweicloud/organizations/v1/model/ListResourceInstancesResponse.h>
#include <huaweicloud/organizations/v1/model/ListResourceTagsRequest.h>
#include <huaweicloud/organizations/v1/model/ListResourceTagsResponse.h>
#include <huaweicloud/organizations/v1/model/ListTagResourcesRequest.h>
#include <huaweicloud/organizations/v1/model/ListTagResourcesResponse.h>
#include <huaweicloud/organizations/v1/model/ListTagsForResourceRequest.h>
#include <huaweicloud/organizations/v1/model/ListTagsForResourceResponse.h>
#include <huaweicloud/organizations/v1/model/ResourceInstanceReqBody.h>
#include <huaweicloud/organizations/v1/model/ShowResourceInstancesCountRequest.h>
#include <huaweicloud/organizations/v1/model/ShowResourceInstancesCountResponse.h>
#include <huaweicloud/organizations/v1/model/TagResourceReqBody.h>
#include <huaweicloud/organizations/v1/model/TagResourceRequest.h>
#include <huaweicloud/organizations/v1/model/TagResourceResponse.h>
#include <huaweicloud/organizations/v1/model/UntagResourceReqBody.h>
#include <huaweicloud/organizations/v1/model/UntagResourceRequest.h>
#include <huaweicloud/organizations/v1/model/UntagResourceResponse.h>
#include <string>

#include <huaweicloud/organizations/v1/model/DisableTrustedServiceRequest.h>
#include <huaweicloud/organizations/v1/model/DisableTrustedServiceResponse.h>
#include <huaweicloud/organizations/v1/model/EnableTrustedServiceRequest.h>
#include <huaweicloud/organizations/v1/model/EnableTrustedServiceResponse.h>
#include <huaweicloud/organizations/v1/model/ListTrustedServicesRequest.h>
#include <huaweicloud/organizations/v1/model/ListTrustedServicesResponse.h>
#include <huaweicloud/organizations/v1/model/TrustedServiceReqBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Organizations::V1::Model;

class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  OrganizationsClient : public Client
{
public:

    OrganizationsClient();

    virtual ~OrganizationsClient();

    static ClientBuilder<OrganizationsClient> newBuilder();

    // 关闭账号
    //
    // 关闭账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CloseAccountResponse> closeAccount(
        CloseAccountRequest &request
    );
    // 创建账号
    //
    // 创建一个账号，生成的账号将自动成为调用此接口的账号所属组织的成员。此操作只能由组织的管理账号调用。组织云服务将在新账号中创建所需的服务关联委托和账号访问委托。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccountResponse> createAccount(
        CreateAccountRequest &request
    );
    // 创建帐号
    //
    // 创建一个帐号，不携带手机号邮箱联系方式，生成的帐号将自动成为调用此接口的帐号所属组织的成员。此操作只能由组织的管理帐号调用。组织云服务将在新帐号中创建所需的服务关联委托和帐号访问委托。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResourceAccountResponse> createResourceAccount(
        CreateResourceAccountRequest &request
    );
    // 邀请账号加入组织
    //
    // 向另一个账号发送邀请，受邀账号将以成员账号加入您的组织。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InviteAccountResponse> inviteAccount(
        InviteAccountRequest &request
    );
    // 列出组织中的账号
    //
    // 列出组织中的账号。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。如果指定父级组织单元，则将获得作为父级直系子级的所有账号的列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccountsResponse> listAccounts(
        ListAccountsRequest &request
    );
    // 列出关闭账号的状态
    //
    // 列出组织中指定状态的账号关闭请求。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCloseAccountStatusesResponse> listCloseAccountStatuses(
        ListCloseAccountStatusesRequest &request
    );
    // 列出创建账号的状态
    //
    // 列出组织中指定状态的账号创建请求。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCreateAccountStatusesResponse> listCreateAccountStatuses(
        ListCreateAccountStatusesRequest &request
    );
    // 移动账号
    //
    // 将账号从其当前源位置（根或组织单元）移动到指定的目标位置（根或组织单元）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MoveAccountResponse> moveAccount(
        MoveAccountRequest &request
    );
    // 移除指定的账号
    //
    // 从组织中移除指定的账号。移除的账号将成为一个独立账号，该账号不是任何组织的成员。此操作只能由组织的管理账号调用。只有当账号配置了作为独立账号运行所需的信息时，您才能从组织中移除账号。注意，要移除的账号不能是组织启用的任何服务的委托管理员账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveAccountResponse> removeAccount(
        RemoveAccountRequest &request
    );
    // 查询账号信息
    //
    // 查询有关指定账号的信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAccountResponse> showAccount(
        ShowAccountRequest &request
    );
    // 查询有关创建账号状态的信息
    //
    // 检索创建账号的异步请求的当前状态。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCreateAccountStatusResponse> showCreateAccountStatus(
        ShowCreateAccountStatusRequest &request
    );
    // 更新账号信息
    //
    // 更新指定的账号信息。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAccountResponse> updateAccount(
        UpdateAccountRequest &request
    );

    // 注销服务的委托管理员
    //
    // 删除指定成员账号作为指定服务的委托管理员。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeregisterDelegatedAdministratorResponse> deregisterDelegatedAdministrator(
        DeregisterDelegatedAdministratorRequest &request
    );
    // 列出此组织中指定为委托管理员的账号
    //
    // 列出在此组织中指定为委派管理员的账号。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDelegatedAdministratorsResponse> listDelegatedAdministrators(
        ListDelegatedAdministratorsRequest &request
    );
    // 列出指定账号是其委托管理员的服务
    //
    // 列出指定账号是其委托管理员的服务。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDelegatedServicesResponse> listDelegatedServices(
        ListDelegatedServicesRequest &request
    );
    // 注册作为服务委托管理员
    //
    // 指定成员账号能够管理指定服务的组织功能。此接口授予委托管理员对组织服务数据的只读访问权限。委托管理员账号中的IAM用户仍需要IAM权限才能访问和管理服务。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterDelegatedAdministratorResponse> registerDelegatedAdministrator(
        RegisterDelegatedAdministratorRequest &request
    );

    // 接受邀请
    //
    // 向邀请的发起方发送应答，接受加入组织邀请。在您接受邀请后，此邀请信息将继续保留并出现在相关API的返回结果中，保留期限为30天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AcceptHandshakeResponse> acceptHandshake(
        AcceptHandshakeRequest &request
    );
    // 取消邀请
    //
    // 取消邀请，此时邀请状态将设置为已取消。此接口只能由发起邀请的账号调用。取消邀请后，此邀请信息将继续保留并出现在相关API的返回结果中，保留期限为30天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelHandshakeResponse> cancelHandshake(
        CancelHandshakeRequest &request
    );
    // 拒绝邀请
    //
    // 拒绝邀请请求。受邀账号拒绝邀请，此时当前邀请状态将设置为拒绝，邀请停止。此接口只能由受邀账号调用。邀请发起者无法再次激活被拒绝的邀请，但可以重新发送新的邀请。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeclineHandshakeResponse> declineHandshake(
        DeclineHandshakeRequest &request
    );
    // 列出发送的邀请
    //
    // 列出所属组织发送的邀请。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHandshakesResponse> listHandshakes(
        ListHandshakesRequest &request
    );
    // 列出收到的邀请
    //
    // 列出账号收到的所有邀请。此操作可以由任何账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReceivedHandshakesResponse> listReceivedHandshakes(
        ListReceivedHandshakesRequest &request
    );
    // 查询邀请相关信息
    //
    // 查询组织中已有账号邀请的相关信息。此接口可以由组织中的任何账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHandshakeResponse> showHandshake(
        ShowHandshakeRequest &request
    );

    // 列出组织中的根、组织单元和账号
    //
    // 列出组织中包含的所有根、组织单元和账号。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。您可以通过指定父ID和子ID参数来过滤实体。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEntitiesResponse> listEntities(
        ListEntitiesRequest &request
    );
    // 列出租户的组织配额
    //
    // 列出租户的组织配额。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotasResponse> listQuotas(
        ListQuotasRequest &request
    );
    // 列出所有可以与组织服务集成的云服务
    //
    // 列出所有可以与组织服务集成的云服务。集成后云服务将成为组织的可信服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServicesResponse> listServices(
        ListServicesRequest &request
    );
    // 列出被添加到标签策略强制执行的资源类型
    //
    // 列出被添加到标签策略强制执行的资源类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagPolicyServicesResponse> listTagPolicyServices(
        ListTagPolicyServicesRequest &request
    );
    // 查询有效的策略
    //
    // 查询指定策略类型和账号的有效策略信息。当前此接口不支持查询服务控制策略（service_control_policy）。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEffectivePoliciesResponse> showEffectivePolicies(
        ShowEffectivePoliciesRequest &request
    );

    // 创建组织
    //
    // 创建组织。调用此接口的账号将自动成为新组织的管理账号，调用此接口的账号凭证必须是新组织管理账号的账号凭证。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOrganizationResponse> createOrganization(
        CreateOrganizationRequest &request
    );
    // 删除组织
    //
    // 删除组织。您必须使用管理账号才能删除组织，并且先移除组织中的所有账号、组织单元和策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOrganizationResponse> deleteOrganization(
        DeleteOrganizationRequest &request
    );
    // 离开当前组织
    //
    // 此操作只能由组织的成员账号调用。只有当组织账号配置了作为独立账号运行所需的信息时，您才能作为成员账号离开组织。要离开的账号不能是组织启用的任何服务的委托管理员账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LeaveOrganizationResponse> leaveOrganization(
        LeaveOrganizationRequest &request
    );
    // 列出组织的根
    //
    // 列出当前组织的根。此接口只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRootsResponse> listRoots(
        ListRootsRequest &request
    );
    // 查询所属组织信息
    //
    // 查询账号所属组织的信息。此操作可以由组织中的任何账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrganizationResponse> showOrganization(
        ShowOrganizationRequest &request
    );

    // 创建组织单元
    //
    // 在根或父组织单元中创建组织单元。组织单元是账号的容器，使您能够对账号进行分组管理，并根据业务要求应用策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateOrganizationalUnitResponse> createOrganizationalUnit(
        CreateOrganizationalUnitRequest &request
    );
    // 删除组织单元
    //
    // 从根或其他组织单元中删除组织单元。前提是您必须先移除该组织单元中的所有成员账号或将成员账号移动至其他组织单元，必须删除该组织单元中的所有子组织单元。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteOrganizationalUnitResponse> deleteOrganizationalUnit(
        DeleteOrganizationalUnitRequest &request
    );
    // 列出组织单元
    //
    // 列出组织中的所有组织单元。如果指定父级组织单元，则将获得父级直系子级的组织单元列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOrganizationalUnitsResponse> listOrganizationalUnits(
        ListOrganizationalUnitsRequest &request
    );
    // 查询有关组织单元的信息
    //
    // 查询有关组织单元的信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOrganizationalUnitResponse> showOrganizationalUnit(
        ShowOrganizationalUnitRequest &request
    );
    // 更改组织单元名称
    //
    // 重命名指定的组织单元。重命名后组织单元ID不变，下属子组织单元和下属账号不变，组织单元绑定的策略不变。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateOrganizationalUnitResponse> updateOrganizationalUnit(
        UpdateOrganizationalUnitRequest &request
    );

    // 将策略跟实体绑定
    //
    // 绑定策略到根、组织单元或个人账号。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachPolicyResponse> attachPolicy(
        AttachPolicyRequest &request
    );
    // 创建策略
    //
    // 创建指定类型的策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePolicyResponse> createPolicy(
        CreatePolicyRequest &request
    );
    // 删除策略
    //
    // 从组织中删除指定的策略。在执行此操作之前，必须首先将策略跟所有组织单元、根和账号解绑。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePolicyResponse> deletePolicy(
        DeletePolicyRequest &request
    );
    // 将策略跟实体解绑
    //
    // 从根、组织单元或账号解绑策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachPolicyResponse> detachPolicy(
        DetachPolicyRequest &request
    );
    // 禁用根中的策略类型
    //
    // 禁用根中的策略类型。只有在根中启用了特定类型的策略，才能将该类型的策略绑定到根中的实体。执行此操作后，您不能再将指定类型的策略绑定到该根或该根中的任何组织单元或账号。这是在后台执行的异步请求。您可以使用ListRoots查看指定根的策略类型的状态。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisablePolicyTypeResponse> disablePolicyType(
        DisablePolicyTypeRequest &request
    );
    // 在根中启用策略类型
    //
    // 在根中启用策略类型。在根中启用策略类型后，您可以将该类型的策略绑定到根、或该根中的任何组织单元和账号。这是在后台执行的异步请求。您可以使用ListRoots查看指定根的策略类型的状态。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnablePolicyTypeResponse> enablePolicyType(
        EnablePolicyTypeRequest &request
    );
    // 列出跟指定策略绑定的所有实体
    //
    // 列出跟指定策略绑定的所有根、组织单元和账号。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEntitiesForPolicyResponse> listEntitiesForPolicy(
        ListEntitiesForPolicyRequest &request
    );
    // 列出策略
    //
    // 列出组织中的所有策略。如果指定了资源ID，例如组织单元ID或账号ID，则将获得该资源已绑定的策略列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPoliciesResponse> listPolicies(
        ListPoliciesRequest &request
    );
    // 查询策略相关信息
    //
    // 检索策略的相关信息。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPolicyResponse> showPolicy(
        ShowPolicyRequest &request
    );
    // 更新策略
    //
    // 更新策略，可以更新策略的名称、描述或内容。如果不提供任何参数，则策略将保持不变。您不能更改策略的类型。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePolicyResponse> updatePolicy(
        UpdatePolicyRequest &request
    );

    // 为指定资源类型添加标签
    //
    // 向指定的资源类型添加一个或多个标签。目前，您可以将标签附加到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagResourceResponse> createTagResource(
        CreateTagResourceRequest &request
    );
    // 从指定资源类型中删除指定主键标签
    //
    // 从指定资源类型中删除具有指定主键的任何标签。您可以将标签绑定到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResourceResponse> deleteTagResource(
        DeleteTagResourceRequest &request
    );
    // 根据资源类型及标签信息查询实例列表
    //
    // 根据资源类型及标签信息查询实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceInstancesResponse> listResourceInstances(
        ListResourceInstancesRequest &request
    );
    // 查询资源标签
    //
    // 查询资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceTagsResponse> listResourceTags(
        ListResourceTagsRequest &request
    );
    // 列出绑定到指定资源类型的标签
    //
    // 列出绑定到指定资源类型的标签。您可以将标签附加到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagResourcesResponse> listTagResources(
        ListTagResourcesRequest &request
    );
    // 列出绑定到指定资源的标签
    //
    // 列出绑定到指定资源的标签。您可以将标签附加到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagsForResourceResponse> listTagsForResource(
        ListTagsForResourceRequest &request
    );
    // 根据资源类型及标签信息查询实例数量
    //
    // 根据资源类型及标签信息查询实例数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourceInstancesCountResponse> showResourceInstancesCount(
        ShowResourceInstancesCountRequest &request
    );
    // 为指定资源添加标签
    //
    // 向指定的资源添加一个或多个标签。目前，您可以将标签附加到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<TagResourceResponse> tagResource(
        TagResourceRequest &request
    );
    // 从指定资源中删除指定主键标签
    //
    // 从指定资源中删除具有指定主键的任何标签。您可以将标签绑定到组织中的账号、组织单元、根和策略。此操作只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UntagResourceResponse> untagResource(
        UntagResourceRequest &request
    );

    // 禁用受信任服务
    //
    // 禁用服务（由service_principal指定的服务）与组织的集成。禁用可信服务后，指定服务将不可以在组织中的新账号中创建服务关联委托。这意味着该服务无法代表您对组织中的任何新账号执行操作。在服务完成从组织中的清理之前，服务仍可以在旧账号中执行操作。此接口只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableTrustedServiceResponse> disableTrustedService(
        DisableTrustedServiceRequest &request
    );
    // 启用可信服务
    //
    // 启用服务（由service_principal指定的服务）与组织的集成。启用可信服务后，允许指定的可信服务对组织中的所有账号创建服务关联委托。这允许可信服务代表您在组织及其账号中执行操作。此接口只能由组织的管理账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableTrustedServiceResponse> enableTrustedService(
        EnableTrustedServiceRequest &request
    );
    // 列出组织的可信服务列表
    //
    // 返回启用与组织集成的可信服务列表。此操作只能由组织的管理账号或作为服务委托管理员的成员账号调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrustedServicesResponse> listTrustedServices(
        ListTrustedServicesRequest &request
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

template class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Organizations::V1::OrganizationsClient>;

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsClient_H_

