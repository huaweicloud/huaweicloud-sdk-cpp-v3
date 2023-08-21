

#include "huaweicloud/kms/v2/model/ImportKeyMaterialRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ImportKeyMaterialRequest::ImportKeyMaterialRequest()
{
    bodyIsSet_ = false;
}

ImportKeyMaterialRequest::~ImportKeyMaterialRequest() = default;

void ImportKeyMaterialRequest::validate()
{
}

web::json::value ImportKeyMaterialRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ImportKeyMaterialRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportKeyMaterialRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ImportKeyMaterialRequestBody ImportKeyMaterialRequest::getBody() const
{
    return body_;
}

void ImportKeyMaterialRequest::setBody(const ImportKeyMaterialRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportKeyMaterialRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportKeyMaterialRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


