

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupPermissionsRequest::ListHostGroupPermissionsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

ListHostGroupPermissionsRequest::~ListHostGroupPermissionsRequest() = default;

void ListHostGroupPermissionsRequest::validate()
{
}

web::json::value ListHostGroupPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ListHostGroupPermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string ListHostGroupPermissionsRequest::getGroupId() const
{
    return groupId_;
}

void ListHostGroupPermissionsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListHostGroupPermissionsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListHostGroupPermissionsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


