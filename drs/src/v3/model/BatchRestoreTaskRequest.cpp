

#include "huaweicloud/drs/v3/model/BatchRestoreTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchRestoreTaskRequest::BatchRestoreTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchRestoreTaskRequest::~BatchRestoreTaskRequest() = default;

void BatchRestoreTaskRequest::validate()
{
}

web::json::value BatchRestoreTaskRequest::toJson() const
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
bool BatchRestoreTaskRequest::fromJson(const web::json::value& val)
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
            BatchRetryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchRestoreTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchRestoreTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchRestoreTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchRestoreTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchRetryReq BatchRestoreTaskRequest::getBody() const
{
    return body_;
}

void BatchRestoreTaskRequest::setBody(const BatchRetryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRestoreTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRestoreTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


