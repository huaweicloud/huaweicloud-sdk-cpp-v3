

#include "huaweicloud/drs/v5/model/SmnTopicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SmnTopicInfo::SmnTopicInfo()
{
    name_ = "";
    nameIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    pushPolicy_ = "";
    pushPolicyIsSet_ = false;
}

SmnTopicInfo::~SmnTopicInfo() = default;

void SmnTopicInfo::validate()
{
}

web::json::value SmnTopicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(pushPolicyIsSet_) {
        val[utility::conversions::to_string_t("push_policy")] = ModelBase::toJson(pushPolicy_);
    }

    return val;
}
bool SmnTopicInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("push_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushPolicy(refVal);
        }
    }
    return ok;
}


std::string SmnTopicInfo::getName() const
{
    return name_;
}

void SmnTopicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SmnTopicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void SmnTopicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string SmnTopicInfo::getUrn() const
{
    return urn_;
}

void SmnTopicInfo::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool SmnTopicInfo::urnIsSet() const
{
    return urnIsSet_;
}

void SmnTopicInfo::unseturn()
{
    urnIsSet_ = false;
}

std::string SmnTopicInfo::getDescription() const
{
    return description_;
}

void SmnTopicInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SmnTopicInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SmnTopicInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SmnTopicInfo::getPushPolicy() const
{
    return pushPolicy_;
}

void SmnTopicInfo::setPushPolicy(const std::string& value)
{
    pushPolicy_ = value;
    pushPolicyIsSet_ = true;
}

bool SmnTopicInfo::pushPolicyIsSet() const
{
    return pushPolicyIsSet_;
}

void SmnTopicInfo::unsetpushPolicy()
{
    pushPolicyIsSet_ = false;
}

}
}
}
}
}


