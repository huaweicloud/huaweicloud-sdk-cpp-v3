
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Frequency_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Frequency_H_

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
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Frequency
    : public ModelBase
{
public:
    Frequency();
    virtual ~Frequency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Frequency members

    /// <summary>
    /// 时间类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 当字段type为\&quot;CRON\&quot;时取该字段
    /// </summary>

    std::string getCronExpr() const;
    bool cronExprIsSet() const;
    void unsetcronExpr();
    void setCronExpr(const std::string& value);

    /// <summary>
    /// 当字段type为\&quot;DAILY\&quot;或者\&quot;WEEKLY\&quot;时取该字段
    /// </summary>

    int32_t getHourOfDay() const;
    bool hourOfDayIsSet() const;
    void unsethourOfDay();
    void setHourOfDay(int32_t value);

    /// <summary>
    /// 当字段type为\&quot;WEEKLY\&quot;时取该字段(周日~周六)
    /// </summary>

    int32_t getDayOfWeek() const;
    bool dayOfWeekIsSet() const;
    void unsetdayOfWeek();
    void setDayOfWeek(int32_t value);

    /// <summary>
    /// 当字段type为\&quot;FIXED_RATE\&quot;时取该字段(当fixed_rate_unit单位为minute，最大值60;当fixed_rate_unit单位为hour，最大值24)
    /// </summary>

    int32_t getFixedRate() const;
    bool fixedRateIsSet() const;
    void unsetfixedRate();
    void setFixedRate(int32_t value);

    /// <summary>
    /// 时间单位
    /// </summary>

    std::string getFixedRateUnit() const;
    bool fixedRateUnitIsSet() const;
    void unsetfixedRateUnit();
    void setFixedRateUnit(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string cronExpr_;
    bool cronExprIsSet_;
    int32_t hourOfDay_;
    bool hourOfDayIsSet_;
    int32_t dayOfWeek_;
    bool dayOfWeekIsSet_;
    int32_t fixedRate_;
    bool fixedRateIsSet_;
    std::string fixedRateUnit_;
    bool fixedRateUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Frequency_H_
