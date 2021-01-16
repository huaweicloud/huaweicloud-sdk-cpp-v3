

#include "huaweicloud/ecs/v2/model/BatchRebootServersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchRebootServersRequest::BatchRebootServersRequest()
{
    bodyIsSet_ = false;
}

BatchRebootServersRequest::~BatchRebootServersRequest() = default;

void BatchRebootServersRequest::validate()
{
}

web::json::value BatchRebootServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchRebootServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchRebootServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchRebootServersRequestBody BatchRebootServersRequest::getBody() const
{
    return body_;
}

void BatchRebootServersRequest::setBody(const BatchRebootServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRebootServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRebootServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


