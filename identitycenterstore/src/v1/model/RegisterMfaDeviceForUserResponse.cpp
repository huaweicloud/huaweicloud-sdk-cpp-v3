

#include "huaweicloud/identitycenterstore/v1/model/RegisterMfaDeviceForUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




RegisterMfaDeviceForUserResponse::RegisterMfaDeviceForUserResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    workFlow_ = "";
    workFlowIsSet_ = false;
    redirectUrl_ = "";
    redirectUrlIsSet_ = false;
}

RegisterMfaDeviceForUserResponse::~RegisterMfaDeviceForUserResponse() = default;

void RegisterMfaDeviceForUserResponse::validate()
{
}

web::json::value RegisterMfaDeviceForUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(workFlowIsSet_) {
        val[utility::conversions::to_string_t("work_flow")] = ModelBase::toJson(workFlow_);
    }
    if(redirectUrlIsSet_) {
        val[utility::conversions::to_string_t("redirect_url")] = ModelBase::toJson(redirectUrl_);
    }

    return val;
}
bool RegisterMfaDeviceForUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_flow"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redirect_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redirect_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedirectUrl(refVal);
        }
    }
    return ok;
}


std::string RegisterMfaDeviceForUserResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void RegisterMfaDeviceForUserResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool RegisterMfaDeviceForUserResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void RegisterMfaDeviceForUserResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string RegisterMfaDeviceForUserResponse::getUserId() const
{
    return userId_;
}

void RegisterMfaDeviceForUserResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RegisterMfaDeviceForUserResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void RegisterMfaDeviceForUserResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string RegisterMfaDeviceForUserResponse::getWorkFlow() const
{
    return workFlow_;
}

void RegisterMfaDeviceForUserResponse::setWorkFlow(const std::string& value)
{
    workFlow_ = value;
    workFlowIsSet_ = true;
}

bool RegisterMfaDeviceForUserResponse::workFlowIsSet() const
{
    return workFlowIsSet_;
}

void RegisterMfaDeviceForUserResponse::unsetworkFlow()
{
    workFlowIsSet_ = false;
}

std::string RegisterMfaDeviceForUserResponse::getRedirectUrl() const
{
    return redirectUrl_;
}

void RegisterMfaDeviceForUserResponse::setRedirectUrl(const std::string& value)
{
    redirectUrl_ = value;
    redirectUrlIsSet_ = true;
}

bool RegisterMfaDeviceForUserResponse::redirectUrlIsSet() const
{
    return redirectUrlIsSet_;
}

void RegisterMfaDeviceForUserResponse::unsetredirectUrl()
{
    redirectUrlIsSet_ = false;
}

}
}
}
}
}


