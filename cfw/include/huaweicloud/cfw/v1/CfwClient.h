#ifndef HUAWEICLOUD_SDK_CFW_V1_CfwClient_H_
#define HUAWEICLOUD_SDK_CFW_V1_CfwClient_H_

#include <huaweicloud/cfw/v1/CfwExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cfw/v1/model/AddAddressItemsInfoDto.h>
#include <huaweicloud/cfw/v1/model/AddAddressItemsUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddAddressItemsUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetDto.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetInfoUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddAddressSetInfoUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListDto.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddBlackWhiteListUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetUsingPOSTRequestBody.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddServiceSetUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeEwProtectStatusRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeEwProtectStatusResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsProtectModeUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/ChangeProtectStatusRequestBody.h>
#include <huaweicloud/cfw/v1/model/ClearAccessLogRuleHitCountsDto.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleCountRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAclRuleCountResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressItemUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetInfoUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteAddressSetInfoUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteBlackWhiteListUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceItemUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteServiceSetUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/IpsProtectDTO.h>
#include <huaweicloud/cfw/v1/model/ListAccessControlLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAccessControlLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressItemsUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressItemsUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetDetailUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetDetailUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetListUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListAddressSetListUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/ListAttackLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListAttackLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListBlackWhiteListsUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListBlackWhiteListsUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/ListDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/ListDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/ListEastWestFirewallRequest.h>
#include <huaweicloud/cfw/v1/model/ListEastWestFirewallResponse.h>
#include <huaweicloud/cfw/v1/model/ListFirewallUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListFirewallUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/ListFlowLogsRequest.h>
#include <huaweicloud/cfw/v1/model/ListFlowLogsResponse.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsProtectModeUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/ListParseDomainDetailsRequest.h>
#include <huaweicloud/cfw/v1/model/ListParseDomainDetailsResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleHitCountDto.h>
#include <huaweicloud/cfw/v1/model/ListRuleHitCountRequest.h>
#include <huaweicloud/cfw/v1/model/ListRuleHitCountResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsDetailsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceItemsDetailsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailsRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetDetailsResponse.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetRequest.h>
#include <huaweicloud/cfw/v1/model/ListServiceSetResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetDto.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetInfoUsingPutRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateAddressSetInfoUsingPutResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListDto.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListUsingPutRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateBlackWhiteListUsingPutResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody.h>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersResponse.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetUsingPUTRequestBody.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetUsingPutRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetUsingPutResponse.h>
#include <string>

#include <huaweicloud/cfw/v1/model/AddRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/AddRuleAclUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/AddRuleAclUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/DeleteRuleAclUsingDeleteRequest.h>
#include <huaweicloud/cfw/v1/model/DeleteRuleAclUsingDeleteResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclUsingPutRequest.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclUsingPutResponse.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclsUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListRuleAclsUsingGetResponse.h>
#include <huaweicloud/cfw/v1/model/OrderRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/UpdateRuleAclDto.h>
#include <huaweicloud/cfw/v1/model/UpdateRuleAclUsingPutRequest.h>
#include <huaweicloud/cfw/v1/model/UpdateRuleAclUsingPutResponse.h>
#include <string>

#include <huaweicloud/cfw/v1/model/ChangeProtectEipRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeProtectEipResponse.h>
#include <huaweicloud/cfw/v1/model/CountEipsRequest.h>
#include <huaweicloud/cfw/v1/model/CountEipsResponse.h>
#include <huaweicloud/cfw/v1/model/EipOperateProtectReq.h>
#include <huaweicloud/cfw/v1/model/ListEipResourcesRequest.h>
#include <huaweicloud/cfw/v1/model/ListEipResourcesResponse.h>
#include <string>

#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchUsingPostRequest.h>
#include <huaweicloud/cfw/v1/model/ChangeIpsSwitchUsingPostResponse.h>
#include <huaweicloud/cfw/v1/model/IpsSwitchDTO.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusUsingGetRequest.h>
#include <huaweicloud/cfw/v1/model/ListIpsSwitchStatusUsingGetResponse.h>
#include <string>

#include <huaweicloud/cfw/v1/model/ListVpcProtectsRequest.h>
#include <huaweicloud/cfw/v1/model/ListVpcProtectsResponse.h>
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
    std::shared_ptr<AddAddressItemsUsingPostResponse> addAddressItemsUsingPost(
        AddAddressItemsUsingPostRequest &request
    );
    // 添加地址组
    //
    // 添加地址组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAddressSetInfoUsingPostResponse> addAddressSetInfoUsingPost(
        AddAddressSetInfoUsingPostRequest &request
    );
    // 创建黑白名单规则
    //
    // 创建黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddBlackWhiteListUsingPostResponse> addBlackWhiteListUsingPost(
        AddBlackWhiteListUsingPostRequest &request
    );
    // 新建服务成员
    //
    // 批量添加服务组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddServiceItemsUsingPostResponse> addServiceItemsUsingPost(
        AddServiceItemsUsingPostRequest &request
    );
    // 新建服务组
    //
    // 创建服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddServiceSetUsingPostResponse> addServiceSetUsingPost(
        AddServiceSetUsingPostRequest &request
    );
    // 修改东西向防火墙防护状态
    //
    // 东西向防护资源防护开启/关闭
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeEwProtectStatusResponse> changeEwProtectStatus(
        ChangeEwProtectStatusRequest &request
    );
    // 切换防护模式
    //
    // 切换防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsProtectModeUsingPostResponse> changeIpsProtectModeUsingPost(
        ChangeIpsProtectModeUsingPostRequest &request
    );
    // 删除规则击中次数
    //
    // 清除规则击中次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAclRuleCountResponse> deleteAclRuleCount(
        DeleteAclRuleCountRequest &request
    );
    // 删除地址组成员
    //
    // 删除地址组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAddressItemUsingDeleteResponse> deleteAddressItemUsingDelete(
        DeleteAddressItemUsingDeleteRequest &request
    );
    // 删除地址组
    //
    // 删除地址组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAddressSetInfoUsingDeleteResponse> deleteAddressSetInfoUsingDelete(
        DeleteAddressSetInfoUsingDeleteRequest &request
    );
    // 删除黑白名单规则
    //
    // 删除黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBlackWhiteListUsingDeleteResponse> deleteBlackWhiteListUsingDelete(
        DeleteBlackWhiteListUsingDeleteRequest &request
    );
    // 删除服务成员
    //
    // 删除服务组成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServiceItemUsingDeleteResponse> deleteServiceItemUsingDelete(
        DeleteServiceItemUsingDeleteRequest &request
    );
    // 删除服务组
    //
    // 删除服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServiceSetUsingDeleteResponse> deleteServiceSetUsingDelete(
        DeleteServiceSetUsingDeleteRequest &request
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
    std::shared_ptr<ListAddressItemsUsingGetResponse> listAddressItemsUsingGet(
        ListAddressItemsUsingGetRequest &request
    );
    // 查询地址组详细信息
    //
    // 查询地址组详细
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddressSetDetailUsingGetResponse> listAddressSetDetailUsingGet(
        ListAddressSetDetailUsingGetRequest &request
    );
    // 查询地址组列表
    //
    // 查询地址组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAddressSetListUsingGetResponse> listAddressSetListUsingGet(
        ListAddressSetListUsingGetRequest &request
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
    std::shared_ptr<ListBlackWhiteListsUsingGetResponse> listBlackWhiteListsUsingGet(
        ListBlackWhiteListsUsingGetRequest &request
    );
    // 查询dns服务器列表
    //
    // 查询dns服务器列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDnsServersResponse> listDnsServers(
        ListDnsServersRequest &request
    );
    // 获取东西向防火墙信息
    //
    // 查询东西向防火墙信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEastWestFirewallResponse> listEastWestFirewall(
        ListEastWestFirewallRequest &request
    );
    // 查询防火墙实例
    //
    // 查询防火墙实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFirewallUsingGetResponse> listFirewallUsingGet(
        ListFirewallUsingGetRequest &request
    );
    // 查询流日志
    //
    // 查询流日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlowLogsResponse> listFlowLogs(
        ListFlowLogsRequest &request
    );
    // 查询防护模式
    //
    // 查询防护模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsProtectModeUsingPostResponse> listIpsProtectModeUsingPost(
        ListIpsProtectModeUsingPostRequest &request
    );
    // 查询域名解析ip地址
    //
    // 测试域名有效性
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListParseDomainDetailsResponse> listParseDomainDetails(
        ListParseDomainDetailsRequest &request
    );
    // 获取规则击中次数
    //
    // 获取规则击中次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleHitCountResponse> listRuleHitCount(
        ListRuleHitCountRequest &request
    );
    // 查询服务成员列表
    //
    // 查询服务组成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceItemsDetailsResponse> listServiceItemsDetails(
        ListServiceItemsDetailsRequest &request
    );
    // 获取服务组列表
    //
    // 获取服务组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceSetResponse> listServiceSet(
        ListServiceSetRequest &request
    );
    // 查询服务组详情
    //
    // 查询服务组细节
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServiceSetDetailsResponse> listServiceSetDetails(
        ListServiceSetDetailsRequest &request
    );
    // 更新地址组信息
    //
    // 更新地址组信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAddressSetInfoUsingPutResponse> updateAddressSetInfoUsingPut(
        UpdateAddressSetInfoUsingPutRequest &request
    );
    // 更新黑白名单列表
    //
    // 更新黑白名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBlackWhiteListUsingPutResponse> updateBlackWhiteListUsingPut(
        UpdateBlackWhiteListUsingPutRequest &request
    );
    // 更新dns服务器列表
    //
    // 更新dns服务器列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDnsServersResponse> updateDnsServers(
        UpdateDnsServersRequest &request
    );
    // 修改服务组
    //
    // 更新服务组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServiceSetUsingPutResponse> updateServiceSetUsingPut(
        UpdateServiceSetUsingPutRequest &request
    );

    // 创建ACL规则
    //
    // 创建ACL规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRuleAclUsingPostResponse> addRuleAclUsingPost(
        AddRuleAclUsingPostRequest &request
    );
    // 删除ACL规则组
    //
    // 删除ACL规则组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRuleAclUsingDeleteResponse> deleteRuleAclUsingDelete(
        DeleteRuleAclUsingDeleteRequest &request
    );
    // ACL防护规则优先级设置
    //
    // ACL防护规则优先级设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleAclUsingPutResponse> listRuleAclUsingPut(
        ListRuleAclUsingPutRequest &request
    );
    // 查询防护规则
    //
    // 查询防护规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRuleAclsUsingGetResponse> listRuleAclsUsingGet(
        ListRuleAclsUsingGetRequest &request
    );
    // 更新ACL规则
    //
    // 更新ACL规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRuleAclUsingPutResponse> updateRuleAclUsingPut(
        UpdateRuleAclUsingPutRequest &request
    );

    // 弹性IP开启关闭
    //
    // 开启关闭EIP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeProtectEipResponse> changeProtectEip(
        ChangeProtectEipRequest &request
    );
    // 查询Eip个数
    //
    // 查询Eip个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountEipsResponse> countEips(
        CountEipsRequest &request
    );
    // 弹性IP列表查询
    //
    // 弹性IP列表查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEipResourcesResponse> listEipResources(
        ListEipResourcesRequest &request
    );

    // IPS特性开关操作
    //
    // 切换开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeIpsSwitchUsingPostResponse> changeIpsSwitchUsingPost(
        ChangeIpsSwitchUsingPostRequest &request
    );
    // 查询IPS特性开关状态
    //
    // 查询IPS特性开关状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpsSwitchStatusUsingGetResponse> listIpsSwitchStatusUsingGet(
        ListIpsSwitchStatusUsingGetRequest &request
    );

    // 查询防护VPC数
    //
    // 查询防护vpc信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcProtectsResponse> listVpcProtects(
        ListVpcProtectsRequest &request
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

