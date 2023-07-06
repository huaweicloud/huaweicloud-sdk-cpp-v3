

#include "huaweicloud/mpc/v1/model/CreateResetTracksTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateResetTracksTaskRequest::CreateResetTracksTaskRequest()
{
    bodyIsSet_ = false;
}

CreateResetTracksTaskRequest::~CreateResetTracksTaskRequest() = default;

void CreateResetTracksTaskRequest::validate()
{
}

web::json::value CreateResetTracksTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateResetTracksTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateResetTracksReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateResetTracksReq CreateResetTracksTaskRequest::getBody() const
{
    return body_;
}

void CreateResetTracksTaskRequest::setBody(const CreateResetTracksReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateResetTracksTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateResetTracksTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


