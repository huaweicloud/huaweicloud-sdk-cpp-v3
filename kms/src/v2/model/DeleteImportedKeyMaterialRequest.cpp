

#include "huaweicloud/kms/v2/model/DeleteImportedKeyMaterialRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DeleteImportedKeyMaterialRequest::DeleteImportedKeyMaterialRequest()
{
    bodyIsSet_ = false;
}

DeleteImportedKeyMaterialRequest::~DeleteImportedKeyMaterialRequest() = default;

void DeleteImportedKeyMaterialRequest::validate()
{
}

web::json::value DeleteImportedKeyMaterialRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteImportedKeyMaterialRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


OperateKeyRequestBody DeleteImportedKeyMaterialRequest::getBody() const
{
    return body_;
}

void DeleteImportedKeyMaterialRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteImportedKeyMaterialRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteImportedKeyMaterialRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


