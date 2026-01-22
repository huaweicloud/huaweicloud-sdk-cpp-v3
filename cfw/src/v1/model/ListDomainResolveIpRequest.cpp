

#include "huaweicloud/cfw/v1/model/ListDomainResolveIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainResolveIpRequest::ListDomainResolveIpRequest()
{
    addressType_ = "";
    addressTypeIsSet_ = false;
    domainAddressId_ = "";
    domainAddressIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListDomainResolveIpRequest::~ListDomainResolveIpRequest() = default;

void ListDomainResolveIpRequest::validate()
{
}

web::json::value ListDomainResolveIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(domainAddressIdIsSet_) {
        val[utility::conversions::to_string_t("domain_address_id")] = ModelBase::toJson(domainAddressId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListDomainResolveIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_address_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_address_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAddressId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListDomainResolveIpRequest::getAddressType() const
{
    return addressType_;
}

void ListDomainResolveIpRequest::setAddressType(const std::string& value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListDomainResolveIpRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListDomainResolveIpRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListDomainResolveIpRequest::getDomainAddressId() const
{
    return domainAddressId_;
}

void ListDomainResolveIpRequest::setDomainAddressId(const std::string& value)
{
    domainAddressId_ = value;
    domainAddressIdIsSet_ = true;
}

bool ListDomainResolveIpRequest::domainAddressIdIsSet() const
{
    return domainAddressIdIsSet_;
}

void ListDomainResolveIpRequest::unsetdomainAddressId()
{
    domainAddressIdIsSet_ = false;
}

std::string ListDomainResolveIpRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListDomainResolveIpRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListDomainResolveIpRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListDomainResolveIpRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


