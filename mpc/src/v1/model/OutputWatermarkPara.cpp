

#include "huaweicloud/mpc/v1/model/OutputWatermarkPara.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputWatermarkPara::OutputWatermarkPara()
{
    timeDuration_ = 0;
    timeDurationIsSet_ = false;
}

OutputWatermarkPara::~OutputWatermarkPara() = default;

void OutputWatermarkPara::validate()
{
}

web::json::value OutputWatermarkPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeDurationIsSet_) {
        val[utility::conversions::to_string_t("time_duration")] = ModelBase::toJson(timeDuration_);
    }

    return val;
}

bool OutputWatermarkPara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeDuration(refVal);
        }
    }
    return ok;
}

int32_t OutputWatermarkPara::getTimeDuration() const
{
    return timeDuration_;
}

void OutputWatermarkPara::setTimeDuration(int32_t value)
{
    timeDuration_ = value;
    timeDurationIsSet_ = true;
}

bool OutputWatermarkPara::timeDurationIsSet() const
{
    return timeDurationIsSet_;
}

void OutputWatermarkPara::unsettimeDuration()
{
    timeDurationIsSet_ = false;
}

}
}
}
}
}


