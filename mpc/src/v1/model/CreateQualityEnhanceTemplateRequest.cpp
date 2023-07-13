

#include "huaweicloud/mpc/v1/model/CreateQualityEnhanceTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateQualityEnhanceTemplateRequest::CreateQualityEnhanceTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateQualityEnhanceTemplateRequest::~CreateQualityEnhanceTemplateRequest() = default;

void CreateQualityEnhanceTemplateRequest::validate()
{
}

web::json::value CreateQualityEnhanceTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateQualityEnhanceTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QualityEnhanceTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

QualityEnhanceTemplate CreateQualityEnhanceTemplateRequest::getBody() const
{
    return body_;
}

void CreateQualityEnhanceTemplateRequest::setBody(const QualityEnhanceTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateQualityEnhanceTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateQualityEnhanceTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


