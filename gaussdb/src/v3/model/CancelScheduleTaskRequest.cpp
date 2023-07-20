

#include "huaweicloud/gaussdb/v3/model/CancelScheduleTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelScheduleTaskRequest::CancelScheduleTaskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CancelScheduleTaskRequest::~CancelScheduleTaskRequest() = default;

void CancelScheduleTaskRequest::validate()
{
}

web::json::value CancelScheduleTaskRequest::toJson() const
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

bool CancelScheduleTaskRequest::fromJson(const web::json::value& val)
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
            CancelScheduleTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CancelScheduleTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void CancelScheduleTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CancelScheduleTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CancelScheduleTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CancelScheduleTask CancelScheduleTaskRequest::getBody() const
{
    return body_;
}

void CancelScheduleTaskRequest::setBody(const CancelScheduleTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelScheduleTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelScheduleTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


