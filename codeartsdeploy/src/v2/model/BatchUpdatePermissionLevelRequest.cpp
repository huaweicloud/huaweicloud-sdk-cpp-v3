

#include "huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchUpdatePermissionLevelRequest::BatchUpdatePermissionLevelRequest()
{
    bodyIsSet_ = false;
}

BatchUpdatePermissionLevelRequest::~BatchUpdatePermissionLevelRequest() = default;

void BatchUpdatePermissionLevelRequest::validate()
{
}

web::json::value BatchUpdatePermissionLevelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdatePermissionLevelRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdatePermissionLevelRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdatePermissionLevelRequestBody BatchUpdatePermissionLevelRequest::getBody() const
{
    return body_;
}

void BatchUpdatePermissionLevelRequest::setBody(const BatchUpdatePermissionLevelRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdatePermissionLevelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdatePermissionLevelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


