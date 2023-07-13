
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetAlarmNotifyInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetAlarmNotifyInfo_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/SubscriptionInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改收件方式与信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchSetAlarmNotifyInfo
    : public ModelBase
{
public:
    BatchSetAlarmNotifyInfo();
    virtual ~BatchSetAlarmNotifyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchSetAlarmNotifyInfo members

    /// <summary>
    /// 手动输入手机号、邮箱模式时填写
    /// </summary>

    std::vector<SubscriptionInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<SubscriptionInfo>& value);

    /// <summary>
    /// 主题资源标识
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 订阅延迟时间
    /// </summary>

    int64_t getDelayTime() const;
    bool delayTimeIsSet() const;
    void unsetdelayTime();
    void setDelayTime(int64_t value);

    /// <summary>
    /// rto延迟时间
    /// </summary>

    int64_t getRtoDelay() const;
    bool rtoDelayIsSet() const;
    void unsetrtoDelay();
    void setRtoDelay(int64_t value);

    /// <summary>
    /// rpo延迟时间
    /// </summary>

    int64_t getRpoDelay() const;
    bool rpoDelayIsSet() const;
    void unsetrpoDelay();
    void setRpoDelay(int64_t value);

    /// <summary>
    /// 异常告警是否通知用户，不填默认为false
    /// </summary>

    bool isAlarmToUser() const;
    bool alarmToUserIsSet() const;
    void unsetalarmToUser();
    void setAlarmToUser(bool value);


protected:
    std::vector<SubscriptionInfo> subscriptions_;
    bool subscriptionsIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int64_t delayTime_;
    bool delayTimeIsSet_;
    int64_t rtoDelay_;
    bool rtoDelayIsSet_;
    int64_t rpoDelay_;
    bool rpoDelayIsSet_;
    bool alarmToUser_;
    bool alarmToUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetAlarmNotifyInfo_H_
