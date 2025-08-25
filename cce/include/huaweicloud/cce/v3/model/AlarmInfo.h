
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AlarmInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AlarmInfo_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 告警助手参数配置。基于AOM服务的告警能力实现，提供集群内的告警快速检索、告警快速配置的能力，告警中心的指标类告警规则依赖云原生监控插件上报数据到AOM实例。 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AlarmInfo
    : public ModelBase
{
public:
    AlarmInfo();
    virtual ~AlarmInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmInfo members

    /// <summary>
    /// **参数解释：** 联系组列表。填写SMN主题名称，通过配置告警联系组，分组管理订阅终端，接收告警信息。 **约束限制：** 不涉及
    /// </summary>

    std::vector<std::string>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 开启告警助手时传入告警模板ID。默认采用容器场景下的告警规则模板。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAlarmRuleTemplateId() const;
    bool alarmRuleTemplateIdIsSet() const;
    void unsetalarmRuleTemplateId();
    void setAlarmRuleTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释：** 开启告警助手时传入AOM普罗实例的id。若未安装普罗插件或者未对接AOM实例，此参数无需指定，告警中心将不会创建指标类告警规则。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPromInstanceID() const;
    bool promInstanceIDIsSet() const;
    void unsetpromInstanceID();
    void setPromInstanceID(const std::string& value);

    /// <summary>
    /// **参数解释：** 开启告警助手时传入AOM普罗实例的企业项目id。若未安装普罗插件或者未对接AOM实例，此参数无需指定，告警中心将不会创建指标类告警规则。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPromEnterpriseProjectID() const;
    bool promEnterpriseProjectIDIsSet() const;
    void unsetpromEnterpriseProjectID();
    void setPromEnterpriseProjectID(const std::string& value);


protected:
    std::vector<std::string> topics_;
    bool topicsIsSet_;
    std::string alarmRuleTemplateId_;
    bool alarmRuleTemplateIdIsSet_;
    std::string promInstanceID_;
    bool promInstanceIDIsSet_;
    std::string promEnterpriseProjectID_;
    bool promEnterpriseProjectIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AlarmInfo_H_
