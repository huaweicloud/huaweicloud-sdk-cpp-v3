

#include "huaweicloud/rds/v3/model/ListDatabaseUserRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDatabaseUserRoleRequest::ListDatabaseUserRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ListDatabaseUserRoleRequest::~ListDatabaseUserRoleRequest() = default;

void ListDatabaseUserRoleRequest::validate()
{
}

web::json::value ListDatabaseUserRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ListDatabaseUserRoleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ListDatabaseUserRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseUserRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseUserRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseUserRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseUserRoleRequest::getUserName() const
{
    return userName_;
}

void ListDatabaseUserRoleRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListDatabaseUserRoleRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListDatabaseUserRoleRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


