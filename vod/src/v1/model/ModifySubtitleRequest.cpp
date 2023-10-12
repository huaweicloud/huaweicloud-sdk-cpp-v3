

#include "huaweicloud/vod/v1/model/ModifySubtitleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ModifySubtitleRequest::ModifySubtitleRequest()
{
    bodyIsSet_ = false;
}

ModifySubtitleRequest::~ModifySubtitleRequest() = default;

void ModifySubtitleRequest::validate()
{
}

web::json::value ModifySubtitleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifySubtitleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SubtitleModifyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SubtitleModifyReq ModifySubtitleRequest::getBody() const
{
    return body_;
}

void ModifySubtitleRequest::setBody(const SubtitleModifyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifySubtitleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifySubtitleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


