

#include "huaweicloud/iotda/v5/model/DeviceShadowData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceShadowData::DeviceShadowData()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    desiredIsSet_ = false;
    reportedIsSet_ = false;
    version_ = 0L;
    versionIsSet_ = false;
}

DeviceShadowData::~DeviceShadowData() = default;

void DeviceShadowData::validate()
{
}

web::json::value DeviceShadowData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(desiredIsSet_) {
        val[utility::conversions::to_string_t("desired")] = ModelBase::toJson(desired_);
    }
    if(reportedIsSet_) {
        val[utility::conversions::to_string_t("reported")] = ModelBase::toJson(reported_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool DeviceShadowData::fromJson(const web::json::value& val)
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
            DeviceShadowProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reported"));
        if(!fieldValue.is_null())
        {
            DeviceShadowProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReported(refVal);
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


std::string DeviceShadowData::getServiceId() const
{
    return serviceId_;
}

void DeviceShadowData::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool DeviceShadowData::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void DeviceShadowData::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

DeviceShadowProperties DeviceShadowData::getDesired() const
{
    return desired_;
}

void DeviceShadowData::setDesired(const DeviceShadowProperties& value)
{
    desired_ = value;
    desiredIsSet_ = true;
}

bool DeviceShadowData::desiredIsSet() const
{
    return desiredIsSet_;
}

void DeviceShadowData::unsetdesired()
{
    desiredIsSet_ = false;
}

DeviceShadowProperties DeviceShadowData::getReported() const
{
    return reported_;
}

void DeviceShadowData::setReported(const DeviceShadowProperties& value)
{
    reported_ = value;
    reportedIsSet_ = true;
}

bool DeviceShadowData::reportedIsSet() const
{
    return reportedIsSet_;
}

void DeviceShadowData::unsetreported()
{
    reportedIsSet_ = false;
}

int64_t DeviceShadowData::getVersion() const
{
    return version_;
}

void DeviceShadowData::setVersion(int64_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeviceShadowData::versionIsSet() const
{
    return versionIsSet_;
}

void DeviceShadowData::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


