

#include "huaweicloud/ecs/v2/model/BatchResetServersPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResetServersPasswordRequest::BatchResetServersPasswordRequest()
{
    bodyIsSet_ = false;
}

BatchResetServersPasswordRequest::~BatchResetServersPasswordRequest() = default;

void BatchResetServersPasswordRequest::validate()
{
}

web::json::value BatchResetServersPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchResetServersPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchResetServersPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

BatchResetServersPasswordRequestBody BatchResetServersPasswordRequest::getBody() const
{
    return body_;
}

void BatchResetServersPasswordRequest::setBody(const BatchResetServersPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchResetServersPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchResetServersPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


