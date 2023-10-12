

#include "huaweicloud/cdn/v1/model/HeaderMap.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HeaderMap::HeaderMap()
{
    contentDisposition_ = "";
    contentDispositionIsSet_ = false;
    contentLanguage_ = "";
    contentLanguageIsSet_ = false;
    accessControlAllowOrigin_ = "";
    accessControlAllowOriginIsSet_ = false;
    accessControlAllowMethods_ = "";
    accessControlAllowMethodsIsSet_ = false;
    accessControlMaxAge_ = "";
    accessControlMaxAgeIsSet_ = false;
    accessControlExposeHeaders_ = "";
    accessControlExposeHeadersIsSet_ = false;
}

HeaderMap::~HeaderMap() = default;

void HeaderMap::validate()
{
}

web::json::value HeaderMap::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentDispositionIsSet_) {
        val[utility::conversions::to_string_t("Content-Disposition")] = ModelBase::toJson(contentDisposition_);
    }
    if(contentLanguageIsSet_) {
        val[utility::conversions::to_string_t("Content-Language")] = ModelBase::toJson(contentLanguage_);
    }
    if(accessControlAllowOriginIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Origin")] = ModelBase::toJson(accessControlAllowOrigin_);
    }
    if(accessControlAllowMethodsIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Methods")] = ModelBase::toJson(accessControlAllowMethods_);
    }
    if(accessControlMaxAgeIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Max-Age")] = ModelBase::toJson(accessControlMaxAge_);
    }
    if(accessControlExposeHeadersIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Expose-Headers")] = ModelBase::toJson(accessControlExposeHeaders_);
    }

    return val;
}
bool HeaderMap::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Disposition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Disposition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentDisposition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Methods"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Methods"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowMethods(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Max-Age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Max-Age"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlMaxAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Expose-Headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Expose-Headers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlExposeHeaders(refVal);
        }
    }
    return ok;
}


std::string HeaderMap::getContentDisposition() const
{
    return contentDisposition_;
}

void HeaderMap::setContentDisposition(const std::string& value)
{
    contentDisposition_ = value;
    contentDispositionIsSet_ = true;
}

bool HeaderMap::contentDispositionIsSet() const
{
    return contentDispositionIsSet_;
}

void HeaderMap::unsetcontentDisposition()
{
    contentDispositionIsSet_ = false;
}

std::string HeaderMap::getContentLanguage() const
{
    return contentLanguage_;
}

void HeaderMap::setContentLanguage(const std::string& value)
{
    contentLanguage_ = value;
    contentLanguageIsSet_ = true;
}

bool HeaderMap::contentLanguageIsSet() const
{
    return contentLanguageIsSet_;
}

void HeaderMap::unsetcontentLanguage()
{
    contentLanguageIsSet_ = false;
}

std::string HeaderMap::getAccessControlAllowOrigin() const
{
    return accessControlAllowOrigin_;
}

void HeaderMap::setAccessControlAllowOrigin(const std::string& value)
{
    accessControlAllowOrigin_ = value;
    accessControlAllowOriginIsSet_ = true;
}

bool HeaderMap::accessControlAllowOriginIsSet() const
{
    return accessControlAllowOriginIsSet_;
}

void HeaderMap::unsetaccessControlAllowOrigin()
{
    accessControlAllowOriginIsSet_ = false;
}

std::string HeaderMap::getAccessControlAllowMethods() const
{
    return accessControlAllowMethods_;
}

void HeaderMap::setAccessControlAllowMethods(const std::string& value)
{
    accessControlAllowMethods_ = value;
    accessControlAllowMethodsIsSet_ = true;
}

bool HeaderMap::accessControlAllowMethodsIsSet() const
{
    return accessControlAllowMethodsIsSet_;
}

void HeaderMap::unsetaccessControlAllowMethods()
{
    accessControlAllowMethodsIsSet_ = false;
}

std::string HeaderMap::getAccessControlMaxAge() const
{
    return accessControlMaxAge_;
}

void HeaderMap::setAccessControlMaxAge(const std::string& value)
{
    accessControlMaxAge_ = value;
    accessControlMaxAgeIsSet_ = true;
}

bool HeaderMap::accessControlMaxAgeIsSet() const
{
    return accessControlMaxAgeIsSet_;
}

void HeaderMap::unsetaccessControlMaxAge()
{
    accessControlMaxAgeIsSet_ = false;
}

std::string HeaderMap::getAccessControlExposeHeaders() const
{
    return accessControlExposeHeaders_;
}

void HeaderMap::setAccessControlExposeHeaders(const std::string& value)
{
    accessControlExposeHeaders_ = value;
    accessControlExposeHeadersIsSet_ = true;
}

bool HeaderMap::accessControlExposeHeadersIsSet() const
{
    return accessControlExposeHeadersIsSet_;
}

void HeaderMap::unsetaccessControlExposeHeaders()
{
    accessControlExposeHeadersIsSet_ = false;
}

}
}
}
}
}


