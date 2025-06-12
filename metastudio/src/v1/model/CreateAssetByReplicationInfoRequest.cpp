

#include "huaweicloud/metastudio/v1/model/CreateAssetByReplicationInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAssetByReplicationInfoRequest::CreateAssetByReplicationInfoRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetByReplicationInfoRequest::~CreateAssetByReplicationInfoRequest() = default;

void CreateAssetByReplicationInfoRequest::validate()
{
}

web::json::value CreateAssetByReplicationInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAssetByReplicationInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReplicationAssetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetByReplicationInfoRequest::getAuthorization() const
{
    return authorization_;
}

void CreateAssetByReplicationInfoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateAssetByReplicationInfoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateAssetByReplicationInfoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateAssetByReplicationInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetByReplicationInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetByReplicationInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetByReplicationInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateAssetByReplicationInfoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateAssetByReplicationInfoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateAssetByReplicationInfoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateAssetByReplicationInfoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ReplicationAssetInfo CreateAssetByReplicationInfoRequest::getBody() const
{
    return body_;
}

void CreateAssetByReplicationInfoRequest::setBody(const ReplicationAssetInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetByReplicationInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetByReplicationInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


