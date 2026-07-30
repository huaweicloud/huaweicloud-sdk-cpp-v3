
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceVersionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceVersionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RuntimeConfigResponse.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/GroupConfigResponse.h>
#include <huaweicloud/modelarts/v1/model/UpgradeConfigResponse.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/LogConfigResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 当前服务版本信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceVersionResponse
    : public ModelBase
{
public:
    ServiceVersionResponse();
    virtual ~ServiceVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceVersionResponse members

    /// <summary>
    /// **参数解释：** 版本id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 版本号。 **取值范围：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理请求的访问地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPredictUrl() const;
    bool predictUrlIsSet() const;
    void unsetpredictUrl();
    void setPredictUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RuntimeConfigResponse getRuntimeConfig() const;
    bool runtimeConfigIsSet() const;
    void unsetruntimeConfig();
    void setRuntimeConfig(const RuntimeConfigResponse& value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeConfigResponse getUpgradeConfig() const;
    bool upgradeConfigIsSet() const;
    void unsetupgradeConfig();
    void setUpgradeConfig(const UpgradeConfigResponse& value);

    /// <summary>
    /// **参数解释：** 服务部署信息。
    /// </summary>

    std::vector<GroupConfigResponse>& getInstanceGroups();
    bool instanceGroupsIsSet() const;
    void unsetinstanceGroups();
    void setInstanceGroups(const std::vector<GroupConfigResponse>& value);

    /// <summary>
    /// **参数解释：** 日志策略。 **取值范围：** - POOL：使用资源池日志插件配置的日志流。 - AUTO_CREATE：自动创建日志流。 - DEFAULT: 由系统决定日志策略
    /// </summary>

    std::string getLtsStrategy() const;
    bool ltsStrategyIsSet() const;
    void unsetltsStrategy();
    void setLtsStrategy(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署对接lts状态。 **取值范围：** - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getLtsStatus() const;
    bool ltsStatusIsSet() const;
    void unsetltsStatus();
    void setLtsStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署对接lts k8s事件状态。 **取值范围：** - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getLtsEventStatus() const;
    bool ltsEventStatusIsSet() const;
    void unsetltsEventStatus();
    void setLtsEventStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务日志配置信息。
    /// </summary>

    std::vector<LogConfigResponse>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<LogConfigResponse>& value);

    /// <summary>
    /// **参数解释：** 部署超时时间。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDeployTimeoutMinutes() const;
    bool deployTimeoutMinutesIsSet() const;
    void unsetdeployTimeoutMinutes();
    void setDeployTimeoutMinutes(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string predictUrl_;
    bool predictUrlIsSet_;
    RuntimeConfigResponse runtimeConfig_;
    bool runtimeConfigIsSet_;
    UpgradeConfigResponse upgradeConfig_;
    bool upgradeConfigIsSet_;
    std::vector<GroupConfigResponse> instanceGroups_;
    bool instanceGroupsIsSet_;
    std::string ltsStrategy_;
    bool ltsStrategyIsSet_;
    std::string ltsStatus_;
    bool ltsStatusIsSet_;
    std::string ltsEventStatus_;
    bool ltsEventStatusIsSet_;
    std::vector<LogConfigResponse> logConfigs_;
    bool logConfigsIsSet_;
    int32_t deployTimeoutMinutes_;
    bool deployTimeoutMinutesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceVersionResponse_H_
