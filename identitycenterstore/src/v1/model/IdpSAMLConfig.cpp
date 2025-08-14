

#include "huaweicloud/identitycenterstore/v1/model/IdpSAMLConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IdpSAMLConfig::IdpSAMLConfig()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    loginUrl_ = "";
    loginUrlIsSet_ = false;
    wantRequestSigned_ = false;
    wantRequestSignedIsSet_ = false;
}

IdpSAMLConfig::~IdpSAMLConfig() = default;

void IdpSAMLConfig::validate()
{
}

web::json::value IdpSAMLConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(loginUrlIsSet_) {
        val[utility::conversions::to_string_t("login_url")] = ModelBase::toJson(loginUrl_);
    }
    if(wantRequestSignedIsSet_) {
        val[utility::conversions::to_string_t("want_request_signed")] = ModelBase::toJson(wantRequestSigned_);
    }

    return val;
}
bool IdpSAMLConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoginUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("want_request_signed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("want_request_signed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWantRequestSigned(refVal);
        }
    }
    return ok;
}


std::string IdpSAMLConfig::getEntityId() const
{
    return entityId_;
}

void IdpSAMLConfig::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool IdpSAMLConfig::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void IdpSAMLConfig::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string IdpSAMLConfig::getLoginUrl() const
{
    return loginUrl_;
}

void IdpSAMLConfig::setLoginUrl(const std::string& value)
{
    loginUrl_ = value;
    loginUrlIsSet_ = true;
}

bool IdpSAMLConfig::loginUrlIsSet() const
{
    return loginUrlIsSet_;
}

void IdpSAMLConfig::unsetloginUrl()
{
    loginUrlIsSet_ = false;
}

bool IdpSAMLConfig::isWantRequestSigned() const
{
    return wantRequestSigned_;
}

void IdpSAMLConfig::setWantRequestSigned(bool value)
{
    wantRequestSigned_ = value;
    wantRequestSignedIsSet_ = true;
}

bool IdpSAMLConfig::wantRequestSignedIsSet() const
{
    return wantRequestSignedIsSet_;
}

void IdpSAMLConfig::unsetwantRequestSigned()
{
    wantRequestSignedIsSet_ = false;
}

}
}
}
}
}


