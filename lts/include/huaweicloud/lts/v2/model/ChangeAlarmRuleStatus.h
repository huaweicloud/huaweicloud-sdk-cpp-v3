
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ChangeAlarmRuleStatus_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ChangeAlarmRuleStatus_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 改变告警规则状态
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ChangeAlarmRuleStatus
    : public ModelBase
{
public:
    ChangeAlarmRuleStatus();
    virtual ~ChangeAlarmRuleStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeAlarmRuleStatus members

    /// <summary>
    /// 告警规则ID
    /// </summary>

    std::string getAlarmRuleId() const;
    bool alarmRuleIdIsSet() const;
    void unsetalarmRuleId();
    void setAlarmRuleId(const std::string& value);

    /// <summary>
    /// 状态（RUNNING/STOPPING）
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string alarmRuleId_;
    bool alarmRuleIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ChangeAlarmRuleStatus_H_
