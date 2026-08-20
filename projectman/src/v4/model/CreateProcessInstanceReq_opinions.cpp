

#include "huaweicloud/projectman/v4/model/CreateProcessInstanceReq_opinions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProcessInstanceReq_opinions::CreateProcessInstanceReq_opinions()
{
    userId_ = "";
    userIdIsSet_ = false;
    currOwner_ = "";
    currOwnerIsSet_ = false;
}

CreateProcessInstanceReq_opinions::~CreateProcessInstanceReq_opinions() = default;

void CreateProcessInstanceReq_opinions::validate()
{
}

web::json::value CreateProcessInstanceReq_opinions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(currOwnerIsSet_) {
        val[utility::conversions::to_string_t("curr_owner")] = ModelBase::toJson(currOwner_);
    }

    return val;
}
bool CreateProcessInstanceReq_opinions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("curr_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curr_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrOwner(refVal);
        }
    }
    return ok;
}


std::string CreateProcessInstanceReq_opinions::getUserId() const
{
    return userId_;
}

void CreateProcessInstanceReq_opinions::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateProcessInstanceReq_opinions::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateProcessInstanceReq_opinions::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string CreateProcessInstanceReq_opinions::getCurrOwner() const
{
    return currOwner_;
}

void CreateProcessInstanceReq_opinions::setCurrOwner(const std::string& value)
{
    currOwner_ = value;
    currOwnerIsSet_ = true;
}

bool CreateProcessInstanceReq_opinions::currOwnerIsSet() const
{
    return currOwnerIsSet_;
}

void CreateProcessInstanceReq_opinions::unsetcurrOwner()
{
    currOwnerIsSet_ = false;
}

}
}
}
}
}


