

#include "huaweicloud/codeartspipeline/v2/model/ListRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListRuleRequest::ListRuleRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    cloudProjectId_ = "";
    cloudProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListRuleRequest::~ListRuleRequest() = default;

void ListRuleRequest::validate()
{
}

web::json::value ListRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(cloudProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cloud_project_id")] = ModelBase::toJson(cloudProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ListRuleRequest::getDomainId() const
{
    return domainId_;
}

void ListRuleRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListRuleRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListRuleRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListRuleRequest::getCloudProjectId() const
{
    return cloudProjectId_;
}

void ListRuleRequest::setCloudProjectId(const std::string& value)
{
    cloudProjectId_ = value;
    cloudProjectIdIsSet_ = true;
}

bool ListRuleRequest::cloudProjectIdIsSet() const
{
    return cloudProjectIdIsSet_;
}

void ListRuleRequest::unsetcloudProjectId()
{
    cloudProjectIdIsSet_ = false;
}

int32_t ListRuleRequest::getOffset() const
{
    return offset_;
}

void ListRuleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRuleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRuleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRuleRequest::getLimit() const
{
    return limit_;
}

void ListRuleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRuleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRuleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRuleRequest::getType() const
{
    return type_;
}

void ListRuleRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListRuleRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListRuleRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListRuleRequest::getName() const
{
    return name_;
}

void ListRuleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListRuleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListRuleRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


