

#include "huaweicloud/cfw/v1/model/BatchDeleteSchedulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteSchedulesRequest::BatchDeleteSchedulesRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteSchedulesRequest::~BatchDeleteSchedulesRequest() = default;

void BatchDeleteSchedulesRequest::validate()
{
}

web::json::value BatchDeleteSchedulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteSchedulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteSchedulesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteSchedulesRequestBody BatchDeleteSchedulesRequest::getBody() const
{
    return body_;
}

void BatchDeleteSchedulesRequest::setBody(const BatchDeleteSchedulesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSchedulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSchedulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


