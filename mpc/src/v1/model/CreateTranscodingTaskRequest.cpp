

#include "huaweicloud/mpc/v1/model/CreateTranscodingTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTranscodingTaskRequest::CreateTranscodingTaskRequest()
{
    bodyIsSet_ = false;
}

CreateTranscodingTaskRequest::~CreateTranscodingTaskRequest() = default;

void CreateTranscodingTaskRequest::validate()
{
}

web::json::value CreateTranscodingTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTranscodingTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTranscodingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateTranscodingReq CreateTranscodingTaskRequest::getBody() const
{
    return body_;
}

void CreateTranscodingTaskRequest::setBody(const CreateTranscodingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTranscodingTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTranscodingTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


