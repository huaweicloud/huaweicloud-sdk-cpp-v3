

#include "huaweicloud/mpc/v1/model/UpdateQualityEnhanceTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateQualityEnhanceTemplateRequest::UpdateQualityEnhanceTemplateRequest()
{
    bodyIsSet_ = false;
}

UpdateQualityEnhanceTemplateRequest::~UpdateQualityEnhanceTemplateRequest() = default;

void UpdateQualityEnhanceTemplateRequest::validate()
{
}

web::json::value UpdateQualityEnhanceTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateQualityEnhanceTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateQualityEnhanceTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateQualityEnhanceTemplateReq UpdateQualityEnhanceTemplateRequest::getBody() const
{
    return body_;
}

void UpdateQualityEnhanceTemplateRequest::setBody(const UpdateQualityEnhanceTemplateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateQualityEnhanceTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateQualityEnhanceTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


