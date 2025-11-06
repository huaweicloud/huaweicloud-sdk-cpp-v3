

#include "huaweicloud/codeartsrepo/v4/model/ListGroupPermissionResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupPermissionResourcesRequest::ListGroupPermissionResourcesRequest()
{
    scope_ = "";
    scopeIsSet_ = false;
}

ListGroupPermissionResourcesRequest::~ListGroupPermissionResourcesRequest() = default;

void ListGroupPermissionResourcesRequest::validate()
{
}

web::json::value ListGroupPermissionResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }

    return val;
}
bool ListGroupPermissionResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    return ok;
}


std::string ListGroupPermissionResourcesRequest::getScope() const
{
    return scope_;
}

void ListGroupPermissionResourcesRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListGroupPermissionResourcesRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListGroupPermissionResourcesRequest::unsetscope()
{
    scopeIsSet_ = false;
}

}
}
}
}
}


