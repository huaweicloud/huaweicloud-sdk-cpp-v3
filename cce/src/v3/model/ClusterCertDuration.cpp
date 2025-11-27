

#include "huaweicloud/cce/v3/model/ClusterCertDuration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterCertDuration::ClusterCertDuration()
{
    duration_ = 0;
    durationIsSet_ = false;
    expireAt_ = "";
    expireAtIsSet_ = false;
}

ClusterCertDuration::~ClusterCertDuration() = default;

void ClusterCertDuration::validate()
{
}

web::json::value ClusterCertDuration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(expireAtIsSet_) {
        val[utility::conversions::to_string_t("expire_at")] = ModelBase::toJson(expireAt_);
    }

    return val;
}
bool ClusterCertDuration::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expire_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireAt(refVal);
        }
    }
    return ok;
}


int32_t ClusterCertDuration::getDuration() const
{
    return duration_;
}

void ClusterCertDuration::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ClusterCertDuration::durationIsSet() const
{
    return durationIsSet_;
}

void ClusterCertDuration::unsetduration()
{
    durationIsSet_ = false;
}

std::string ClusterCertDuration::getExpireAt() const
{
    return expireAt_;
}

void ClusterCertDuration::setExpireAt(const std::string& value)
{
    expireAt_ = value;
    expireAtIsSet_ = true;
}

bool ClusterCertDuration::expireAtIsSet() const
{
    return expireAtIsSet_;
}

void ClusterCertDuration::unsetexpireAt()
{
    expireAtIsSet_ = false;
}

}
}
}
}
}


