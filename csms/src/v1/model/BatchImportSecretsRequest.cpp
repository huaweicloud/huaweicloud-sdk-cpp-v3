

#include "huaweicloud/csms/v1/model/BatchImportSecretsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchImportSecretsRequest::BatchImportSecretsRequest()
{
    bodyIsSet_ = false;
}

BatchImportSecretsRequest::~BatchImportSecretsRequest() = default;

void BatchImportSecretsRequest::validate()
{
}

web::json::value BatchImportSecretsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchImportSecretsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportSecretsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImportSecretsRequest BatchImportSecretsRequest::getBody() const
{
    return body_;
}

void BatchImportSecretsRequest::setBody(const ImportSecretsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchImportSecretsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchImportSecretsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


