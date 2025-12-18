

#include "huaweicloud/meeting/v1/model/ShowSpResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowSpResourceRequest::ShowSpResourceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    queryGroup_ = false;
    queryGroupIsSet_ = false;
}

ShowSpResourceRequest::~ShowSpResourceRequest() = default;

void ShowSpResourceRequest::validate()
{
}

web::json::value ShowSpResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(queryGroupIsSet_) {
        val[utility::conversions::to_string_t("queryGroup")] = ModelBase::toJson(queryGroup_);
    }

    return val;
}
bool ShowSpResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queryGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryGroup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryGroup(refVal);
        }
    }
    return ok;
}


std::string ShowSpResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowSpResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSpResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSpResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowSpResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ShowSpResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ShowSpResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ShowSpResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

bool ShowSpResourceRequest::isQueryGroup() const
{
    return queryGroup_;
}

void ShowSpResourceRequest::setQueryGroup(bool value)
{
    queryGroup_ = value;
    queryGroupIsSet_ = true;
}

bool ShowSpResourceRequest::queryGroupIsSet() const
{
    return queryGroupIsSet_;
}

void ShowSpResourceRequest::unsetqueryGroup()
{
    queryGroupIsSet_ = false;
}

}
}
}
}
}


