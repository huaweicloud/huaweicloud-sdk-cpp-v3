

#include "huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancesPeriodOrderNewRequest::CreateInstancesPeriodOrderNewRequest()
{
    bodyIsSet_ = false;
}

CreateInstancesPeriodOrderNewRequest::~CreateInstancesPeriodOrderNewRequest() = default;

void CreateInstancesPeriodOrderNewRequest::validate()
{
}

web::json::value CreateInstancesPeriodOrderNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInstancesPeriodOrderNewRequest::fromJson(const web::json::value& val)
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


CreateInstancePeriodRequest CreateInstancesPeriodOrderNewRequest::getBody() const
{
    return body_;
}

void CreateInstancesPeriodOrderNewRequest::setBody(const CreateInstancePeriodRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstancesPeriodOrderNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstancesPeriodOrderNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


