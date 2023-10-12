

#include "huaweicloud/kms/v2/model/CreateParametersForImportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateParametersForImportRequest::CreateParametersForImportRequest()
{
    bodyIsSet_ = false;
}

CreateParametersForImportRequest::~CreateParametersForImportRequest() = default;

void CreateParametersForImportRequest::validate()
{
}

web::json::value CreateParametersForImportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateParametersForImportRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GetParametersForImportRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GetParametersForImportRequestBody CreateParametersForImportRequest::getBody() const
{
    return body_;
}

void CreateParametersForImportRequest::setBody(const GetParametersForImportRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateParametersForImportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateParametersForImportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


