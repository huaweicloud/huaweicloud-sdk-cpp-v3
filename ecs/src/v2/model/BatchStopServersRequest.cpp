

#include "huaweicloud/ecs/v2/model/BatchStopServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStopServersRequest::BatchStopServersRequest()
{
    bodyIsSet_ = false;
}

BatchStopServersRequest::~BatchStopServersRequest() = default;

void BatchStopServersRequest::validate()
{
}

web::json::value BatchStopServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchStopServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchStopServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchStopServersRequestBody BatchStopServersRequest::getBody() const
{
    return body_;
}

void BatchStopServersRequest::setBody(const BatchStopServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStopServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStopServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


