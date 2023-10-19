

#include "huaweicloud/cfw/v1/model/UpdateDomainSetInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDomainSetInfoDto::UpdateDomainSetInfoDto()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
    domainSetType_ = 0;
    domainSetTypeIsSet_ = false;
}

UpdateDomainSetInfoDto::~UpdateDomainSetInfoDto() = default;

void UpdateDomainSetInfoDto::validate()
{
}

web::json::value UpdateDomainSetInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(domainSetTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_set_type")] = ModelBase::toJson(domainSetType_);
    }

    return val;
}
bool UpdateDomainSetInfoDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetType(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainSetInfoDto::getName() const
{
    return name_;
}

void UpdateDomainSetInfoDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDomainSetInfoDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDomainSetInfoDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDomainSetInfoDto::getDescription() const
{
    return description_;
}

void UpdateDomainSetInfoDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDomainSetInfoDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDomainSetInfoDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateDomainSetInfoDto::getSetId() const
{
    return setId_;
}

void UpdateDomainSetInfoDto::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateDomainSetInfoDto::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateDomainSetInfoDto::unsetsetId()
{
    setIdIsSet_ = false;
}

int32_t UpdateDomainSetInfoDto::getDomainSetType() const
{
    return domainSetType_;
}

void UpdateDomainSetInfoDto::setDomainSetType(int32_t value)
{
    domainSetType_ = value;
    domainSetTypeIsSet_ = true;
}

bool UpdateDomainSetInfoDto::domainSetTypeIsSet() const
{
    return domainSetTypeIsSet_;
}

void UpdateDomainSetInfoDto::unsetdomainSetType()
{
    domainSetTypeIsSet_ = false;
}

}
}
}
}
}


