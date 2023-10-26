
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyLog_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyLog_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP异常事件响应体
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  DailyLog
    : public ModelBase
{
public:
    DailyLog();
    virtual ~DailyLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DailyLog members

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 防护状态，可选范围： - 1：表示清洗 - 2：表示黑洞
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 触发时流量
    /// </summary>

    int32_t getTriggerBps() const;
    bool triggerBpsIsSet() const;
    void unsettriggerBps();
    void setTriggerBps(int32_t value);

    /// <summary>
    /// 触发时报文速率
    /// </summary>

    int32_t getTriggerPps() const;
    bool triggerPpsIsSet() const;
    void unsettriggerPps();
    void setTriggerPps(int32_t value);

    /// <summary>
    /// 触发时HTTP请求速率
    /// </summary>

    int32_t getTriggerHttpPps() const;
    bool triggerHttpPpsIsSet() const;
    void unsettriggerHttpPps();
    void setTriggerHttpPps(int32_t value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t triggerBps_;
    bool triggerBpsIsSet_;
    int32_t triggerPps_;
    bool triggerPpsIsSet_;
    int32_t triggerHttpPps_;
    bool triggerHttpPpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DailyLog_H_
