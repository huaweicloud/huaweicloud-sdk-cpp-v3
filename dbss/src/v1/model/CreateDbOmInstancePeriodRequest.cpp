

#include "huaweicloud/dbss/v1/model/CreateDbOmInstancePeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDbOmInstancePeriodRequest::CreateDbOmInstancePeriodRequest()
{
    bodyIsSet_ = false;
}

CreateDbOmInstancePeriodRequest::~CreateDbOmInstancePeriodRequest() = default;

void CreateDbOmInstancePeriodRequest::validate()
{
}

web::json::value CreateDbOmInstancePeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDbOmInstancePeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChargeOrderDbssNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ChargeOrderDbssNew CreateDbOmInstancePeriodRequest::getBody() const
{
    return body_;
}

void CreateDbOmInstancePeriodRequest::setBody(const ChargeOrderDbssNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbOmInstancePeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbOmInstancePeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


