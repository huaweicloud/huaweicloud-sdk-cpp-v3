#ifndef HUAWEICLOUD_SDK_CFW_V1_CfwClient_H_
#define HUAWEICLOUD_SDK_CFW_V1_CfwClient_H_

#include <huaweicloud/cfw/v1/CfwExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cfw/v1/model/AddAddressItemRequest.h>
#include <huaweicloud/cfw/v1/model/AddAddressItemResponse.h>
#include <huaweicloud/cfw/v1/model/AddAddressItemsInfoDto.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetDto.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetRequest.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetResponse.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListDto.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListRequest.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListResponse.h>
#include <huaweicloud/cfw/v1/model/AddDomainListDto.h>
#include <huaweicloud/cfw/v1/model/AddDomainSetInfoDto.h>
#include <huaweicloud/cfw/v1/model/AddDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/AddDomainSetResponse.h>
#include <huaweicloud/cfw/v1/model/AddDomainsRequest.h>
#include <huaweicloud/cfw/v1/model/AddDomainsResponse.h>
#include <huaweicloud/cfw/v1/model/AddLogConfigRequest.h>
#include <huaweicloud/cfw/v1/model/AddLogConfigResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/AntiVirusRuleDto.h>
#include <huaweicloud/cfw/v1/model/AntiVirusSwitchDto.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAddressItemsRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAddressItemsResponse.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteDomainSetResponse.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteDomainSetsDto.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/CancelCaptureTaskDto.h>
#include <huaweicloud/cfw/v1/model/CancelCaptureTaskRequest.h>
#include <huaweicloud/cfw/v1/model/CancelCaptureTaskResponse.h>
#include <huaweicloud/cfw/v1/model/CaptureTaskDto.h>
#include <huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeProtectStatusRequestBody.h>
#include <huaweicloud/cfw/v1/model/CreateCaptureTaskRequest.h>
#include <huaweicloud/cfw/v1/model/CreateCaptureTaskResponse.h>
#include <huaweicloud/cfw/v1/model/CreateEastWestFirewallRequest.h>
#include <huaweicloud/cfw/v1/model/CreateEastWestFirewallRequestBody.h>
#include <huaweicloud/cfw/v1/model/CreateEastWestFirewallResponse.h>
#include <huaweicloud/cfw/v1/model/CreateFirewallReq.h>
#include <huaweicloud/cfw/v1/model/CreateFirewallRequest.h>
#include <huaweicloud/cfw/v1/model/CreateFirewallResponse.h>
#include <huaweicloud/cfw/v1/model/CreateTagRequest.h>
#include <huaweicloud/cfw/v1/model/CreateTagResponse.h>
#include <huaweicloud/cfw/v1/model/CreateTagsDto.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemsInfoDto.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteCaptureTaskDto.h>
#include <huaweicloud/cfw/v1/model/DeleteCaptureTaskRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteCaptureTaskResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainDto.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainSetResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainsRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainsResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteFirewallRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteFirewallResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemDto.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteTagRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteTagResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteTagsDto.h>
#include <huaweicloud/cfw/v1/model/ListAccessControlLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAccessControlLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressItemsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressItemsResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetDetailResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetsResponse.h>
#include <huaweicloud/cfw/v1/model/ListAttackLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAttackLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListBlackWhiteListsRequest.h>
#include <huaweicloud/cfw/v1/model/ListBlackWhiteListsResponse.h>
#include <huaweicloud/cfw/v1/model/ListCaptureResultRequest.h>
#include <huaweicloud/cfw/v1/model/ListCaptureResultResponse.h>
#include <huaweicloud/cfw/v1/model/ListCaptureTaskRequest.h>
#include <huaweicloud/cfw/v1/model/ListCaptureTaskResponse.h>
#include <huaweicloud/cfw/v1/model/ListDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/ListDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseDetailResponse.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseIpRequest.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseIpResponse.h>
#include <huaweicloud/cfw/v1/model/ListDomainSetsRequest.h>
#include <huaweicloud/cfw/v1/model/ListDomainSetsResponse.h>
#include <huaweicloud/cfw/v1/model/ListDomainsRequest.h>
#include <huaweicloud/cfw/v1/model/ListDomainsResponse.h>
#include <huaweicloud/cfw/v1/model/ListEastWestFirewallRequest.h>
#include <huaweicloud/cfw/v1/model/ListEastWestFirewallResponse.h>
#include <huaweicloud/cfw/v1/model/ListFirewallDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListFirewallDetailResponse.h>
#include <huaweicloud/cfw/v1/model/ListFirewallListRequest.h>
#include <huaweicloud/cfw/v1/model/ListFirewallListResponse.h>
#include <huaweicloud/cfw/v1/model/ListFlowLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListFlowLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListJobRequest.h>
#include <huaweicloud/cfw/v1/model/ListJobResponse.h>
#include <huaweicloud/cfw/v1/model/ListLogConfigRequest.h>
#include <huaweicloud/cfw/v1/model/ListLogConfigResponse.h>
#include <huaweicloud/cfw/v1/model/ListProjectTagsRequest.h>
#include <huaweicloud/cfw/v1/model/ListProjectTagsResponse.h>
#include <huaweicloud/cfw/v1/model/ListProtectedVpcsRequest.h>
#include <huaweicloud/cfw/v1/model/ListProtectedVpcsResponse.h>
#include <huaweicloud/cfw/v1/model/ListResourceTagsRequest.h>
#include <huaweicloud/cfw/v1/model/ListResourceTagsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetsResponse.h>
#include <huaweicloud/cfw/v1/model/LogConfigDto.h>
#include <huaweicloud/cfw/v1/model/ObjectInfoDto.h>
#include <huaweicloud/cfw/v1/model/QueryFireWallInstanceDto.h>
#include <huaweicloud/cfw/v1/model/SaveTagsRequest.h>
#include <huaweicloud/cfw/v1/model/SaveTagsResponse.h>
#include <huaweicloud/cfw/v1/model/ShowAlarmConfigRequest.h>
#include <huaweicloud/cfw/v1/model/ShowAlarmConfigResponse.h>
#include <huaweicloud/cfw/v1/model/ShowAntiVirusRuleRequest.h>
#include <huaweicloud/cfw/v1/model/ShowAntiVirusRuleResponse.h>
#include <huaweicloud/cfw/v1/model/ShowAntiVirusSwitchRequest.h>
#include <huaweicloud/cfw/v1/model/ShowAntiVirusSwitchResponse.h>
#include <huaweicloud/cfw/v1/model/ShowDomainSetDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ShowDomainSetDetailResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetDto.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAlarmConfigRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAlarmConfigResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAntiVirusRuleRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAntiVirusRuleResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAntiVirusSwitchRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAntiVirusSwitchResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAttackLogAlarmConfigDto.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListDto.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetInfoDto.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateLogConfigRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateLogConfigResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateObjectConfigDescRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateObjectConfigDescResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetUsingPUTRequestBody.h>
#include <string>

#include <huaweicloud/cfw/v1/model/AddAclRuleRequest.h>
#include <huaweicloud/cfw/v1/model/AddAclRuleResponse.h>
#include <huaweicloud/cfw/v1/model/AddRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAclRulesRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAclRulesResponse.h>
#include <huaweicloud/cfw/v1/model/BatchUpdateAclRuleActionsRequest.h>
#include <huaweicloud/cfw/v1/model/BatchUpdateAclRuleActionsResponse.h>
#include <huaweicloud/cfw/v1/model/ClearAccessLogRuleHitCountsDto.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleHitCountRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleHitCountResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/ListAclRuleHitCountRequest.h>
#include <huaweicloud/cfw/v1/model/ListAclRuleHitCountResponse.h>
#include <huaweicloud/cfw/v1/model/ListAclRulesRequest.h>
#include <huaweicloud/cfw/v1/model/ListAclRulesResponse.h>
#include <huaweicloud/cfw/v1/model/ListRegionsRequest.h>
#include <huaweicloud/cfw/v1/model/ListRegionsResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclTagsRequest.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclTagsResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleHitCountDto.h>
#include <huaweicloud/cfw/v1/model/OrderRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/ShowImportStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ShowImportStatusResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAclRuleOrderRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAclRuleOrderResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAclRuleRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAclRuleResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/UpdateSecurityPolciesActionDto.h>
#include <string>

#include <huaweicloud/cfw/v1/model/ChangeEipStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeEipStatusResponse.h>
#include <huaweicloud/cfw/v1/model/EipOperateProtectReq.h>
#include <huaweicloud/cfw/v1/model/ListAlarmWhitelistRequest.h>
#include <huaweicloud/cfw/v1/model/ListAlarmWhitelistResponse.h>
#include <huaweicloud/cfw/v1/model/ListEipCountRequest.h>
#include <huaweicloud/cfw/v1/model/ListEipCountResponse.h>
#include <huaweicloud/cfw/v1/model/ListEipsRequest.h>
#include <huaweicloud/cfw/v1/model/ListEipsResponse.h>
#include <huaweicloud/cfw/v1/model/ShowAutoProtectStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ShowAutoProtectStatusResponse.h>
#include <huaweicloud/cfw/v1/model/SwitchAutoProtectStatusRequest.h>
#include <huaweicloud/cfw/v1/model/SwitchAutoProtectStatusResponse.h>
#include <huaweicloud/cfw/v1/model/SwitchEipStatusDto.h>
#include <string>

#include <huaweicloud/cfw/v1/model/AdvancedIpsRuleDto.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsRuleModeRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsRuleModeResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusResponse.h>
#include <huaweicloud/cfw/v1/model/IpsProtectDTO.h>
#include <huaweicloud/cfw/v1/model/IpsRuleChangeDto.h>
#include <huaweicloud/cfw/v1/model/IpsSwitchDTO.h>
#include <huaweicloud/cfw/v1/model/ListCustomerIpsRequest.h>
#include <huaweicloud/cfw/v1/model/ListCustomerIpsResponse.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeResponse.h>
#include <huaweicloud/cfw/v1/model/ListIpsRules1Request.h>
#include <huaweicloud/cfw/v1/model/ListIpsRules1Response.h>
#include <huaweicloud/cfw/v1/model/ListIpsRulesRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsRulesResponse.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusResponse.h>
#include <huaweicloud/cfw/v1/model/ShowIpsUpdateTimeRequest.h>
#include <huaweicloud/cfw/v1/model/ShowIpsUpdateTimeResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAdvancedIpsRuleRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAdvancedIpsRuleResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cfw::V1::Model;

class HUAWEICLOUD_CFW_V1_EXPORT  CfwClient : public Client
{
public:

    CfwClient();

    virtual ~CfwClient();

    static ClientBuilder<CfwClient> newBuilder();

    // 添加地址组成员
    //
    // 添加地址组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAddressItemResponse> addAddressItem(
        AddAddressItemRequest &request
    );
    // 添加地址组
    //
    // 添加地址组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAddressSetResponse> addAddressSet(
        AddAddressSetRequest &request
    );
    // 创建黑白名单规则
    //
    // 创建黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddBlackWhiteListResponse> addBlackWhiteList(
        AddBlackWhiteListRequest &request
    );
    // 添加域名组
    //
    // 添加域名组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDomainSetResponse> addDomainSet(
        AddDomainSetRequest &request
    );
    // 添加域名列表
    //
    // 添加域名列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDomainsResponse> addDomains(
        AddDomainsRequest &request
    );
    // 创建日志配置
    //
    // 创建日志配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddLogConfigResponse> addLogConfig(
        AddLogConfigRequest &request
    );
    // 新建服务成员
    //
    // 批量添加服务组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddServiceItemsResponse> addServiceItems(
        AddServiceItemsRequest &request
    );
    // 新建服务组
    //
    // 创建服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddServiceSetResponse> addServiceSet(
        AddServiceSetRequest &request
    );
    // 批量删除地址组成员
    //
    // 批量删除地址组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAddressItemsResponse> batchDeleteAddressItems(
        BatchDeleteAddressItemsRequest &request
    );
    // 批量删除域名组
    //
    // 批量删除域名组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteDomainSetResponse> batchDeleteDomainSet(
        BatchDeleteDomainSetRequest &request
    );
    // 批量删除服务组成员信息
    //
    // 批量删除服务组成员信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteServiceItemsResponse> batchDeleteServiceItems(
        BatchDeleteServiceItemsRequest &request
    );
    // 取消抓包任务
    //
    // 取消抓包任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelCaptureTaskResponse> cancelCaptureTask(
        CancelCaptureTaskRequest &request
    );
    // 修改东西向防火墙防护状态
    //
    // 东西向防护开启/关闭
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeEastWestFirewallStatusResponse> changeEastWestFirewallStatus(
        ChangeEastWestFirewallStatusRequest &request
    );
    // 创建抓包任务
    //
    // 创建抓包任务，每个任务只能执行一次。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCaptureTaskResponse> createCaptureTask(
        CreateCaptureTaskRequest &request
    );
    // 创建东西向防火墙
    //
    // 创建东西向防火墙
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEastWestFirewallResponse> createEastWestFirewall(
        CreateEastWestFirewallRequest &request
    );
    // 创建防火墙
    //
    // 创建防火墙
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFirewallResponse> createFirewall(
        CreateFirewallRequest &request
    );
    // 标签创建接口
    //
    // 创建标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagResponse> createTag(
        CreateTagRequest &request
    );
    // 删除地址组成员
    //
    // 删除地址组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAddressItemResponse> deleteAddressItem(
        DeleteAddressItemRequest &request
    );
    // 删除地址组
    //
    // 删除地址组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAddressSetResponse> deleteAddressSet(
        DeleteAddressSetRequest &request
    );
    // 删除黑白名单规则
    //
    // 删除黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBlackWhiteListResponse> deleteBlackWhiteList(
        DeleteBlackWhiteListRequest &request
    );
    // 批量删除抓包任务
    //
    // 批量删除抓包任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCaptureTaskResponse> deleteCaptureTask(
        DeleteCaptureTaskRequest &request
    );
    // 删除域名组
    //
    // 删除域名组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainSetResponse> deleteDomainSet(
        DeleteDomainSetRequest &request
    );
    // 删除域名列表
    //
    // 删除域名列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainsResponse> deleteDomains(
        DeleteDomainsRequest &request
    );
    // 删除防火墙
    //
    // 删除防火墙，仅按需生效
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFirewallResponse> deleteFirewall(
        DeleteFirewallRequest &request
    );
    // 删除服务成员
    //
    // 删除服务组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServiceItemResponse> deleteServiceItem(
        DeleteServiceItemRequest &request
    );
    // 删除服务组
    //
    // 删除服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServiceSetResponse> deleteServiceSet(
        DeleteServiceSetRequest &request
    );
    // 删除标签
    //
    // 删除标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResponse> deleteTag(
        DeleteTagRequest &request
    );
    // 查询访问控制日志
    //
    // 查询访问控制日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccessControlLogsResponse> listAccessControlLogs(
        ListAccessControlLogsRequest &request
    );
    // 查询地址组成员
    //
    // 查询地址组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddressItemsResponse> listAddressItems(
        ListAddressItemsRequest &request
    );
    // 查询地址组详细信息
    //
    // 查询地址组详细
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddressSetDetailResponse> listAddressSetDetail(
        ListAddressSetDetailRequest &request
    );
    // 查询地址组列表
    //
    // 查询地址组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddressSetsResponse> listAddressSets(
        ListAddressSetsRequest &request
    );
    // 查询攻击日志
    //
    // 查询攻击日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAttackLogsResponse> listAttackLogs(
        ListAttackLogsRequest &request
    );
    // 查询黑白名单列表
    //
    // 查询黑白名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBlackWhiteListsResponse> listBlackWhiteLists(
        ListBlackWhiteListsRequest &request
    );
    // 获取抓包任务结果
    //
    // 获取抓包任务结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCaptureResultResponse> listCaptureResult(
        ListCaptureResultRequest &request
    );
    // 查询抓包任务
    //
    // 查询抓包任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCaptureTaskResponse> listCaptureTask(
        ListCaptureTaskRequest &request
    );
    // 查询dns服务器列表
    //
    // 查询dns服务器列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDnsServersResponse> listDnsServers(
        ListDnsServersRequest &request
    );
    // 查询域名解析ip地址
    //
    // 测试域名有效性
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainParseDetailResponse> listDomainParseDetail(
        ListDomainParseDetailRequest &request
    );
    // 获取域名地址解析结果
    //
    // 获取域名地址解析结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainParseIpResponse> listDomainParseIp(
        ListDomainParseIpRequest &request
    );
    // 查询域名组列表
    //
    // 查询域名组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainSetsResponse> listDomainSets(
        ListDomainSetsRequest &request
    );
    // 获取域名组下域名列表
    //
    // 获取域名组下域名列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainsResponse> listDomains(
        ListDomainsRequest &request
    );
    // 获取东西向防火墙信息
    //
    // 获取东西向防火墙信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEastWestFirewallResponse> listEastWestFirewall(
        ListEastWestFirewallRequest &request
    );
    // 查询防火墙详细信息
    //
    // 查询防火墙实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFirewallDetailResponse> listFirewallDetail(
        ListFirewallDetailRequest &request
    );
    // 查询防火墙列表
    //
    // 查询防火墙列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFirewallListResponse> listFirewallList(
        ListFirewallListRequest &request
    );
    // 查询流日志
    //
    // 查询流日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlowLogsResponse> listFlowLogs(
        ListFlowLogsRequest &request
    );
    // 获取CFW任务执行状态
    //
    // 获取CFW任务执行状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobResponse> listJob(
        ListJobRequest &request
    );
    // 获取日志配置
    //
    // 获取日志配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogConfigResponse> listLogConfig(
        ListLogConfigRequest &request
    );
    // 查询标签信息
    //
    // 查询标签信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询防护VPC数
    //
    // 查询防护vpc信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedVpcsResponse> listProtectedVpcs(
        ListProtectedVpcsRequest &request
    );
    // 查询资源标签信息
    //
    // 查询资源标签信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceTagsResponse> listResourceTags(
        ListResourceTagsRequest &request
    );
    // 查询服务成员列表
    //
    // 查询服务组成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceItemsResponse> listServiceItems(
        ListServiceItemsRequest &request
    );
    // 查询服务组详情
    //
    // 查询服务组细节
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceSetDetailResponse> listServiceSetDetail(
        ListServiceSetDetailRequest &request
    );
    // 获取服务组列表
    //
    // 获取服务组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceSetsResponse> listServiceSets(
        ListServiceSetsRequest &request
    );
    // 保存资源标签接口
    //
    // 保存资源标签接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTagsResponse> saveTags(
        SaveTagsRequest &request
    );
    // 获取告警配置信息
    //
    // 获取告警配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlarmConfigResponse> showAlarmConfig(
        ShowAlarmConfigRequest &request
    );
    // 获取防火墙反病毒规则信息
    //
    // 获取防火墙反病毒规则信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAntiVirusRuleResponse> showAntiVirusRule(
        ShowAntiVirusRuleRequest &request
    );
    // 查看反病毒开关
    //
    // 查看反病毒开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAntiVirusSwitchResponse> showAntiVirusSwitch(
        ShowAntiVirusSwitchRequest &request
    );
    // 查看域名组详情
    //
    // 查看域名组详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainSetDetailResponse> showDomainSetDetail(
        ShowDomainSetDetailRequest &request
    );
    // 更新地址组信息
    //
    // 更新地址组信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAddressSetResponse> updateAddressSet(
        UpdateAddressSetRequest &request
    );
    // 修改告警配置接口
    //
    // 修改告警配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAlarmConfigResponse> updateAlarmConfig(
        UpdateAlarmConfigRequest &request
    );
    // 修改反病毒规则
    //
    // 修改反病毒规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAntiVirusRuleResponse> updateAntiVirusRule(
        UpdateAntiVirusRuleRequest &request
    );
    // 修改反病毒开关
    //
    // 修改反病毒开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAntiVirusSwitchResponse> updateAntiVirusSwitch(
        UpdateAntiVirusSwitchRequest &request
    );
    // 更新黑白名单列表
    //
    // 更新黑白名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBlackWhiteListResponse> updateBlackWhiteList(
        UpdateBlackWhiteListRequest &request
    );
    // 更新dns服务器列表
    //
    // 更新dns服务器列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDnsServersResponse> updateDnsServers(
        UpdateDnsServersRequest &request
    );
    // 更新域名组
    //
    // 更新域名组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainSetResponse> updateDomainSet(
        UpdateDomainSetRequest &request
    );
    // 更新日志配置
    //
    // 更新日志配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogConfigResponse> updateLogConfig(
        UpdateLogConfigRequest &request
    );
    // 编辑对象组内成员的描述信息
    //
    // 编辑对象组内成员的描述信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateObjectConfigDescResponse> updateObjectConfigDesc(
        UpdateObjectConfigDescRequest &request
    );
    // 修改服务组
    //
    // 更新服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServiceSetResponse> updateServiceSet(
        UpdateServiceSetRequest &request
    );

    // 创建ACL规则
    //
    // 创建ACL规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAclRuleResponse> addAclRule(
        AddAclRuleRequest &request
    );
    // 批量删除Acl规则
    //
    // 批量删除Acl规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAclRulesResponse> batchDeleteAclRules(
        BatchDeleteAclRulesRequest &request
    );
    // 批量更新规则动作
    //
    // 批量更新规则动作
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateAclRuleActionsResponse> batchUpdateAclRuleActions(
        BatchUpdateAclRuleActionsRequest &request
    );
    // 删除ACL规则
    //
    // 删除ACL规则组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAclRuleResponse> deleteAclRule(
        DeleteAclRuleRequest &request
    );
    // 删除规则击中次数
    //
    // 清除规则击中次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAclRuleHitCountResponse> deleteAclRuleHitCount(
        DeleteAclRuleHitCountRequest &request
    );
    // 获取规则击中次数
    //
    // 获取规则击中次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAclRuleHitCountResponse> listAclRuleHitCount(
        ListAclRuleHitCountRequest &request
    );
    // 查询防护规则
    //
    // 查询防护规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAclRulesResponse> listAclRules(
        ListAclRulesRequest &request
    );
    // 查看region列表
    //
    // 查看region列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRegionsResponse> listRegions(
        ListRegionsRequest &request
    );
    // 查询规则标签
    //
    // 查询规则标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleAclTagsResponse> listRuleAclTags(
        ListRuleAclTagsRequest &request
    );
    // 查看导入状态接口
    //
    // 查看导入状态接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowImportStatusResponse> showImportStatus(
        ShowImportStatusRequest &request
    );
    // 更新ACL规则
    //
    // 更新ACL规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAclRuleResponse> updateAclRule(
        UpdateAclRuleRequest &request
    );
    // ACL防护规则优先级设置
    //
    // ACL防护规则优先级设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAclRuleOrderResponse> updateAclRuleOrder(
        UpdateAclRuleOrderRequest &request
    );

    // 弹性IP开启关闭
    //
    // 开启关闭EIP，客户购买EIP后首次开启EIP防护前需使用ListEips同步EIP资产，sync字段设置为1。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeEipStatusResponse> changeEipStatus(
        ChangeEipStatusRequest &request
    );
    // 查看eip告警白名单
    //
    // 查看eip告警白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlarmWhitelistResponse> listAlarmWhitelist(
        ListAlarmWhitelistRequest &request
    );
    // 查询Eip个数
    //
    // 查询Eip个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEipCountResponse> listEipCount(
        ListEipCountRequest &request
    );
    // 弹性IP列表查询
    //
    // 弹性IP列表查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEipsResponse> listEips(
        ListEipsRequest &request
    );
    // 获取eip自动防护状态信息
    //
    // 获取eip自动防护状态信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoProtectStatusResponse> showAutoProtectStatus(
        ShowAutoProtectStatusRequest &request
    );
    // 修改eip自动防护开关
    //
    // 修改eip自动防护开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAutoProtectStatusResponse> switchAutoProtectStatus(
        SwitchAutoProtectStatusRequest &request
    );

    // 切换防护模式
    //
    // 切换防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsProtectModeResponse> changeIpsProtectMode(
        ChangeIpsProtectModeRequest &request
    );
    // 改变ips规则模式
    //
    // 改变ips规则模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsRuleModeResponse> changeIpsRuleMode(
        ChangeIpsRuleModeRequest &request
    );
    // IPS特性开关操作
    //
    // 切换开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsSwitchStatusResponse> changeIpsSwitchStatus(
        ChangeIpsSwitchStatusRequest &request
    );
    // 获取自定义ips规则
    //
    // 获取自定义ips规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCustomerIpsResponse> listCustomerIps(
        ListCustomerIpsRequest &request
    );
    // 查询防护模式
    //
    // 查询防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsProtectModeResponse> listIpsProtectMode(
        ListIpsProtectModeRequest &request
    );
    // 查询频率ips规则信息
    //
    // 查询频率ips规则信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsRulesResponse> listIpsRules(
        ListIpsRulesRequest &request
    );
    // 获取ips规则列表
    //
    // 获取ips规则列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsRules1Response> listIpsRules1(
        ListIpsRules1Request &request
    );
    // 查询IPS特性开关状态
    //
    // 查询IPS特性开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsSwitchStatusResponse> listIpsSwitchStatus(
        ListIpsSwitchStatusRequest &request
    );
    // 获取ips规则细节
    //
    // 获取ips规则细节
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIpsUpdateTimeResponse> showIpsUpdateTime(
        ShowIpsUpdateTimeRequest &request
    );
    // 创建频率ips规则
    //
    // 创建频率ips规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAdvancedIpsRuleResponse> updateAdvancedIpsRule(
        UpdateAdvancedIpsRuleRequest &request
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

template class HUAWEICLOUD_CFW_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cfw::V1::CfwClient>;

#endif // HUAWEICLOUD_SDK_CFW_V1_CfwClient_H_

