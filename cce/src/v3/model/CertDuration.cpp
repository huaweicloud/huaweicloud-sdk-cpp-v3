

#include "huaweicloud/cce/v3/model/CertDuration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CertDuration::CertDuration()
{
    duration_ = 0;
    durationIsSet_ = false;
}

CertDuration::~CertDuration() = default;

void CertDuration::validate()
{
}

web::json::value CertDuration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool CertDuration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


int32_t CertDuration::getDuration() const
{
    return duration_;
}

void CertDuration::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CertDuration::durationIsSet() const
{
    return durationIsSet_;
}

void CertDuration::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


