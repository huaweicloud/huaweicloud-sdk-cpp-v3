

#include "huaweicloud/mpc/v1/model/UpdateWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateWatermarkTemplateRequest::UpdateWatermarkTemplateRequest()
{
    bodyIsSet_ = false;
}

UpdateWatermarkTemplateRequest::~UpdateWatermarkTemplateRequest() = default;

void UpdateWatermarkTemplateRequest::validate()
{
}

web::json::value UpdateWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWatermarkTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WatermarkTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WatermarkTemplate UpdateWatermarkTemplateRequest::getBody() const
{
    return body_;
}

void UpdateWatermarkTemplateRequest::setBody(const WatermarkTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWatermarkTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWatermarkTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


