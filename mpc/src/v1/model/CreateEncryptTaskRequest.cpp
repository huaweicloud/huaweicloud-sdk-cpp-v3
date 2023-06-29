

#include "huaweicloud/mpc/v1/model/CreateEncryptTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEncryptTaskRequest::CreateEncryptTaskRequest()
{
    bodyIsSet_ = false;
}

CreateEncryptTaskRequest::~CreateEncryptTaskRequest() = default;

void CreateEncryptTaskRequest::validate()
{
}

web::json::value CreateEncryptTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateEncryptTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateEncryptReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateEncryptReq CreateEncryptTaskRequest::getBody() const
{
    return body_;
}

void CreateEncryptTaskRequest::setBody(const CreateEncryptReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEncryptTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEncryptTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


