

#include "huaweicloud/mpc/v1/model/CreateRemuxTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateRemuxTaskRequest::CreateRemuxTaskRequest()
{
    bodyIsSet_ = false;
}

CreateRemuxTaskRequest::~CreateRemuxTaskRequest() = default;

void CreateRemuxTaskRequest::validate()
{
}

web::json::value CreateRemuxTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateRemuxTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRemuxTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateRemuxTaskReq CreateRemuxTaskRequest::getBody() const
{
    return body_;
}

void CreateRemuxTaskRequest::setBody(const CreateRemuxTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRemuxTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRemuxTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


