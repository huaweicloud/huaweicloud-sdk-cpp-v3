

#include "huaweicloud/modelarts/v1/model/ServerOsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerOsRequest::ServerOsRequest()
{
    adminPass_ = "";
    adminPassIsSet_ = false;
    keyPairName_ = "";
    keyPairNameIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

ServerOsRequest::~ServerOsRequest() = default;

void ServerOsRequest::validate()
{
}

web::json::value ServerOsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("admin_pass")] = ModelBase::toJson(adminPass_);
    }
    if(keyPairNameIsSet_) {
        val[utility::conversions::to_string_t("key_pair_name")] = ModelBase::toJson(keyPairName_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}
bool ServerOsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("admin_pass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_pass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_pair_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}


std::string ServerOsRequest::getAdminPass() const
{
    return adminPass_;
}

void ServerOsRequest::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool ServerOsRequest::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void ServerOsRequest::unsetadminPass()
{
    adminPassIsSet_ = false;
}

std::string ServerOsRequest::getKeyPairName() const
{
    return keyPairName_;
}

void ServerOsRequest::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool ServerOsRequest::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void ServerOsRequest::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string ServerOsRequest::getImageId() const
{
    return imageId_;
}

void ServerOsRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ServerOsRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ServerOsRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ServerOsRequest::getUserData() const
{
    return userData_;
}

void ServerOsRequest::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ServerOsRequest::userDataIsSet() const
{
    return userDataIsSet_;
}

void ServerOsRequest::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


