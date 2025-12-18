

#include "huaweicloud/meeting/v1/model/CreatePortalRefNonceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreatePortalRefNonceRequest::CreatePortalRefNonceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

CreatePortalRefNonceRequest::~CreatePortalRefNonceRequest() = default;

void CreatePortalRefNonceRequest::validate()
{
}

web::json::value CreatePortalRefNonceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }

    return val;
}
bool CreatePortalRefNonceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreatePortalRefNonceRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreatePortalRefNonceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePortalRefNonceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePortalRefNonceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreatePortalRefNonceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CreatePortalRefNonceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CreatePortalRefNonceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CreatePortalRefNonceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


