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
#include <huaweicloud/cfw/v1/model/AddServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAddressItemsRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteAddressItemsResponse.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/BatchDeleteServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeProtectStatusRequestBody.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemsInfoDto.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainDto.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainSetResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainsRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteDomainsResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemDto.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetResponse.h>
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
#include <huaweicloud/cfw/v1/model/ListDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/ListDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListDomainParseDetailResponse.h>
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
#include <huaweicloud/cfw/v1/model/ListProtectedVpcsRequest.h>
#include <huaweicloud/cfw/v1/model/ListProtectedVpcsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetsResponse.h>
#include <huaweicloud/cfw/v1/model/QueryFireWallInstanceDto.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetDto.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListDto.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetInfoDto.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateDomainSetResponse.h>
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
#include <huaweicloud/cfw/v1/model/ListRuleAclTagsRequest.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclTagsResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleHitCountDto.h>
#include <huaweicloud/cfw/v1/model/OrderRuleAclDto.h>
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
#include <huaweicloud/cfw/v1/model/ListEipCountRequest.h>
#include <huaweicloud/cfw/v1/model/ListEipCountResponse.h>
#include <huaweicloud/cfw/v1/model/ListEipsRequest.h>
#include <huaweicloud/cfw/v1/model/ListEipsResponse.h>
#include <string>

#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusResponse.h>
#include <huaweicloud/cfw/v1/model/IpsProtectDTO.h>
#include <huaweicloud/cfw/v1/model/IpsSwitchDTO.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeResponse.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusResponse.h>
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
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAddressItemsResponse> batchDeleteAddressItems(
        BatchDeleteAddressItemsRequest &request
    );
    // 批量删除服务组成员信息
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteServiceItemsResponse> batchDeleteServiceItems(
        BatchDeleteServiceItemsRequest &request
    );
    // 修改东西向防火墙防护状态
    //
    // 东西向防护资源防护开启/关闭
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeEastWestFirewallStatusResponse> changeEastWestFirewallStatus(
        ChangeEastWestFirewallStatusRequest &request
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
    // 删除域名组
    //
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
    // 查询防护VPC数
    //
    // 查询防护vpc信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedVpcsResponse> listProtectedVpcs(
        ListProtectedVpcsRequest &request
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
    // 更新地址组信息
    //
    // 更新地址组信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAddressSetResponse> updateAddressSet(
        UpdateAddressSetRequest &request
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
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainSetResponse> updateDomainSet(
        UpdateDomainSetRequest &request
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
    // 查询规则标签
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleAclTagsResponse> listRuleAclTags(
        ListRuleAclTagsRequest &request
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
    // 开启关闭EIP,客户购买EIP后首次开启EIP防护前需使用ListEips同步EIP资产，sync字段设置为1。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeEipStatusResponse> changeEipStatus(
        ChangeEipStatusRequest &request
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

    // 切换防护模式
    //
    // 切换防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsProtectModeResponse> changeIpsProtectMode(
        ChangeIpsProtectModeRequest &request
    );
    // IPS特性开关操作
    //
    // 切换开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsSwitchStatusResponse> changeIpsSwitchStatus(
        ChangeIpsSwitchStatusRequest &request
    );
    // 查询防护模式
    //
    // 查询防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsProtectModeResponse> listIpsProtectMode(
        ListIpsProtectModeRequest &request
    );
    // 查询IPS特性开关状态
    //
    // 查询IPS特性开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsSwitchStatusResponse> listIpsSwitchStatus(
        ListIpsSwitchStatusRequest &request
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

