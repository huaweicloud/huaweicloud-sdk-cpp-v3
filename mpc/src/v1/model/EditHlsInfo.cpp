

#include "huaweicloud/mpc/v1/model/EditHlsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EditHlsInfo::EditHlsInfo()
{
    interval_ = 0;
    intervalIsSet_ = false;
}

EditHlsInfo::~EditHlsInfo() = default;

void EditHlsInfo::validate()
{
}

web::json::value EditHlsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}
bool EditHlsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}


int32_t EditHlsInfo::getInterval() const
{
    return interval_;
}

void EditHlsInfo::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool EditHlsInfo::intervalIsSet() const
{
    return intervalIsSet_;
}

void EditHlsInfo::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


