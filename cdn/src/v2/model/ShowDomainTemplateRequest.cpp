

#include "huaweicloud/cdn/v2/model/ShowDomainTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainTemplateRequest::ShowDomainTemplateRequest()
{
    tmlName_ = "";
    tmlNameIsSet_ = false;
    tmlId_ = "";
    tmlIdIsSet_ = false;
    tmlType_ = 0;
    tmlTypeIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

ShowDomainTemplateRequest::~ShowDomainTemplateRequest() = default;

void ShowDomainTemplateRequest::validate()
{
}

web::json::value ShowDomainTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tmlNameIsSet_) {
        val[utility::conversions::to_string_t("tml_name")] = ModelBase::toJson(tmlName_);
    }
    if(tmlIdIsSet_) {
        val[utility::conversions::to_string_t("tml_id")] = ModelBase::toJson(tmlId_);
    }
    if(tmlTypeIsSet_) {
        val[utility::conversions::to_string_t("tml_type")] = ModelBase::toJson(tmlType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowDomainTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tml_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tml_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tml_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tml_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowDomainTemplateRequest::getTmlName() const
{
    return tmlName_;
}

void ShowDomainTemplateRequest::setTmlName(const std::string& value)
{
    tmlName_ = value;
    tmlNameIsSet_ = true;
}

bool ShowDomainTemplateRequest::tmlNameIsSet() const
{
    return tmlNameIsSet_;
}

void ShowDomainTemplateRequest::unsettmlName()
{
    tmlNameIsSet_ = false;
}

std::string ShowDomainTemplateRequest::getTmlId() const
{
    return tmlId_;
}

void ShowDomainTemplateRequest::setTmlId(const std::string& value)
{
    tmlId_ = value;
    tmlIdIsSet_ = true;
}

bool ShowDomainTemplateRequest::tmlIdIsSet() const
{
    return tmlIdIsSet_;
}

void ShowDomainTemplateRequest::unsettmlId()
{
    tmlIdIsSet_ = false;
}

int32_t ShowDomainTemplateRequest::getTmlType() const
{
    return tmlType_;
}

void ShowDomainTemplateRequest::setTmlType(int32_t value)
{
    tmlType_ = value;
    tmlTypeIsSet_ = true;
}

bool ShowDomainTemplateRequest::tmlTypeIsSet() const
{
    return tmlTypeIsSet_;
}

void ShowDomainTemplateRequest::unsettmlType()
{
    tmlTypeIsSet_ = false;
}

std::string ShowDomainTemplateRequest::getLimit() const
{
    return limit_;
}

void ShowDomainTemplateRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDomainTemplateRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDomainTemplateRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowDomainTemplateRequest::getOffset() const
{
    return offset_;
}

void ShowDomainTemplateRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDomainTemplateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDomainTemplateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


