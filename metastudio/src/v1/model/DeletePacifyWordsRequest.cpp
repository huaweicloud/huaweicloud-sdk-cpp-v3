

#include "huaweicloud/metastudio/v1/model/DeletePacifyWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeletePacifyWordsRequest::DeletePacifyWordsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    pacifyWordsId_ = "";
    pacifyWordsIdIsSet_ = false;
}

DeletePacifyWordsRequest::~DeletePacifyWordsRequest() = default;

void DeletePacifyWordsRequest::validate()
{
}

web::json::value DeletePacifyWordsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(pacifyWordsIdIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_id")] = ModelBase::toJson(pacifyWordsId_);
    }

    return val;
}
bool DeletePacifyWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pacify_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWordsId(refVal);
        }
    }
    return ok;
}


std::string DeletePacifyWordsRequest::getAuthorization() const
{
    return authorization_;
}

void DeletePacifyWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeletePacifyWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeletePacifyWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeletePacifyWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeletePacifyWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeletePacifyWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeletePacifyWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeletePacifyWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeletePacifyWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeletePacifyWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeletePacifyWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeletePacifyWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeletePacifyWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeletePacifyWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeletePacifyWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeletePacifyWordsRequest::getPacifyWordsId() const
{
    return pacifyWordsId_;
}

void DeletePacifyWordsRequest::setPacifyWordsId(const std::string& value)
{
    pacifyWordsId_ = value;
    pacifyWordsIdIsSet_ = true;
}

bool DeletePacifyWordsRequest::pacifyWordsIdIsSet() const
{
    return pacifyWordsIdIsSet_;
}

void DeletePacifyWordsRequest::unsetpacifyWordsId()
{
    pacifyWordsIdIsSet_ = false;
}

}
}
}
}
}


