

#include "huaweicloud/identitycenterstore/v1/model/UpdateExternalIdPConfigurationForDirectoryReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateExternalIdPConfigurationForDirectoryReqBody::UpdateExternalIdPConfigurationForDirectoryReqBody()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    loginUrl_ = "";
    loginUrlIsSet_ = false;
}

UpdateExternalIdPConfigurationForDirectoryReqBody::~UpdateExternalIdPConfigurationForDirectoryReqBody() = default;

void UpdateExternalIdPConfigurationForDirectoryReqBody::validate()
{
}

web::json::value UpdateExternalIdPConfigurationForDirectoryReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(loginUrlIsSet_) {
        val[utility::conversions::to_string_t("login_url")] = ModelBase::toJson(loginUrl_);
    }

    return val;
}
bool UpdateExternalIdPConfigurationForDirectoryReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateExternalIdPConfigurationForDirectoryReqBody::getEntityId() const
{
    return entityId_;
}

void UpdateExternalIdPConfigurationForDirectoryReqBody::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryReqBody::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryReqBody::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string UpdateExternalIdPConfigurationForDirectoryReqBody::getLoginUrl() const
{
    return loginUrl_;
}

void UpdateExternalIdPConfigurationForDirectoryReqBody::setLoginUrl(const std::string& value)
{
    loginUrl_ = value;
    loginUrlIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryReqBody::loginUrlIsSet() const
{
    return loginUrlIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryReqBody::unsetloginUrl()
{
    loginUrlIsSet_ = false;
}

}
}
}
}
}


