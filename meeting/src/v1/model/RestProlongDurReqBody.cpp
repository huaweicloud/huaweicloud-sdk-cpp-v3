

#include "huaweicloud/meeting/v1/model/RestProlongDurReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestProlongDurReqBody::RestProlongDurReqBody()
{
    auto_ = 0;
    autoIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
}

RestProlongDurReqBody::~RestProlongDurReqBody() = default;

void RestProlongDurReqBody::validate()
{
}

web::json::value RestProlongDurReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoIsSet_) {
        val[utility::conversions::to_string_t("auto")] = ModelBase::toJson(auto_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool RestProlongDurReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuto(refVal);
        }
    }
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


int32_t RestProlongDurReqBody::getAuto() const
{
    return auto_;
}

void RestProlongDurReqBody::setAuto(int32_t value)
{
    auto_ = value;
    autoIsSet_ = true;
}

bool RestProlongDurReqBody::autoIsSet() const
{
    return autoIsSet_;
}

void RestProlongDurReqBody::unsetauto()
{
    autoIsSet_ = false;
}

int32_t RestProlongDurReqBody::getDuration() const
{
    return duration_;
}

void RestProlongDurReqBody::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RestProlongDurReqBody::durationIsSet() const
{
    return durationIsSet_;
}

void RestProlongDurReqBody::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


