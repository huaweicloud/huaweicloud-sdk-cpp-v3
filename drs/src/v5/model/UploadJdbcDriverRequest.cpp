

#include "huaweicloud/drs/v5/model/UploadJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadJdbcDriverRequest::UploadJdbcDriverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UploadJdbcDriverRequest::~UploadJdbcDriverRequest() = default;

void UploadJdbcDriverRequest::validate()
{
}

web::json::value UploadJdbcDriverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadJdbcDriverRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadJdbcDriverRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void UploadJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UploadJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UploadJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UploadJdbcDriverRequestBody UploadJdbcDriverRequest::getBody() const
{
    return body_;
}

void UploadJdbcDriverRequest::setBody(const UploadJdbcDriverRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


