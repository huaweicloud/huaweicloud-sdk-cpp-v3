

#include "huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchCreateProtectedInstancesRequest::BatchCreateProtectedInstancesRequest()
{
    bodyIsSet_ = false;
}

BatchCreateProtectedInstancesRequest::~BatchCreateProtectedInstancesRequest() = default;

void BatchCreateProtectedInstancesRequest::validate()
{
}

web::json::value BatchCreateProtectedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateProtectedInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateProtectedInstancesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchCreateProtectedInstancesRequestBody BatchCreateProtectedInstancesRequest::getBody() const
{
    return body_;
}

void BatchCreateProtectedInstancesRequest::setBody(const BatchCreateProtectedInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateProtectedInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


