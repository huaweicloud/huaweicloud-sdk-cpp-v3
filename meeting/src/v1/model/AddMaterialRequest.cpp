

#include "huaweicloud/meeting/v1/model/AddMaterialRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddMaterialRequest::AddMaterialRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddMaterialRequest::~AddMaterialRequest() = default;

void AddMaterialRequest::validate()
{
}

web::json::value AddMaterialRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddMaterialRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddMaterialRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddMaterialRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddMaterialRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddMaterialRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddMaterialRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddMaterialRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddMaterialRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddMaterialRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddMaterialRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AddMaterialRequestBody AddMaterialRequest::getBody() const
{
    return body_;
}

void AddMaterialRequest::setBody(const AddMaterialRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddMaterialRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddMaterialRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


