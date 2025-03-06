

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateScheduleTaskRequest::CreateScheduleTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateScheduleTaskRequest::~CreateScheduleTaskRequest() = default;

void CreateScheduleTaskRequest::validate()
{
}

web::json::value CreateScheduleTaskRequest::toJson() const
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
bool CreateScheduleTaskRequest::fromJson(const web::json::value& val)
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
            CreateScheduleTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateScheduleTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateScheduleTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateScheduleTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateScheduleTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateScheduleTaskRequestBody CreateScheduleTaskRequest::getBody() const
{
    return body_;
}

void CreateScheduleTaskRequest::setBody(const CreateScheduleTaskRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateScheduleTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateScheduleTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


