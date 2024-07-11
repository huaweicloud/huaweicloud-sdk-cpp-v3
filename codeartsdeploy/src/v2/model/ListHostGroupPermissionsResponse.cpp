

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupPermissionsResponse::ListHostGroupPermissionsResponse()
{
    bodyIsSet_ = false;
}

ListHostGroupPermissionsResponse::~ListHostGroupPermissionsResponse() = default;

void ListHostGroupPermissionsResponse::validate()
{
}

web::json::value ListHostGroupPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListHostGroupPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DevUcClusterPermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<DevUcClusterPermission>& ListHostGroupPermissionsResponse::getBody()
{
    return body_;
}

void ListHostGroupPermissionsResponse::setBody(const std::vector<DevUcClusterPermission>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListHostGroupPermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListHostGroupPermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


