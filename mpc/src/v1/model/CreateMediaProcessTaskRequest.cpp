

#include "huaweicloud/mpc/v1/model/CreateMediaProcessTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMediaProcessTaskRequest::CreateMediaProcessTaskRequest()
{
    bodyIsSet_ = false;
}

CreateMediaProcessTaskRequest::~CreateMediaProcessTaskRequest() = default;

void CreateMediaProcessTaskRequest::validate()
{
}

web::json::value CreateMediaProcessTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateMediaProcessTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMediaProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateMediaProcessReq CreateMediaProcessTaskRequest::getBody() const
{
    return body_;
}

void CreateMediaProcessTaskRequest::setBody(const CreateMediaProcessReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMediaProcessTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMediaProcessTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


