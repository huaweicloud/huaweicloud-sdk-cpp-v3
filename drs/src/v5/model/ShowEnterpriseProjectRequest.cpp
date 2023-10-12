

#include "huaweicloud/drs/v5/model/ShowEnterpriseProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowEnterpriseProjectRequest::ShowEnterpriseProjectRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowEnterpriseProjectRequest::~ShowEnterpriseProjectRequest() = default;

void ShowEnterpriseProjectRequest::validate()
{
}

web::json::value ShowEnterpriseProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowEnterpriseProjectRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string ShowEnterpriseProjectRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowEnterpriseProjectRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowEnterpriseProjectRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowEnterpriseProjectRequest::getOffset() const
{
    return offset_;
}

void ShowEnterpriseProjectRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowEnterpriseProjectRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowEnterpriseProjectRequest::getLimit() const
{
    return limit_;
}

void ShowEnterpriseProjectRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowEnterpriseProjectRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowEnterpriseProjectRequest::getName() const
{
    return name_;
}

void ShowEnterpriseProjectRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowEnterpriseProjectRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowEnterpriseProjectRequest::getDomainId() const
{
    return domainId_;
}

void ShowEnterpriseProjectRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowEnterpriseProjectRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowEnterpriseProjectRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


