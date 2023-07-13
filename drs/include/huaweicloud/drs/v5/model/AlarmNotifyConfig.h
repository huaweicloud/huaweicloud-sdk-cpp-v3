
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AlarmNotifyConfig_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AlarmNotifyConfig_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 异常通知信息设置信息体。配置该参数时，代表当任务状态异常时，系统将发送通知给指定的SMN Topic。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AlarmNotifyConfig
    : public ModelBase
{
public:
    AlarmNotifyConfig();
    virtual ~AlarmNotifyConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AlarmNotifyConfig members

    /// <summary>
    /// 异常告警是否通知用户。
    /// </summary>

    bool isAlarmToUser() const;
    bool alarmToUserIsSet() const;
    void unsetalarmToUser();
    void setAlarmToUser(bool value);

    /// <summary>
    /// SMN主题URN。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 时延阈值(单位为s)。取值： - 最小值：1 - 最大值：3600 - 缺省值：0 - 说明： 1.源数据库和目标数据库之间的同步有时会存在一个时间差，称为时延，单位为秒。 2.时延阈值设置是指时延超过一定的值并持续6分钟后，DRS可以发送通知给指定收件人。（初次进入增量迁移阶段，会有较多数据等待同步，存在较大的时延，属于正常情况，不在此功能的监控范围之内。） 3.只有全量+增量的任务支持此选项。
    /// </summary>

    int64_t getDelayTime() const;
    bool delayTimeIsSet() const;
    void unsetdelayTime();
    void setDelayTime(int64_t value);

    /// <summary>
    /// RPO时延阈值(单位为s)。取值： - 最小值：1 - 最大值：3600 - 缺省值：0 - 说明： RPO时延阈值设置是业务数据库与DRS实例间同步的时延超过一定的值并持续6分钟后，DRS可以发送通知给指定收件人。（初次进入增量灾备阶段，会有较多数据等待同步，存在较大的时延，属于正常情况，不在此功能的监控范围之内。）
    /// </summary>

    int64_t getRpoDelay() const;
    bool rpoDelayIsSet() const;
    void unsetrpoDelay();
    void setRpoDelay(int64_t value);

    /// <summary>
    /// RTO时延阈值(s)。取值： - 最小值：1 - 最大值：3600 - 缺省值：0 - 说明： RTO时延阈值设置是DRS实例与灾备数据库间同步的时延超过一定的值并持续6分钟后，DRS可以发送通知给指定收件人。
    /// </summary>

    int64_t getRtoDelay() const;
    bool rtoDelayIsSet() const;
    void unsetrtoDelay();
    void setRtoDelay(int64_t value);


protected:
    bool alarmToUser_;
    bool alarmToUserIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    int64_t delayTime_;
    bool delayTimeIsSet_;
    int64_t rpoDelay_;
    bool rpoDelayIsSet_;
    int64_t rtoDelay_;
    bool rtoDelayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AlarmNotifyConfig_H_
