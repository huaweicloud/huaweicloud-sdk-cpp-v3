

#include "huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancesPeriodOrderRequest::CreateInstancesPeriodOrderRequest()
{
    bodyIsSet_ = false;
}

CreateInstancesPeriodOrderRequest::~CreateInstancesPeriodOrderRequest() = default;

void CreateInstancesPeriodOrderRequest::validate()
{
}

web::json::value CreateInstancesPeriodOrderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInstancesPeriodOrderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateInstancePeriodRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateInstancePeriodRequest CreateInstancesPeriodOrderRequest::getBody() const
{
    return body_;
}

void CreateInstancesPeriodOrderRequest::setBody(const CreateInstancePeriodRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstancesPeriodOrderRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstancesPeriodOrderRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


