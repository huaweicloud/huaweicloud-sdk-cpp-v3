

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdateApplicationPermissionsRequest::BatchUpdateApplicationPermissionsRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateApplicationPermissionsRequest::~BatchUpdateApplicationPermissionsRequest() = default;

void BatchUpdateApplicationPermissionsRequest::validate()
{
}

web::json::value BatchUpdateApplicationPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateApplicationPermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateApplicationPermissionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateApplicationPermissionsRequestBody BatchUpdateApplicationPermissionsRequest::getBody() const
{
    return body_;
}

void BatchUpdateApplicationPermissionsRequest::setBody(const BatchUpdateApplicationPermissionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateApplicationPermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateApplicationPermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


