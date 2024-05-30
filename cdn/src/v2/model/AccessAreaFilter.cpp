

#include "huaweicloud/cdn/v2/model/AccessAreaFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




AccessAreaFilter::AccessAreaFilter()
{
    type_ = "";
    typeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    contentValue_ = "";
    contentValueIsSet_ = false;
    area_ = "";
    areaIsSet_ = false;
    exceptionIp_ = "";
    exceptionIpIsSet_ = false;
}

AccessAreaFilter::~AccessAreaFilter() = default;

void AccessAreaFilter::validate()
{
}

web::json::value AccessAreaFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("content_type")] = ModelBase::toJson(contentType_);
    }
    if(contentValueIsSet_) {
        val[utility::conversions::to_string_t("content_value")] = ModelBase::toJson(contentValue_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(exceptionIpIsSet_) {
        val[utility::conversions::to_string_t("exception_ip")] = ModelBase::toJson(exceptionIp_);
    }

    return val;
}
bool AccessAreaFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exception_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exception_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceptionIp(refVal);
        }
    }
    return ok;
}


std::string AccessAreaFilter::getType() const
{
    return type_;
}

void AccessAreaFilter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AccessAreaFilter::typeIsSet() const
{
    return typeIsSet_;
}

void AccessAreaFilter::unsettype()
{
    typeIsSet_ = false;
}

std::string AccessAreaFilter::getContentType() const
{
    return contentType_;
}

void AccessAreaFilter::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool AccessAreaFilter::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void AccessAreaFilter::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string AccessAreaFilter::getContentValue() const
{
    return contentValue_;
}

void AccessAreaFilter::setContentValue(const std::string& value)
{
    contentValue_ = value;
    contentValueIsSet_ = true;
}

bool AccessAreaFilter::contentValueIsSet() const
{
    return contentValueIsSet_;
}

void AccessAreaFilter::unsetcontentValue()
{
    contentValueIsSet_ = false;
}

std::string AccessAreaFilter::getArea() const
{
    return area_;
}

void AccessAreaFilter::setArea(const std::string& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool AccessAreaFilter::areaIsSet() const
{
    return areaIsSet_;
}

void AccessAreaFilter::unsetarea()
{
    areaIsSet_ = false;
}

std::string AccessAreaFilter::getExceptionIp() const
{
    return exceptionIp_;
}

void AccessAreaFilter::setExceptionIp(const std::string& value)
{
    exceptionIp_ = value;
    exceptionIpIsSet_ = true;
}

bool AccessAreaFilter::exceptionIpIsSet() const
{
    return exceptionIpIsSet_;
}

void AccessAreaFilter::unsetexceptionIp()
{
    exceptionIpIsSet_ = false;
}

}
}
}
}
}


