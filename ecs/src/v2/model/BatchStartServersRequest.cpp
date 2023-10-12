

#include "huaweicloud/ecs/v2/model/BatchStartServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStartServersRequest::BatchStartServersRequest()
{
    bodyIsSet_ = false;
}

BatchStartServersRequest::~BatchStartServersRequest() = default;

void BatchStartServersRequest::validate()
{
}

web::json::value BatchStartServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchStartServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchStartServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchStartServersRequestBody BatchStartServersRequest::getBody() const
{
    return body_;
}

void BatchStartServersRequest::setBody(const BatchStartServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStartServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStartServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


