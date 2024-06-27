

#include "huaweicloud/cfw/v1/model/ListDomainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainsRequest::ListDomainsRequest()
{
    domainSetId_ = "";
    domainSetIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

ListDomainsRequest::~ListDomainsRequest() = default;

void ListDomainsRequest::validate()
{
}

web::json::value ListDomainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainSetIdIsSet_) {
        val[utility::conversions::to_string_t("domain_set_id")] = ModelBase::toJson(domainSetId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_Id")] = ModelBase::toJson(objectId_);
    }

    return val;
}
bool ListDomainsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    return ok;
}


std::string ListDomainsRequest::getDomainSetId() const
{
    return domainSetId_;
}

void ListDomainsRequest::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool ListDomainsRequest::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void ListDomainsRequest::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string ListDomainsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListDomainsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListDomainsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListDomainsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListDomainsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListDomainsRequest::getLimit() const
{
    return limit_;
}

void ListDomainsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDomainsRequest::getOffset() const
{
    return offset_;
}

void ListDomainsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDomainsRequest::getDomainName() const
{
    return domainName_;
}

void ListDomainsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListDomainsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListDomainsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListDomainsRequest::getObjectId() const
{
    return objectId_;
}

void ListDomainsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListDomainsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListDomainsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


