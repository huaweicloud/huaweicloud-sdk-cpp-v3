
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySmnInfoResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySmnInfoResp_H_

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
/// 已录入SMN信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QuerySmnInfoResp
    : public ModelBase
{
public:
    QuerySmnInfoResp();
    virtual ~QuerySmnInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuerySmnInfoResp members

    /// <summary>
    /// SMN信息
    /// </summary>

    std::vector<SubscriptionInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<SubscriptionInfo>& value);

    /// <summary>
    /// 主题名称
    /// </summary>

    std::string getTopicName() const;
    bool topicNameIsSet() const;
    void unsettopicName();
    void setTopicName(const std::string& value);

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
    /// 异常告警是否通知用户
    /// </summary>

    bool isAlarmToUser() const;
    bool alarmToUserIsSet() const;
    void unsetalarmToUser();
    void setAlarmToUser(bool value);


protected:
    std::vector<SubscriptionInfo> subscriptions_;
    bool subscriptionsIsSet_;
    std::string topicName_;
    bool topicNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySmnInfoResp_H_
