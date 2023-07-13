

#include "huaweicloud/cdn/v1/model/UrlAuthGetBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UrlAuthGetBody::UrlAuthGetBody()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    timeFormat_ = "";
    timeFormatIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
}

UrlAuthGetBody::~UrlAuthGetBody() = default;

void UrlAuthGetBody::validate()
{
}

web::json::value UrlAuthGetBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(timeFormatIsSet_) {
        val[utility::conversions::to_string_t("time_format")] = ModelBase::toJson(timeFormat_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}

bool UrlAuthGetBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}

std::string UrlAuthGetBody::getStatus() const
{
    return status_;
}

void UrlAuthGetBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UrlAuthGetBody::statusIsSet() const
{
    return statusIsSet_;
}

void UrlAuthGetBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UrlAuthGetBody::getType() const
{
    return type_;
}

void UrlAuthGetBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UrlAuthGetBody::typeIsSet() const
{
    return typeIsSet_;
}

void UrlAuthGetBody::unsettype()
{
    typeIsSet_ = false;
}

std::string UrlAuthGetBody::getTimeFormat() const
{
    return timeFormat_;
}

void UrlAuthGetBody::setTimeFormat(const std::string& value)
{
    timeFormat_ = value;
    timeFormatIsSet_ = true;
}

bool UrlAuthGetBody::timeFormatIsSet() const
{
    return timeFormatIsSet_;
}

void UrlAuthGetBody::unsettimeFormat()
{
    timeFormatIsSet_ = false;
}

int32_t UrlAuthGetBody::getExpireTime() const
{
    return expireTime_;
}

void UrlAuthGetBody::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UrlAuthGetBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UrlAuthGetBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


