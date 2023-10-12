

#include "huaweicloud/ecs/v2/model/BatchUpdateServersNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchUpdateServersNameRequest::BatchUpdateServersNameRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateServersNameRequest::~BatchUpdateServersNameRequest() = default;

void BatchUpdateServersNameRequest::validate()
{
}

web::json::value BatchUpdateServersNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateServersNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateServersNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateServersNameRequestBody BatchUpdateServersNameRequest::getBody() const
{
    return body_;
}

void BatchUpdateServersNameRequest::setBody(const BatchUpdateServersNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateServersNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateServersNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


