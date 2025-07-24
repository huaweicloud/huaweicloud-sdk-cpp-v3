

#include "huaweicloud/cloudtest/v1/model/TestPlanDetail_creator.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail_creator::TestPlanDetail_creator()
{
    id_ = "";
    idIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

TestPlanDetail_creator::~TestPlanDetail_creator() = default;

void TestPlanDetail_creator::validate()
{
}

web::json::value TestPlanDetail_creator::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool TestPlanDetail_creator::fromJson(const web::json::value& val)
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


std::string TestPlanDetail_creator::getId() const
{
    return id_;
}

void TestPlanDetail_creator::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestPlanDetail_creator::idIsSet() const
{
    return idIsSet_;
}

void TestPlanDetail_creator::unsetid()
{
    idIsSet_ = false;
}

std::string TestPlanDetail_creator::getNickName() const
{
    return nickName_;
}

void TestPlanDetail_creator::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool TestPlanDetail_creator::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void TestPlanDetail_creator::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string TestPlanDetail_creator::getUserName() const
{
    return userName_;
}

void TestPlanDetail_creator::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool TestPlanDetail_creator::userNameIsSet() const
{
    return userNameIsSet_;
}

void TestPlanDetail_creator::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


