

#include "huaweicloud/live/v1/model/ModifyPullTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyPullTaskRequest::ModifyPullTaskRequest()
{
    bodyIsSet_ = false;
}

ModifyPullTaskRequest::~ModifyPullTaskRequest() = default;

void ModifyPullTaskRequest::validate()
{
}

web::json::value ModifyPullTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyPullTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyLivePullStreamTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyLivePullStreamTask ModifyPullTaskRequest::getBody() const
{
    return body_;
}

void ModifyPullTaskRequest::setBody(const ModifyLivePullStreamTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyPullTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyPullTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


