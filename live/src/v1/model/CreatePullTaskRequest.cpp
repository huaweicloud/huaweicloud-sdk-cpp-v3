

#include "huaweicloud/live/v1/model/CreatePullTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreatePullTaskRequest::CreatePullTaskRequest()
{
    bodyIsSet_ = false;
}

CreatePullTaskRequest::~CreatePullTaskRequest() = default;

void CreatePullTaskRequest::validate()
{
}

web::json::value CreatePullTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePullTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LivePullStreamTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LivePullStreamTask CreatePullTaskRequest::getBody() const
{
    return body_;
}

void CreatePullTaskRequest::setBody(const LivePullStreamTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePullTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePullTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


