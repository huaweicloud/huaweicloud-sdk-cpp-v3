

#include "huaweicloud/drs/v3/model/CreateCompareTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareTaskRequest::CreateCompareTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCompareTaskRequest::~CreateCompareTaskRequest() = default;

void CreateCompareTaskRequest::validate()
{
}

web::json::value CreateCompareTaskRequest::toJson() const
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
bool CreateCompareTaskRequest::fromJson(const web::json::value& val)
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
            CreateCompareTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCompareTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateCompareTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateCompareTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateCompareTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateCompareTaskReq CreateCompareTaskRequest::getBody() const
{
    return body_;
}

void CreateCompareTaskRequest::setBody(const CreateCompareTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCompareTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCompareTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


