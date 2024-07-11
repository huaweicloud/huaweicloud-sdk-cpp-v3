

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentPermissionsResponse::ListEnvironmentPermissionsResponse()
{
    bodyIsSet_ = false;
}

ListEnvironmentPermissionsResponse::~ListEnvironmentPermissionsResponse() = default;

void ListEnvironmentPermissionsResponse::validate()
{
}

web::json::value ListEnvironmentPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListEnvironmentPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DevUcEnvironmentPermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<DevUcEnvironmentPermission>& ListEnvironmentPermissionsResponse::getBody()
{
    return body_;
}

void ListEnvironmentPermissionsResponse::setBody(const std::vector<DevUcEnvironmentPermission>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListEnvironmentPermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListEnvironmentPermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


