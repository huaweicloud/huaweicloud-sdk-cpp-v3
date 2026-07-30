
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvokeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvokeResponse_H_


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
/// **参数解释：** 服务调用时的相关配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceInvokeResponse
    : public ModelBase
{
public:
    ServiceInvokeResponse();
    virtual ~ServiceInvokeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceInvokeResponse members

    /// <summary>
    /// **参数解释：** 服务端口号。 **取值范围：** [1, 65535]。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数解释：** 服务请求协议。当选择WSS与WS时，服务接口会升级为WebSocket。开启WebSocket时，不支持同时设置“服务流量限制”。 **取值范围：** - HTTP：HTTP协议。 - HTTPS：HTTPS协议。 - WSS：WebSocket Secure协议。 - WS：WebSocket协议。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// **参数解释：** 认证类型。 **取值范围：** - TOKEN：IAM Token认证。 - API_KEY：API Key认证。 - NONE：无认证。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数解释：** 外网访问。 **取值范围：** - TRUE：要外网访问。 - FALSE：不要外网访问。
    /// </summary>

    bool isInternetAccessEnable() const;
    bool internetAccessEnableIsSet() const;
    void unsetinternetAccessEnable();
    void setInternetAccessEnable(bool value);

    /// <summary>
    /// **参数解释：** 内网审批。 **取值范围：** - TRUE：要内网审批。 - FALSE：不要内网审批。
    /// </summary>

    bool isIntranetApprovalEnable() const;
    bool intranetApprovalEnableIsSet() const;
    void unsetintranetApprovalEnable();
    void setIntranetApprovalEnable(bool value);

    /// <summary>
    /// **参数解释：** 动态路由开关。 **取值范围：** - TRUE：开启动态路由。 - FALSE：不开启动态路由。
    /// </summary>

    bool isDynamicRoutingEnable() const;
    bool dynamicRoutingEnableIsSet() const;
    void unsetdynamicRoutingEnable();
    void setDynamicRoutingEnable(bool value);

    /// <summary>
    /// **参数解释：** 智能路由策略。 **取值范围：** - ROUND_ROBIN：轮询。 - ORIGIN_IP_HASH：源IP哈希。 - MIN_CONN：最小连接数。 - MIN_FIRST_TOKEN_TIME：最小首token时延。 - COMPOSITE：综合负载。 - SLO_BASED：SLO优先级。
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口服务请求协议。 **取值范围：** - HTTP：HTTP协议。 - HTTPS：HTTPS协议。
    /// </summary>

    std::string getMetricApiScheme() const;
    bool metricApiSchemeIsSet() const;
    void unsetmetricApiScheme();
    void setMetricApiScheme(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口端口号。 **取值范围：** [1, 65535]。
    /// </summary>

    std::string getMetricApiPort() const;
    bool metricApiPortIsSet() const;
    void unsetmetricApiPort();
    void setMetricApiPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 指标接口path。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMetricApiPath() const;
    bool metricApiPathIsSet() const;
    void unsetmetricApiPath();
    void setMetricApiPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启EMS加速。 **取值范围：** - TRUE：开启EMS加速。 - FALSE：不开启EMS加速。
    /// </summary>

    bool isEmsEnable() const;
    bool emsEnableIsSet() const;
    void unsetemsEnable();
    void setEmsEnable(bool value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度开关。 **取值范围：** - true：开启proxy支持请求重调度。 - false：不开启proxy支持请求重调度。
    /// </summary>

    bool isRequestRetryEnable() const;
    bool requestRetryEnableIsSet() const;
    void unsetrequestRetryEnable();
    void setRequestRetryEnable(bool value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度的重试次数 **取值范围：** [1, 10]。
    /// </summary>

    int32_t getRequestRetryCntMax() const;
    bool requestRetryCntMaxIsSet() const;
    void unsetrequestRetryCntMax();
    void setRequestRetryCntMax(int32_t value);

    /// <summary>
    /// **参数解释：** proxy支持请求重调度的重试间隔，单位ms **取值范围：** [1, 10000]。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInvokeResponse_H_
