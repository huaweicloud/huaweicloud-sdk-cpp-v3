

#include "huaweicloud/cfw/v1/model/ListDomainParseDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainParseDetailRequest::ListDomainParseDetailRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
}

ListDomainParseDetailRequest::~ListDomainParseDetailRequest() = default;

void ListDomainParseDetailRequest::validate()
{
}

web::json::value ListDomainParseDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }

    return val;
}
bool ListDomainParseDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
        }
    }
    return ok;
}


std::string ListDomainParseDetailRequest::getDomainName() const
{
    return domainName_;
}

void ListDomainParseDetailRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListDomainParseDetailRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListDomainParseDetailRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListDomainParseDetailRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainParseDetailRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainParseDetailRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainParseDetailRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListDomainParseDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListDomainParseDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListDomainParseDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListDomainParseDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListDomainParseDetailRequest::getAddressType() const
{
    return addressType_;
}

void ListDomainParseDetailRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListDomainParseDetailRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListDomainParseDetailRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

}
}
}
}
}


