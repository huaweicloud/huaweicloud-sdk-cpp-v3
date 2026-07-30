
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AdvancedConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AdvancedConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpgradeConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ServiceSecret.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署高级配置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AdvancedConfig
    : public ModelBase
{
public:
    AdvancedConfig();
    virtual ~AdvancedConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdvancedConfig members

    /// <summary>
    /// **参数解释：** 部署超时时间
    /// </summary>

    std::string getDeployTimeoutMinutes() const;
    bool deployTimeoutMinutesIsSet() const;
    void unsetdeployTimeoutMinutes();
    void setDeployTimeoutMinutes(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeConfig getUpgradeConfig() const;
    bool upgradeConfigIsSet() const;
    void unsetupgradeConfig();
    void setUpgradeConfig(const UpgradeConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceSecret getServiceSecret() const;
    bool serviceSecretIsSet() const;
    void unsetserviceSecret();
    void setServiceSecret(const ServiceSecret& value);

    /// <summary>
    /// **参数解释：** 智能路由开关
    /// </summary>

    bool isDynamicRoutingEnable() const;
    bool dynamicRoutingEnableIsSet() const;
    void unsetdynamicRoutingEnable();
    void setDynamicRoutingEnable(bool value);

    /// <summary>
    /// **参数解释：** 智能路由策略
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** EMS加速开关
    /// </summary>

    bool isEmsEnable() const;
    bool emsEnableIsSet() const;
    void unsetemsEnable();
    void setEmsEnable(bool value);

    /// <summary>
    /// **参数解释：** 智能路由指标采集scheme
    /// </summary>

    std::string getMetricApiScheme() const;
    bool metricApiSchemeIsSet() const;
    void unsetmetricApiScheme();
    void setMetricApiScheme(const std::string& value);

    /// <summary>
    /// **参数解释：** 智能路由指标采集端口
    /// </summary>

    std::string getMetricApiPort() const;
    bool metricApiPortIsSet() const;
    void unsetmetricApiPort();
    void setMetricApiPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 智能路由指标采集地址
    /// </summary>

    std::string getMetricApiPath() const;
    bool metricApiPathIsSet() const;
    void unsetmetricApiPath();
    void setMetricApiPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义监控采集指标地址
    /// </summary>

    std::string getCustomMetricsPath() const;
    bool customMetricsPathIsSet() const;
    void unsetcustomMetricsPath();
    void setCustomMetricsPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 容器端口
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// **参数解释：** 容器请求协议。当选择WSS与WS时，服务接口会升级为WebSocket。开启WebSocket时，不支持同时设置“服务流量限制”。 **取值范围：** - HTTP：HTTP协议。 - HTTPS：HTTPS协议。 - WSS：WebSocket Secure协议。 - WS：WebSocket协议。 - TCP：传输控制协议。 - NA：不使用任何协议。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    std::string deployTimeoutMinutes_;
    bool deployTimeoutMinutesIsSet_;
    UpgradeConfig upgradeConfig_;
    bool upgradeConfigIsSet_;
    ServiceSecret serviceSecret_;
    bool serviceSecretIsSet_;
    bool dynamicRoutingEnable_;
    bool dynamicRoutingEnableIsSet_;
    std::string strategy_;
    bool strategyIsSet_;
    bool emsEnable_;
    bool emsEnableIsSet_;
    std::string metricApiScheme_;
    bool metricApiSchemeIsSet_;
    std::string metricApiPort_;
    bool metricApiPortIsSet_;
    std::string metricApiPath_;
    bool metricApiPathIsSet_;
    std::string customMetricsPath_;
    bool customMetricsPathIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AdvancedConfig_H_
