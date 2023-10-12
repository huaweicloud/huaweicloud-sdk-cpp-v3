

#include "huaweicloud/sdrs/v1/model/CreateDisasterRecoveryDrillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateDisasterRecoveryDrillRequest::CreateDisasterRecoveryDrillRequest()
{
    bodyIsSet_ = false;
}

CreateDisasterRecoveryDrillRequest::~CreateDisasterRecoveryDrillRequest() = default;

void CreateDisasterRecoveryDrillRequest::validate()
{
}

web::json::value CreateDisasterRecoveryDrillRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDisasterRecoveryDrillRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDisasterRecoveryDrillRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDisasterRecoveryDrillRequestBody CreateDisasterRecoveryDrillRequest::getBody() const
{
    return body_;
}

void CreateDisasterRecoveryDrillRequest::setBody(const CreateDisasterRecoveryDrillRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDisasterRecoveryDrillRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDisasterRecoveryDrillRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


