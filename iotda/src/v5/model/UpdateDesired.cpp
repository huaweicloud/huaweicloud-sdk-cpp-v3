

#include "huaweicloud/iotda/v5/model/UpdateDesired.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDesired::UpdateDesired()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    desiredIsSet_ = false;
    version_ = 0L;
    versionIsSet_ = false;
}

UpdateDesired::~UpdateDesired() = default;

void UpdateDesired::validate()
{
}

web::json::value UpdateDesired::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(desiredIsSet_) {
        val[utility::conversions::to_string_t("desired")] = ModelBase::toJson(desired_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool UpdateDesired::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desired"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string UpdateDesired::getServiceId() const
{
    return serviceId_;
}

void UpdateDesired::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateDesired::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateDesired::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

Object UpdateDesired::getDesired() const
{
    return desired_;
}

void UpdateDesired::setDesired(const Object& value)
{
    desired_ = value;
    desiredIsSet_ = true;
}

bool UpdateDesired::desiredIsSet() const
{
    return desiredIsSet_;
}

void UpdateDesired::unsetdesired()
{
    desiredIsSet_ = false;
}

int64_t UpdateDesired::getVersion() const
{
    return version_;
}

void UpdateDesired::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateDesired::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateDesired::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


