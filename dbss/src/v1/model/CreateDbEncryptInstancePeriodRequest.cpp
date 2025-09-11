

#include "huaweicloud/dbss/v1/model/CreateDbEncryptInstancePeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDbEncryptInstancePeriodRequest::CreateDbEncryptInstancePeriodRequest()
{
    bodyIsSet_ = false;
}

CreateDbEncryptInstancePeriodRequest::~CreateDbEncryptInstancePeriodRequest() = default;

void CreateDbEncryptInstancePeriodRequest::validate()
{
}

web::json::value CreateDbEncryptInstancePeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDbEncryptInstancePeriodRequest::fromJson(const web::json::value& val)
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


ChargeOrderDbssNew CreateDbEncryptInstancePeriodRequest::getBody() const
{
    return body_;
}

void CreateDbEncryptInstancePeriodRequest::setBody(const ChargeOrderDbssNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbEncryptInstancePeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbEncryptInstancePeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


