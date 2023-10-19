

#include "huaweicloud/cfw/v1/model/DeleteDomainDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteDomainDto::DeleteDomainDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    domainSetId_ = "";
    domainSetIdIsSet_ = false;
    domainAddressIdsIsSet_ = false;
}

DeleteDomainDto::~DeleteDomainDto() = default;

void DeleteDomainDto::validate()
{
}

web::json::value DeleteDomainDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(domainSetIdIsSet_) {
        val[utility::conversions::to_string_t("domain_set_id")] = ModelBase::toJson(domainSetId_);
    }
    if(domainAddressIdsIsSet_) {
        val[utility::conversions::to_string_t("domain_address_ids")] = ModelBase::toJson(domainAddressIds_);
    }

    return val;
}
bool DeleteDomainDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_address_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_address_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAddressIds(refVal);
        }
    }
    return ok;
}


std::string DeleteDomainDto::getObjectId() const
{
    return objectId_;
}

void DeleteDomainDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DeleteDomainDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DeleteDomainDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string DeleteDomainDto::getDomainSetId() const
{
    return domainSetId_;
}

void DeleteDomainDto::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool DeleteDomainDto::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void DeleteDomainDto::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::vector<std::string>& DeleteDomainDto::getDomainAddressIds()
{
    return domainAddressIds_;
}

void DeleteDomainDto::setDomainAddressIds(const std::vector<std::string>& value)
{
    domainAddressIds_ = value;
    domainAddressIdsIsSet_ = true;
}

bool DeleteDomainDto::domainAddressIdsIsSet() const
{
    return domainAddressIdsIsSet_;
}

void DeleteDomainDto::unsetdomainAddressIds()
{
    domainAddressIdsIsSet_ = false;
}

}
}
}
}
}


