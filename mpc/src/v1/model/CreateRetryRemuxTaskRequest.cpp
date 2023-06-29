

#include "huaweicloud/mpc/v1/model/CreateRetryRemuxTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateRetryRemuxTaskRequest::CreateRetryRemuxTaskRequest()
{
    bodyIsSet_ = false;
}

CreateRetryRemuxTaskRequest::~CreateRetryRemuxTaskRequest() = default;

void CreateRetryRemuxTaskRequest::validate()
{
}

web::json::value CreateRetryRemuxTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateRetryRemuxTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RemuxRetryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RemuxRetryReq CreateRetryRemuxTaskRequest::getBody() const
{
    return body_;
}

void CreateRetryRemuxTaskRequest::setBody(const RemuxRetryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRetryRemuxTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRetryRemuxTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


