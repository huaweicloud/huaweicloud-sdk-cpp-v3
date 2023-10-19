

#include "huaweicloud/cfw/v1/model/ListDomainSetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainSetsRequest::ListDomainSetsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    domainSetType_ = 0;
    domainSetTypeIsSet_ = false;
    configStatus_ = 0;
    configStatusIsSet_ = false;
}

ListDomainSetsRequest::~ListDomainSetsRequest() = default;

void ListDomainSetsRequest::validate()
{
}

web::json::value ListDomainSetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(domainSetTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_set_type")] = ModelBase::toJson(domainSetType_);
    }
    if(configStatusIsSet_) {
        val[utility::conversions::to_string_t("config_status")] = ModelBase::toJson(configStatus_);
    }

    return val;
}
bool ListDomainSetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("config_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigStatus(refVal);
        }
    }
    return ok;
}


std::string ListDomainSetsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainSetsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainSetsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainSetsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListDomainSetsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListDomainSetsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListDomainSetsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListDomainSetsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListDomainSetsRequest::getLimit() const
{
    return limit_;
}

void ListDomainSetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainSetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainSetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDomainSetsRequest::getOffset() const
{
    return offset_;
}

void ListDomainSetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainSetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainSetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDomainSetsRequest::getObjectId() const
{
    return objectId_;
}

void ListDomainSetsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListDomainSetsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListDomainSetsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListDomainSetsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListDomainSetsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListDomainSetsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListDomainSetsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListDomainSetsRequest::getDomainSetType() const
{
    return domainSetType_;
}

void ListDomainSetsRequest::setDomainSetType(int32_t value)
{
    domainSetType_ = value;
    domainSetTypeIsSet_ = true;
}

bool ListDomainSetsRequest::domainSetTypeIsSet() const
{
    return domainSetTypeIsSet_;
}

void ListDomainSetsRequest::unsetdomainSetType()
{
    domainSetTypeIsSet_ = false;
}

int32_t ListDomainSetsRequest::getConfigStatus() const
{
    return configStatus_;
}

void ListDomainSetsRequest::setConfigStatus(int32_t value)
{
    configStatus_ = value;
    configStatusIsSet_ = true;
}

bool ListDomainSetsRequest::configStatusIsSet() const
{
    return configStatusIsSet_;
}

void ListDomainSetsRequest::unsetconfigStatus()
{
    configStatusIsSet_ = false;
}

}
}
}
}
}


