#ifndef HUAWEICLOUD_SDK_AAD_V2_AadClient_H_
#define HUAWEICLOUD_SDK_AAD_V2_AadClient_H_

#include <huaweicloud/aad/v2/AadExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/aad/v2/model/AddWafWhiteIpRuleRequest.h>
#include <huaweicloud/aad/v2/model/AddWafWhiteIpRuleResponse.h>
#include <huaweicloud/aad/v2/model/AddWafWhiteIpRuleV2RequestBody.h>
#include <huaweicloud/aad/v2/model/CreateAadDomainRequestBody.h>
#include <huaweicloud/aad/v2/model/CreateDomainRequest.h>
#include <huaweicloud/aad/v2/model/CreateDomainResponse.h>
#include <huaweicloud/aad/v2/model/DeleteDomainRequest.h>
#include <huaweicloud/aad/v2/model/DeleteDomainResponse.h>
#include <huaweicloud/aad/v2/model/DeleteDomainV2RequestBody.h>
#include <huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleRequest.h>
#include <huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleResponse.h>
#include <huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleV2RequestBody.h>
#include <huaweicloud/aad/v2/model/EmptyJsonResponse.h>
#include <huaweicloud/aad/v2/model/ListDDoSAttackEventRequest.h>
#include <huaweicloud/aad/v2/model/ListDDoSAttackEventRequestBody.h>
#include <huaweicloud/aad/v2/model/ListDDoSAttackEventResponse.h>
#include <huaweicloud/aad/v2/model/ListDDoSBlackHoleEventRequest.h>
#include <huaweicloud/aad/v2/model/ListDDoSBlackHoleEventResponse.h>
#include <huaweicloud/aad/v2/model/ListDDoSConnectionNumberRequest.h>
#include <huaweicloud/aad/v2/model/ListDDoSConnectionNumberResponse.h>
#include <huaweicloud/aad/v2/model/ListDDoSFlowRequest.h>
#include <huaweicloud/aad/v2/model/ListDDoSFlowResponse.h>
#include <huaweicloud/aad/v2/model/ListFrequencyControlRuleRequest.h>
#include <huaweicloud/aad/v2/model/ListFrequencyControlRuleResponse.h>
#include <huaweicloud/aad/v2/model/ListGlobalConfigRequest.h>
#include <huaweicloud/aad/v2/model/ListGlobalConfigResponse.h>
#include <huaweicloud/aad/v2/model/ListInstanceDomainsRequest.h>
#include <huaweicloud/aad/v2/model/ListInstanceDomainsResponse.h>
#include <huaweicloud/aad/v2/model/ListSourceIpRequest.h>
#include <huaweicloud/aad/v2/model/ListSourceIpResponse.h>
#include <huaweicloud/aad/v2/model/ListWafAttackEventRequest.h>
#include <huaweicloud/aad/v2/model/ListWafAttackEventResponse.h>
#include <huaweicloud/aad/v2/model/ListWafBandwidthRequest.h>
#include <huaweicloud/aad/v2/model/ListWafBandwidthResponse.h>
#include <huaweicloud/aad/v2/model/ListWafCustomRuleRequest.h>
#include <huaweicloud/aad/v2/model/ListWafCustomRuleResponse.h>
#include <huaweicloud/aad/v2/model/ListWafGeoIpRuleRequest.h>
#include <huaweicloud/aad/v2/model/ListWafGeoIpRuleResponse.h>
#include <huaweicloud/aad/v2/model/ListWafQpsRequest.h>
#include <huaweicloud/aad/v2/model/ListWafQpsResponse.h>
#include <huaweicloud/aad/v2/model/ListWafWhiteIpRuleRequest.h>
#include <huaweicloud/aad/v2/model/ListWafWhiteIpRuleResponse.h>
#include <huaweicloud/aad/v2/model/ListWhiteBlackIpRuleRequest.h>
#include <huaweicloud/aad/v2/model/ListWhiteBlackIpRuleResponse.h>
#include <huaweicloud/aad/v2/model/ShowAlarmConfigRequest.h>
#include <huaweicloud/aad/v2/model/ShowAlarmConfigResponse.h>
#include <huaweicloud/aad/v2/model/ShowDDoSPeakRequest.h>
#include <huaweicloud/aad/v2/model/ShowDDoSPeakResponse.h>
#include <huaweicloud/aad/v2/model/ShowDomainCertificateRequest.h>
#include <huaweicloud/aad/v2/model/ShowDomainCertificateResponse.h>
#include <huaweicloud/aad/v2/model/ShowDomainDetailRequest.h>
#include <huaweicloud/aad/v2/model/ShowDomainDetailResponse.h>
#include <huaweicloud/aad/v2/model/ShowDomainNameConfigRequest.h>
#include <huaweicloud/aad/v2/model/ShowDomainNameConfigResponse.h>
#include <huaweicloud/aad/v2/model/ShowFlowBlockRequest.h>
#include <huaweicloud/aad/v2/model/ShowFlowBlockResponse.h>
#include <huaweicloud/aad/v2/model/ShowInstanceByInstanceIdRequest.h>
#include <huaweicloud/aad/v2/model/ShowInstanceByInstanceIdResponse.h>
#include <huaweicloud/aad/v2/model/ShowWafPolicyRequest.h>
#include <huaweicloud/aad/v2/model/ShowWafPolicyResponse.h>
#include <huaweicloud/aad/v2/model/ShowWafQpsRequest.h>
#include <huaweicloud/aad/v2/model/ShowWafQpsResponse.h>
#include <huaweicloud/aad/v2/model/UpdateDomainConfigRequest.h>
#include <huaweicloud/aad/v2/model/UpdateDomainConfigRequestBody.h>
#include <huaweicloud/aad/v2/model/UpdateDomainConfigResponse.h>
#include <huaweicloud/aad/v2/model/UpdateForwardRuleRequest.h>
#include <huaweicloud/aad/v2/model/UpdateForwardRuleRequestBody.h>
#include <huaweicloud/aad/v2/model/UpdateForwardRuleResponse.h>
#include <huaweicloud/aad/v2/model/UpgradeInstanceSpecRequest.h>
#include <huaweicloud/aad/v2/model/UpgradeInstanceSpecResponse.h>
#include <huaweicloud/aad/v2/model/UpgradeInstanceSpecV2RequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Aad::V2::Model;

class HUAWEICLOUD_AAD_V2_EXPORT  AadClient : public Client
{
public:

    AadClient();

    virtual ~AadClient();

    static ClientBuilder<AadClient> newBuilder();

    // 防护策略web-cc黑白名单-创建黑白名单规则
    //
    // 防护策略web-cc黑白名单-创建黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddWafWhiteIpRuleResponse> addWafWhiteIpRule(
        AddWafWhiteIpRuleRequest &request
    );
    // 创建防护域名
    //
    // 创建防护域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainResponse> createDomain(
        CreateDomainRequest &request
    );
    // 删除防护域名
    //
    // 删除防护域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainResponse> deleteDomain(
        DeleteDomainRequest &request
    );
    // 防护策略web-cc黑白名单-删除黑白名单规则
    //
    // 防护策略web-cc黑白名单-删除黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWafWhiteIpRuleResponse> deleteWafWhiteIpRule(
        DeleteWafWhiteIpRuleRequest &request
    );
    // 查询DDoS攻击事件列表
    //
    // 查询DDoS攻击事件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDoSAttackEventResponse> listDDoSAttackEvent(
        ListDDoSAttackEventRequest &request
    );
    // 黑洞事件列表
    //
    // 黑洞事件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDoSBlackHoleEventResponse> listDDoSBlackHoleEvent(
        ListDDoSBlackHoleEventRequest &request
    );
    // 查询新建连接数和并发连接数
    //
    // 查询新建连接数和并发连接数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDoSConnectionNumberResponse> listDDoSConnectionNumber(
        ListDDoSConnectionNumberRequest &request
    );
    // 查询DDoS攻击防护BPS/PPS流量
    //
    // 查询DDoS攻击防护BPS/PPS流量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDoSFlowResponse> listDDoSFlow(
        ListDDoSFlowRequest &request
    );
    // 查询频率控制规则列表
    //
    // 查询频率控制规则列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFrequencyControlRuleResponse> listFrequencyControlRule(
        ListFrequencyControlRuleRequest &request
    );
    // 查询控制台WAF全局配置
    //
    // 查询控制台WAF全局配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalConfigResponse> listGlobalConfig(
        ListGlobalConfigRequest &request
    );
    // 查询实例关联的域名信息
    //
    // 查询实例关联的域名信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceDomainsResponse> listInstanceDomains(
        ListInstanceDomainsRequest &request
    );
    // 查询回源ip列表
    //
    // 查询回源ip列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSourceIpResponse> listSourceIp(
        ListSourceIpRequest &request
    );
    // 查询攻击事件列表
    //
    // 查询攻击事件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafAttackEventResponse> listWafAttackEvent(
        ListWafAttackEventRequest &request
    );
    // 带宽曲线
    //
    // 带宽曲线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafBandwidthResponse> listWafBandwidth(
        ListWafBandwidthRequest &request
    );
    // 查询精准防护规则
    //
    // 查询精准防护规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafCustomRuleResponse> listWafCustomRule(
        ListWafCustomRuleRequest &request
    );
    // 查询区域封禁规则
    //
    // 查询区域封禁规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafGeoIpRuleResponse> listWafGeoIpRule(
        ListWafGeoIpRuleRequest &request
    );
    // 查询请求QPS
    //
    // 查询请求QPS
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafQpsResponse> listWafQps(
        ListWafQpsRequest &request
    );
    // 防护策略web-cc黑白名单-查询黑白名单规则
    //
    // 防护策略web-cc黑白名单-查询黑白名单规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWafWhiteIpRuleResponse> listWafWhiteIpRule(
        ListWafWhiteIpRuleRequest &request
    );
    // 查询DDoS攻击防护的黑白名单列表
    //
    // 查询DDoS攻击防护的黑白名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWhiteBlackIpRuleResponse> listWhiteBlackIpRule(
        ListWhiteBlackIpRuleRequest &request
    );
    // 查询告警设置
    //
    // 查询告警设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlarmConfigResponse> showAlarmConfig(
        ShowAlarmConfigRequest &request
    );
    // 查询高防入流量峰值、攻击流量峰值、DDoS攻击次数
    //
    // 查询高防入流量峰值、攻击流量峰值、DDoS攻击次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDDoSPeakResponse> showDDoSPeak(
        ShowDDoSPeakRequest &request
    );
    // 查询域名关联的证书信息
    //
    // 查询域名关联的证书信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainCertificateResponse> showDomainCertificate(
        ShowDomainCertificateRequest &request
    );
    // 查询域名详情
    //
    // 查询域名详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainDetailResponse> showDomainDetail(
        ShowDomainDetailRequest &request
    );
    // 查看域名配置
    //
    // 查看域名配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainNameConfigResponse> showDomainNameConfig(
        ShowDomainNameConfigRequest &request
    );
    // 查询流量封禁信息
    //
    // 查询流量封禁信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFlowBlockResponse> showFlowBlock(
        ShowFlowBlockRequest &request
    );
    // 查询实例详情
    //
    // 查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceByInstanceIdResponse> showInstanceByInstanceId(
        ShowInstanceByInstanceIdRequest &request
    );
    // 查询WEB防护策略配置
    //
    // 查询WEB防护策略配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWafPolicyResponse> showWafPolicy(
        ShowWafPolicyRequest &request
    );
    // 查询CC攻击防护请求QPS
    //
    // 查询CC攻击防护请求QPS
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWafQpsResponse> showWafQps(
        ShowWafQpsRequest &request
    );
    // 修改域名配置
    //
    // 修改域名配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainConfigResponse> updateDomainConfig(
        UpdateDomainConfigRequest &request
    );
    // 修改转发规则中的源站IP
    //
    // 修改转发规则中的源站IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateForwardRuleResponse> updateForwardRule(
        UpdateForwardRuleRequest &request
    );
    // 修改实例规格
    //
    // 修改实例规格
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeInstanceSpecResponse> upgradeInstanceSpec(
        UpgradeInstanceSpecRequest &request
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

template class HUAWEICLOUD_AAD_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Aad::V2::AadClient>;

#endif // HUAWEICLOUD_SDK_AAD_V2_AadClient_H_

