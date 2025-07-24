

#include "huaweicloud/cloudtest/v1/model/TestPlanDetail_owner.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail_owner::TestPlanDetail_owner()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

TestPlanDetail_owner::~TestPlanDetail_owner() = default;

void TestPlanDetail_owner::validate()
{
}

web::json::value TestPlanDetail_owner::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool TestPlanDetail_owner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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


std::string TestPlanDetail_owner::getId() const
{
    return id_;
}

void TestPlanDetail_owner::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestPlanDetail_owner::idIsSet() const
{
    return idIsSet_;
}

void TestPlanDetail_owner::unsetid()
{
    idIsSet_ = false;
}

std::string TestPlanDetail_owner::getName() const
{
    return name_;
}

void TestPlanDetail_owner::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestPlanDetail_owner::nameIsSet() const
{
    return nameIsSet_;
}

void TestPlanDetail_owner::unsetname()
{
    nameIsSet_ = false;
}

std::string TestPlanDetail_owner::getNickName() const
{
    return nickName_;
}

void TestPlanDetail_owner::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool TestPlanDetail_owner::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void TestPlanDetail_owner::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string TestPlanDetail_owner::getUserName() const
{
    return userName_;
}

void TestPlanDetail_owner::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TestPlanDetail_owner::userNameIsSet() const
{
    return userNameIsSet_;
}

void TestPlanDetail_owner::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


