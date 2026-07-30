
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvoke_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvoke_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/FuseConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务调用时的相关配置。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceInvoke
    : public ModelBase
{
public:
    ServiceInvoke();
    virtual ~ServiceInvoke();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceInvoke members

    /// <summary>
    /// **参数解释：** 服务端口号。 **约束限制：**  不涉及。  **取值范围：** [1, 65535]。 **默认取值：**  不涉及。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 参数解释： 服务请求协议。当选择WSS与WS时，服务接口会升级为WebSocket。开启WebSocket时，不支持同时设置“服务流量限制”。 约束限制： 异步服务仅支持HTTPS, HTTP。 取值范围： HTTP：HTTP协议。 HTTPS：HTTPS协议。 WSS：WebSocket Secure协议。 WS：WebSocket协议。 默认取值： 不涉及。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// **参数解释：** 认证类型。 **约束限制：** 不涉及。 **取值范围：** - TOKEN：IAM Token认证。 - API_KEY：API Key认证。 - NONE：无认证。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数解释：** 外网访问。 不涉及。 **约束限制：** 不涉及。 **取值范围：** - TRUE：要外网访问。 - FALSE：无需内网审批。 **默认取值：** 不涉及。
    /// </summary>

    bool isInternetAccessEnable() const;
    bool internetAccessEnableIsSet() const;
    void unsetinternetAccessEnable();
    void setInternetAccessEnable(bool value);

    /// <summary>
    /// **参数解释：** 内网审批。 **约束限制：** 不涉及。 **取值范围：** - TRUE：要内网审批。 - FALSE：无需内网审批。 **默认取值：** 不涉及。
    /// </summary>

    bool isIntranetApprovalEnable() const;
    bool intranetApprovalEnableIsSet() const;
    void unsetintranetApprovalEnable();
    void setIntranetApprovalEnable(bool value);

    /// <summary>
    /// **参数解释：** 动态路由开关。 **约束限制：** 不涉及。 **取值范围：** - TRUE：开启动态路由。 - FALSE：不开启动态路由。 **默认取值：** 不涉及。
    /// </summary>

    bool isDynamicRoutingEnable() const;
    bool dynamicRoutingEnableIsSet() const;
    void unsetdynamicRoutingEnable();
    void setDynamicRoutingEnable(bool value);

    /// <summary>
    /// **参数解释：** 智能路由策略。 **约束限制：** 不涉及。 **取值范围：** - ROUND_ROBIN：轮询。 - ORIGIN_IP_HASH：源IP哈希。 - MIN_CONN：最小连接数。 - MIN_FIRST_TOKEN_TIME：最小首token时延。 - COMPOSITE： 综合负载。 - SLO_BASED：SLO优先级。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口服务请求协议。 **约束限制：** 不涉及。 **取值范围：** - HTTP：HTTP协议。 - HTTPS：HTTPS协议。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMetricApiScheme() const;
    bool metricApiSchemeIsSet() const;
    void unsetmetricApiScheme();
    void setMetricApiScheme(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口端口号。 **约束限制：** 不涉及。 **取值范围：** [1, 65535]。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMetricApiPort() const;
    bool metricApiPortIsSet() const;
    void unsetmetricApiPort();
    void setMetricApiPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口path。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMetricApiPath() const;
    bool metricApiPathIsSet() const;
    void unsetmetricApiPath();
    void setMetricApiPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启EMS加速。 **约束限制：** 不涉及。 **取值范围：** - TRUE：开启EMS加速。 - FALSE：不开启EMS加速。 **默认取值：** 不涉及。
    /// </summary>

    bool isEmsEnable() const;
    bool emsEnableIsSet() const;
    void unsetemsEnable();
    void setEmsEnable(bool value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度开关。 **约束限制：** 不涉及。 **取值范围：** - true：开启proxy支持请求重调度。 - false：不开启proxy支持请求重调度。 **默认取值：** false
    /// </summary>

    bool isRequestRetryEnable() const;
    bool requestRetryEnableIsSet() const;
    void unsetrequestRetryEnable();
    void setRequestRetryEnable(bool value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度的重试次数 **约束限制：**  不涉及。  **取值范围：** [1, 10]。 **默认取值：**  不涉及。
    /// </summary>

    int32_t getRequestRetryCntMax() const;
    bool requestRetryCntMaxIsSet() const;
    void unsetrequestRetryCntMax();
    void setRequestRetryCntMax(int32_t value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度的重试间隔，单位ms **约束限制：**  不涉及。  **取值范围：** [1, 10000]。 **默认取值：**  不涉及。
    /// </summary>

    int32_t getRequestRetryIntervalMs() const;
    bool requestRetryIntervalMsIsSet() const;
    void unsetrequestRetryIntervalMs();
    void setRequestRetryIntervalMs(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    FuseConfig getFuseConfigs() const;
    bool fuseConfigsIsSet() const;
    void unsetfuseConfigs();
    void setFuseConfigs(const FuseConfig& value);


protected:
    int32_t port_;
    bool portIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    bool internetAccessEnable_;
    bool internetAccessEnableIsSet_;
    bool intranetApprovalEnable_;
    bool intranetApprovalEnableIsSet_;
    bool dynamicRoutingEnable_;
    bool dynamicRoutingEnableIsSet_;
    std::string strategy_;
    bool strategyIsSet_;
    std::string metricApiScheme_;
    bool metricApiSchemeIsSet_;
    std::string metricApiPort_;
    bool metricApiPortIsSet_;
    std::string metricApiPath_;
    bool metricApiPathIsSet_;
    bool emsEnable_;
    bool emsEnableIsSet_;
    bool requestRetryEnable_;
    bool requestRetryEnableIsSet_;
    int32_t requestRetryCntMax_;
    bool requestRetryCntMaxIsSet_;
    int32_t requestRetryIntervalMs_;
    bool requestRetryIntervalMsIsSet_;
    FuseConfig fuseConfigs_;
    bool fuseConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvoke_H_
