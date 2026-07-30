

#include "huaweicloud/modelarts/v1/model/Lease.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Lease::Lease()
{
    createAt_ = 0L;
    createAtIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

Lease::~Lease() = default;

void Lease::validate()
{
}

web::json::value Lease::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool Lease::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


int64_t Lease::getCreateAt() const
{
    return createAt_;
}

void Lease::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool Lease::createAtIsSet() const
{
    return createAtIsSet_;
}

void Lease::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t Lease::getDuration() const
{
    return duration_;
}

void Lease::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool Lease::durationIsSet() const
{
    return durationIsSet_;
}

void Lease::unsetduration()
{
    durationIsSet_ = false;
}

bool Lease::isEnable() const
{
    return enable_;
}

void Lease::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool Lease::enableIsSet() const
{
    return enableIsSet_;
}

void Lease::unsetenable()
{
    enableIsSet_ = false;
}

std::string Lease::getType() const
{
    return type_;
}

void Lease::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Lease::typeIsSet() const
{
    return typeIsSet_;
}

void Lease::unsettype()
{
    typeIsSet_ = false;
}

int64_t Lease::getUpdateAt() const
{
    return updateAt_;
}

void Lease::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool Lease::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void Lease::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


