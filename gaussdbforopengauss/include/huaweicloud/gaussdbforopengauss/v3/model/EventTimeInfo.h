
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EventTimeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EventTimeInfo_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/TopEventInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  EventTimeInfo
    : public ModelBase
{
public:
    EventTimeInfo();
    virtual ~EventTimeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventTimeInfo members

    /// <summary>
    /// **参数解释**: TOP5事件耗时信息列表。
    /// </summary>

    std::vector<TopEventInfoResult>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<TopEventInfoResult>& value);

    /// <summary>
    /// **参数解释**: 其余事件耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLeftTime() const;
    bool leftTimeIsSet() const;
    void unsetleftTime();
    void setLeftTime(int64_t value);

    /// <summary>
    /// **参数解释**: 事件外耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getOtherTime() const;
    bool otherTimeIsSet() const;
    void unsetotherTime();
    void setOtherTime(int64_t value);


protected:
    std::vector<TopEventInfoResult> events_;
    bool eventsIsSet_;
    int64_t leftTime_;
    bool leftTimeIsSet_;
    int64_t otherTime_;
    bool otherTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EventTimeInfo_H_
