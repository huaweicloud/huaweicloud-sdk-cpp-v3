

#include "huaweicloud/cfw/v1/model/ListDomainParseIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainParseIpRequest::ListDomainParseIpRequest()
{
    addressType_ = 0;
    addressTypeIsSet_ = false;
    domainAddressId_ = "";
    domainAddressIdIsSet_ = false;
    domainSetId_ = "";
    domainSetIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListDomainParseIpRequest::~ListDomainParseIpRequest() = default;

void ListDomainParseIpRequest::validate()
{
}

web::json::value ListDomainParseIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(domainAddressIdIsSet_) {
        val[utility::conversions::to_string_t("domain_address_id")] = ModelBase::toJson(domainAddressId_);
    }
    if(domainSetIdIsSet_) {
        val[utility::conversions::to_string_t("domain_set_id")] = ModelBase::toJson(domainSetId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListDomainParseIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("domain_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


int32_t ListDomainParseIpRequest::getAddressType() const
{
    return addressType_;
}

void ListDomainParseIpRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListDomainParseIpRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListDomainParseIpRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListDomainParseIpRequest::getDomainAddressId() const
{
    return domainAddressId_;
}

void ListDomainParseIpRequest::setDomainAddressId(const std::string& value)
{
    domainAddressId_ = value;
    domainAddressIdIsSet_ = true;
}

bool ListDomainParseIpRequest::domainAddressIdIsSet() const
{
    return domainAddressIdIsSet_;
}

void ListDomainParseIpRequest::unsetdomainAddressId()
{
    domainAddressIdIsSet_ = false;
}

std::string ListDomainParseIpRequest::getDomainSetId() const
{
    return domainSetId_;
}

void ListDomainParseIpRequest::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool ListDomainParseIpRequest::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void ListDomainParseIpRequest::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string ListDomainParseIpRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListDomainParseIpRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListDomainParseIpRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListDomainParseIpRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListDomainParseIpRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainParseIpRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainParseIpRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainParseIpRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


