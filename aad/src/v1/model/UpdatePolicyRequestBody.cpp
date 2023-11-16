

#include "huaweicloud/aad/v1/model/UpdatePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePolicyRequestBody::UpdatePolicyRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    udp_ = "";
    udpIsSet_ = false;
}

UpdatePolicyRequestBody::~UpdatePolicyRequestBody() = default;

void UpdatePolicyRequestBody::validate()
{
}

web::json::value UpdatePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(udpIsSet_) {
        val[utility::conversions::to_string_t("udp")] = ModelBase::toJson(udp_);
    }

    return val;
}
bool UpdatePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("udp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("udp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUdp(refVal);
        }
    }
    return ok;
}


std::string UpdatePolicyRequestBody::getName() const
{
    return name_;
}

void UpdatePolicyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePolicyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePolicyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdatePolicyRequestBody::getThreshold() const
{
    return threshold_;
}

void UpdatePolicyRequestBody::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool UpdatePolicyRequestBody::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void UpdatePolicyRequestBody::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getDescription() const
{
    return description_;
}

void UpdatePolicyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdatePolicyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdatePolicyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdatePolicyRequestBody::getUdp() const
{
    return udp_;
}

void UpdatePolicyRequestBody::setUdp(const std::string& value)
{
    udp_ = value;
    udpIsSet_ = true;
}

bool UpdatePolicyRequestBody::udpIsSet() const
{
    return udpIsSet_;
}

void UpdatePolicyRequestBody::unsetudp()
{
    udpIsSet_ = false;
}

}
}
}
}
}


