

#include "huaweicloud/drs/v5/model/UploadUserJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadUserJdbcDriverRequest::UploadUserJdbcDriverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    driverType_ = "";
    driverTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UploadUserJdbcDriverRequest::~UploadUserJdbcDriverRequest() = default;

void UploadUserJdbcDriverRequest::validate()
{
}

web::json::value UploadUserJdbcDriverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(driverTypeIsSet_) {
        val[utility::conversions::to_string_t("driver_type")] = ModelBase::toJson(driverType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadUserJdbcDriverRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("driver_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadUserJdbcDriverRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadUserJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void UploadUserJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UploadUserJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UploadUserJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UploadUserJdbcDriverRequest::getDriverType() const
{
    return driverType_;
}

void UploadUserJdbcDriverRequest::setDriverType(const std::string& value)
{
    driverType_ = value;
    driverTypeIsSet_ = true;
}

bool UploadUserJdbcDriverRequest::driverTypeIsSet() const
{
    return driverTypeIsSet_;
}

void UploadUserJdbcDriverRequest::unsetdriverType()
{
    driverTypeIsSet_ = false;
}

UploadUserJdbcDriverRequestBody UploadUserJdbcDriverRequest::getBody() const
{
    return body_;
}

void UploadUserJdbcDriverRequest::setBody(const UploadUserJdbcDriverRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadUserJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadUserJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


