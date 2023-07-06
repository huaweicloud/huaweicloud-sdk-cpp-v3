

#include "huaweicloud/mpc/v1/model/CreateAnimatedGraphicsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateAnimatedGraphicsTaskRequest::CreateAnimatedGraphicsTaskRequest()
{
    bodyIsSet_ = false;
}

CreateAnimatedGraphicsTaskRequest::~CreateAnimatedGraphicsTaskRequest() = default;

void CreateAnimatedGraphicsTaskRequest::validate()
{
}

web::json::value CreateAnimatedGraphicsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateAnimatedGraphicsTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAnimatedGraphicsTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateAnimatedGraphicsTaskReq CreateAnimatedGraphicsTaskRequest::getBody() const
{
    return body_;
}

void CreateAnimatedGraphicsTaskRequest::setBody(const CreateAnimatedGraphicsTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAnimatedGraphicsTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAnimatedGraphicsTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


