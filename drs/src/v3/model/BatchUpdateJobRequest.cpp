

#include "huaweicloud/drs/v3/model/BatchUpdateJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchUpdateJobRequest::BatchUpdateJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateJobRequest::~BatchUpdateJobRequest() = default;

void BatchUpdateJobRequest::validate()
{
}

web::json::value BatchUpdateJobRequest::toJson() const
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
bool BatchUpdateJobRequest::fromJson(const web::json::value& val)
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
            BatchModifyJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchUpdateJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchUpdateJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchUpdateJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchModifyJobReq BatchUpdateJobRequest::getBody() const
{
    return body_;
}

void BatchUpdateJobRequest::setBody(const BatchModifyJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


