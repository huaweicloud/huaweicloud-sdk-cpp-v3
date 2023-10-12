

#include "huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchDeleteProtectedInstancesRequest::BatchDeleteProtectedInstancesRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteProtectedInstancesRequest::~BatchDeleteProtectedInstancesRequest() = default;

void BatchDeleteProtectedInstancesRequest::validate()
{
}

web::json::value BatchDeleteProtectedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteProtectedInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteProtectedInstancesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteProtectedInstancesRequestBody BatchDeleteProtectedInstancesRequest::getBody() const
{
    return body_;
}

void BatchDeleteProtectedInstancesRequest::setBody(const BatchDeleteProtectedInstancesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteProtectedInstancesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteProtectedInstancesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


