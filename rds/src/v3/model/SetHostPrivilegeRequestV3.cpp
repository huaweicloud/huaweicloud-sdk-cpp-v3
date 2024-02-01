

#include "huaweicloud/rds/v3/model/SetHostPrivilegeRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetHostPrivilegeRequestV3::SetHostPrivilegeRequestV3()
{
    userName_ = "";
    userNameIsSet_ = false;
    hostsIsSet_ = false;
}

SetHostPrivilegeRequestV3::~SetHostPrivilegeRequestV3() = default;

void SetHostPrivilegeRequestV3::validate()
{
}

web::json::value SetHostPrivilegeRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool SetHostPrivilegeRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


std::string SetHostPrivilegeRequestV3::getUserName() const
{
    return userName_;
}

void SetHostPrivilegeRequestV3::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SetHostPrivilegeRequestV3::userNameIsSet() const
{
    return userNameIsSet_;
}

void SetHostPrivilegeRequestV3::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<std::string>& SetHostPrivilegeRequestV3::getHosts()
{
    return hosts_;
}

void SetHostPrivilegeRequestV3::setHosts(const std::vector<std::string>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool SetHostPrivilegeRequestV3::hostsIsSet() const
{
    return hostsIsSet_;
}

void SetHostPrivilegeRequestV3::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


