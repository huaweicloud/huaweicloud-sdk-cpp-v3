

#include "huaweicloud/cfw/v1/model/AddDomainListDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddDomainListDto::AddDomainListDto()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    domainNamesIsSet_ = false;
}

AddDomainListDto::~AddDomainListDto() = default;

void AddDomainListDto::validate()
{
}

web::json::value AddDomainListDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }

    return val;
}
bool AddDomainListDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainSetInfoDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
        }
    }
    return ok;
}


std::string AddDomainListDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddDomainListDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddDomainListDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddDomainListDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string AddDomainListDto::getObjectId() const
{
    return objectId_;
}

void AddDomainListDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddDomainListDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddDomainListDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<DomainSetInfoDto>& AddDomainListDto::getDomainNames()
{
    return domainNames_;
}

void AddDomainListDto::setDomainNames(const std::vector<DomainSetInfoDto>& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool AddDomainListDto::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void AddDomainListDto::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

}
}
}
}
}


