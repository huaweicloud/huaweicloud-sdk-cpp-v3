

#include "huaweicloud/dds/v3/model/CancelScheduledTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CancelScheduledTaskResponse::CancelScheduledTaskResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CancelScheduledTaskResponse::~CancelScheduledTaskResponse() = default;

void CancelScheduledTaskResponse::validate()
{
}

web::json::value CancelScheduledTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelScheduledTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CancelScheduledTaskResponse::getBody() const
{
    return body_;
}

void CancelScheduledTaskResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelScheduledTaskResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelScheduledTaskResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


