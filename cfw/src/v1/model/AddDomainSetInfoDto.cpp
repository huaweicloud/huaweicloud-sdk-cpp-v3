

#include "huaweicloud/cfw/v1/model/AddDomainSetInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddDomainSetInfoDto::AddDomainSetInfoDto()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    domainNamesIsSet_ = false;
    domainSetType_ = 0;
    domainSetTypeIsSet_ = false;
}

AddDomainSetInfoDto::~AddDomainSetInfoDto() = default;

void AddDomainSetInfoDto::validate()
{
}

web::json::value AddDomainSetInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(domainSetTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_set_type")] = ModelBase::toJson(domainSetType_);
    }

    return val;
}
bool AddDomainSetInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainSetInfoDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
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


std::string AddDomainSetInfoDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddDomainSetInfoDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddDomainSetInfoDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddDomainSetInfoDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string AddDomainSetInfoDto::getObjectId() const
{
    return objectId_;
}

void AddDomainSetInfoDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddDomainSetInfoDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddDomainSetInfoDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string AddDomainSetInfoDto::getName() const
{
    return name_;
}

void AddDomainSetInfoDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddDomainSetInfoDto::nameIsSet() const
{
    return nameIsSet_;
}

void AddDomainSetInfoDto::unsetname()
{
    nameIsSet_ = false;
}

std::string AddDomainSetInfoDto::getDescription() const
{
    return description_;
}

void AddDomainSetInfoDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDomainSetInfoDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDomainSetInfoDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<DomainSetInfoDto>& AddDomainSetInfoDto::getDomainNames()
{
    return domainNames_;
}

void AddDomainSetInfoDto::setDomainNames(const std::vector<DomainSetInfoDto>& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool AddDomainSetInfoDto::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void AddDomainSetInfoDto::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

int32_t AddDomainSetInfoDto::getDomainSetType() const
{
    return domainSetType_;
}

void AddDomainSetInfoDto::setDomainSetType(int32_t value)
{
    domainSetType_ = value;
    domainSetTypeIsSet_ = true;
}

bool AddDomainSetInfoDto::domainSetTypeIsSet() const
{
    return domainSetTypeIsSet_;
}

void AddDomainSetInfoDto::unsetdomainSetType()
{
    domainSetTypeIsSet_ = false;
}

}
}
}
}
}


