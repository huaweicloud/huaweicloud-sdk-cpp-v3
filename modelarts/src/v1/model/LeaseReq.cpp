

#include "huaweicloud/modelarts/v1/model/LeaseReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LeaseReq::LeaseReq()
{
    duration_ = 0L;
    durationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

LeaseReq::~LeaseReq() = default;

void LeaseReq::validate()
{
}

web::json::value LeaseReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool LeaseReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int64_t LeaseReq::getDuration() const
{
    return duration_;
}

void LeaseReq::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool LeaseReq::durationIsSet() const
{
    return durationIsSet_;
}

void LeaseReq::unsetduration()
{
    durationIsSet_ = false;
}

std::string LeaseReq::getType() const
{
    return type_;
}

void LeaseReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LeaseReq::typeIsSet() const
{
    return typeIsSet_;
}

void LeaseReq::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


