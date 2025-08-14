

#include "huaweicloud/identitycenter/v1/model/ResponseConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResponseConfigDto::ResponseConfigDto()
{
    propertiesIsSet_ = false;
    subjectIsSet_ = false;
    relayState_ = "";
    relayStateIsSet_ = false;
    ttl_ = "";
    ttlIsSet_ = false;
}

ResponseConfigDto::~ResponseConfigDto() = default;

void ResponseConfigDto::validate()
{
}

web::json::value ResponseConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(relayStateIsSet_) {
        val[utility::conversions::to_string_t("relay_state")] = ModelBase::toJson(relayState_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }

    return val;
}
bool ResponseConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ResponseSourceDetailsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            ResponseSourceDetailsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relay_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relay_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelayState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    return ok;
}


std::map<std::string, ResponseSourceDetailsDto>& ResponseConfigDto::getProperties()
{
    return properties_;
}

void ResponseConfigDto::setProperties(const std::map<std::string, ResponseSourceDetailsDto>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ResponseConfigDto::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ResponseConfigDto::unsetproperties()
{
    propertiesIsSet_ = false;
}

ResponseSourceDetailsDto ResponseConfigDto::getSubject() const
{
    return subject_;
}

void ResponseConfigDto::setSubject(const ResponseSourceDetailsDto& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ResponseConfigDto::subjectIsSet() const
{
    return subjectIsSet_;
}

void ResponseConfigDto::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ResponseConfigDto::getRelayState() const
{
    return relayState_;
}

void ResponseConfigDto::setRelayState(const std::string& value)
{
    relayState_ = value;
    relayStateIsSet_ = true;
}

bool ResponseConfigDto::relayStateIsSet() const
{
    return relayStateIsSet_;
}

void ResponseConfigDto::unsetrelayState()
{
    relayStateIsSet_ = false;
}

std::string ResponseConfigDto::getTtl() const
{
    return ttl_;
}

void ResponseConfigDto::setTtl(const std::string& value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool ResponseConfigDto::ttlIsSet() const
{
    return ttlIsSet_;
}

void ResponseConfigDto::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}


