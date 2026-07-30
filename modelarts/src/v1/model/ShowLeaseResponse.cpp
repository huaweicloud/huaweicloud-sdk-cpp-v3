

#include "huaweicloud/modelarts/v1/model/ShowLeaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowLeaseResponse::ShowLeaseResponse()
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

ShowLeaseResponse::~ShowLeaseResponse() = default;

void ShowLeaseResponse::validate()
{
}

web::json::value ShowLeaseResponse::toJson() const
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
bool ShowLeaseResponse::fromJson(const web::json::value& val)
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


int64_t ShowLeaseResponse::getCreateAt() const
{
    return createAt_;
}

void ShowLeaseResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowLeaseResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowLeaseResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ShowLeaseResponse::getDuration() const
{
    return duration_;
}

void ShowLeaseResponse::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowLeaseResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowLeaseResponse::unsetduration()
{
    durationIsSet_ = false;
}

bool ShowLeaseResponse::isEnable() const
{
    return enable_;
}

void ShowLeaseResponse::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ShowLeaseResponse::enableIsSet() const
{
    return enableIsSet_;
}

void ShowLeaseResponse::unsetenable()
{
    enableIsSet_ = false;
}

std::string ShowLeaseResponse::getType() const
{
    return type_;
}

void ShowLeaseResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowLeaseResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowLeaseResponse::unsettype()
{
    typeIsSet_ = false;
}

int64_t ShowLeaseResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowLeaseResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowLeaseResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowLeaseResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


