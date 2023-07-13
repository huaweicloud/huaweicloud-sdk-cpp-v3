
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerPropertiesResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerPropertiesResp_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyTriggerPropertiesResp
    : public ModelBase
{
public:
    PolicyTriggerPropertiesResp();
    virtual ~PolicyTriggerPropertiesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PolicyTriggerPropertiesResp members

    /// <summary>
    /// 调度规则。限制24条规则。调度器的调度规则，可参照iCalendar RFC 2445规范中的事件规则，但仅支持FREQ、BYDAY、BYHOUR、BYMINUTE、INTERVAL等参数，其中FREQ仅支持WEEKLY和DAILY，BYDAY支持一周七天（MO、TU、WE、TH、FR、SA、SU），BYHOUR支持0-23小时，BYMINUTE支持0-59分钟，并且间隔不能小于一小时，一天最大24个时间点。例如，周一到周天，每天UTC时间的14:00调度，其规则为：&#39;FREQ&#x3D;WEEKLY;BYDAY&#x3D;MO,TU,WE,TH,FR,SA,SU;BYHOUR&#x3D;14;BYMINUTE&#x3D;00&#39;。例如：某个地区的时间为 UTC+8，若在该地区每天14:00调度，则在14点基础上减8，其规则为&#39;FREQ&#x3D;DAILY;INTERVAL&#x3D;1;BYHOUR&#x3D;6;BYMINUTE&#x3D;00&#39;。
    /// </summary>

    std::vector<std::string>& getPattern();
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::vector<std::string>& value);

    /// <summary>
    /// 调度器开始时间，例如：\&quot;2020-01-08 09:59:49\&quot;
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::vector<std::string> pattern_;
    bool patternIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerPropertiesResp_H_
