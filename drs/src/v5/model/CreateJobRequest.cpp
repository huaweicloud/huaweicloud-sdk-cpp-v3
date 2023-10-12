

#include "huaweicloud/drs/v5/model/CreateJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateJobRequest::CreateJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateJobRequest::~CreateJobRequest() = default;

void CreateJobRequest::validate()
{
}

web::json::value CreateJobRequest::toJson() const
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
bool CreateJobRequest::fromJson(const web::json::value& val)
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
            SingleCreateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SingleCreateJobReq CreateJobRequest::getBody() const
{
    return body_;
}

void CreateJobRequest::setBody(const SingleCreateJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


