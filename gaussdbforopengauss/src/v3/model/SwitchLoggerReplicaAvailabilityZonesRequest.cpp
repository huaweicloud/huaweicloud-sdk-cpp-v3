

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchLoggerReplicaAvailabilityZonesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchLoggerReplicaAvailabilityZonesRequest::SwitchLoggerReplicaAvailabilityZonesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SwitchLoggerReplicaAvailabilityZonesRequest::~SwitchLoggerReplicaAvailabilityZonesRequest() = default;

void SwitchLoggerReplicaAvailabilityZonesRequest::validate()
{
}

web::json::value SwitchLoggerReplicaAvailabilityZonesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SwitchLoggerReplicaAvailabilityZonesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string SwitchLoggerReplicaAvailabilityZonesRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchLoggerReplicaAvailabilityZonesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchLoggerReplicaAvailabilityZonesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchLoggerReplicaAvailabilityZonesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchLoggerReplicaAvailabilityZonesRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchLoggerReplicaAvailabilityZonesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchLoggerReplicaAvailabilityZonesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchLoggerReplicaAvailabilityZonesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


