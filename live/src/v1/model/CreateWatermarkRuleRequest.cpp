

#include "huaweicloud/live/v1/model/CreateWatermarkRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateWatermarkRuleRequest::CreateWatermarkRuleRequest()
{
    bodyIsSet_ = false;
}

CreateWatermarkRuleRequest::~CreateWatermarkRuleRequest() = default;

void CreateWatermarkRuleRequest::validate()
{
}

web::json::value CreateWatermarkRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWatermarkRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WatermarkRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WatermarkRule CreateWatermarkRuleRequest::getBody() const
{
    return body_;
}

void CreateWatermarkRuleRequest::setBody(const WatermarkRule& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWatermarkRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWatermarkRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


