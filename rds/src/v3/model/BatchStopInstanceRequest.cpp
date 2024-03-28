

#include "huaweicloud/rds/v3/model/BatchStopInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchStopInstanceRequest::BatchStopInstanceRequest()
{
    bodyIsSet_ = false;
}

BatchStopInstanceRequest::~BatchStopInstanceRequest() = default;

void BatchStopInstanceRequest::validate()
{
}

web::json::value BatchStopInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchStopInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchShutdownInsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchShutdownInsReq BatchStopInstanceRequest::getBody() const
{
    return body_;
}

void BatchStopInstanceRequest::setBody(const BatchShutdownInsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchStopInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchStopInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


