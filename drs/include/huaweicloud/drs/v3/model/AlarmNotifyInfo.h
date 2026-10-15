
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_AlarmNotifyInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_AlarmNotifyInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/SubscriptionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 异常通知信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  AlarmNotifyInfo
    : public ModelBase
{
public:
    AlarmNotifyInfo();
    virtual ~AlarmNotifyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmNotifyInfo members

    /// <summary>
    /// **参数解释**：  订阅延迟时间，即异常告警通知的延迟时间，单位为秒。  **约束限制**：  不涉及。  **取值范围**：  1-3600。  **默认取值**：  0
    /// </summary>

    int64_t getDelayTime() const;
    bool delayTimeIsSet() const;
    void unsetdelayTime();
    void setDelayTime(int64_t value);

    /// <summary>
    /// **参数解释**：  RTO（Recovery Time Objective，恢复时间目标）延迟时间，即容灾恢复时间目标的延迟阈值，单位为秒。  **约束限制**：  不涉及。  **取值范围**：  1-3600。  **默认取值**：  0
    /// </summary>

    int64_t getRtoDelay() const;
    bool rtoDelayIsSet() const;
    void unsetrtoDelay();
    void setRtoDelay(int64_t value);

    /// <summary>
    /// **参数解释**：  RPO（Recovery Point Objective，恢复点目标）延迟时间，即容灾恢复点目标的延迟阈值，单位为秒。  **约束限制**：  不涉及。  **取值范围**：  1-3600。  **默认取值**：  0
    /// </summary>

    int64_t getRpoDelay() const;
    bool rpoDelayIsSet() const;
    void unsetrpoDelay();
    void setRpoDelay(int64_t value);

    /// <summary>
    /// **参数解释**：  异常告警是否通知用户。  **约束限制**：  不涉及。  **取值范围**：  - true：通知用户 - false：不通知用户  **默认取值**：  false
    /// </summary>

    bool isAlarmToUser() const;
    bool alarmToUserIsSet() const;
    void unsetalarmToUser();
    void setAlarmToUser(bool value);

    /// <summary>
    /// **参数解释**：  收件方式与信息体列表，用于配置异常告警的通知渠道，最多填写两个，详情请参见SubscriptionInfo对象定义。  **约束限制**：  - 最多填写两个。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<SubscriptionInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<SubscriptionInfo>& value);


protected:
    int64_t delayTime_;
    bool delayTimeIsSet_;
    int64_t rtoDelay_;
    bool rtoDelayIsSet_;
    int64_t rpoDelay_;
    bool rpoDelayIsSet_;
    bool alarmToUser_;
    bool alarmToUserIsSet_;
    std::vector<SubscriptionInfo> subscriptions_;
    bool subscriptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_AlarmNotifyInfo_H_
