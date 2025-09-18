

#include "huaweicloud/ga/v1/model/CreateHealthCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateHealthCheckRequest::CreateHealthCheckRequest()
{
    bodyIsSet_ = false;
}

CreateHealthCheckRequest::~CreateHealthCheckRequest() = default;

void CreateHealthCheckRequest::validate()
{
}

web::json::value CreateHealthCheckRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateHealthCheckRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateHealthCheckRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateHealthCheckRequestBody CreateHealthCheckRequest::getBody() const
{
    return body_;
}

void CreateHealthCheckRequest::setBody(const CreateHealthCheckRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHealthCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHealthCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


