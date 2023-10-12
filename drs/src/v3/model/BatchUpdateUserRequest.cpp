

#include "huaweicloud/drs/v3/model/BatchUpdateUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchUpdateUserRequest::BatchUpdateUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateUserRequest::~BatchUpdateUserRequest() = default;

void BatchUpdateUserRequest::validate()
{
}

web::json::value BatchUpdateUserRequest::toJson() const
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
bool BatchUpdateUserRequest::fromJson(const web::json::value& val)
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
            BatchUpdateSrcUserReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchUpdateUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchUpdateUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchUpdateUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchUpdateSrcUserReq BatchUpdateUserRequest::getBody() const
{
    return body_;
}

void BatchUpdateUserRequest::setBody(const BatchUpdateSrcUserReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


