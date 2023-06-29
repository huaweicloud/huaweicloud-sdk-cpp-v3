

#include "huaweicloud/mpc/v1/model/CreateWatermarkTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateWatermarkTemplateRequest::CreateWatermarkTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateWatermarkTemplateRequest::~CreateWatermarkTemplateRequest() = default;

void CreateWatermarkTemplateRequest::validate()
{
}

web::json::value CreateWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateWatermarkTemplateRequest::fromJson(const web::json::value& val)
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


WatermarkTemplate CreateWatermarkTemplateRequest::getBody() const
{
    return body_;
}

void CreateWatermarkTemplateRequest::setBody(const WatermarkTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWatermarkTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWatermarkTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


