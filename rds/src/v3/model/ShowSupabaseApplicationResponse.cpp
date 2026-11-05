

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationResponse::ShowSupabaseApplicationResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    storageComponentIsSet_ = false;
    managedInstanceIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
}

ShowSupabaseApplicationResponse::~ShowSupabaseApplicationResponse() = default;

void ShowSupabaseApplicationResponse::validate()
{
}

web::json::value ShowSupabaseApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(storageComponentIsSet_) {
        val[utility::conversions::to_string_t("storage_component")] = ModelBase::toJson(storageComponent_);
    }
    if(managedInstanceIsSet_) {
        val[utility::conversions::to_string_t("managed_instance")] = ModelBase::toJson(managedInstance_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }

    return val;
}
bool ShowSupabaseApplicationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_component"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_component"));
        if(!fieldValue.is_null())
        {
            SupabaseStorageComponentInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageComponent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managed_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_instance"));
        if(!fieldValue.is_null())
        {
            SupabaseManagedInstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    return ok;
}


std::string ShowSupabaseApplicationResponse::getId() const
{
    return id_;
}

void ShowSupabaseApplicationResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowSupabaseApplicationResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowSupabaseApplicationResponse::getName() const
{
    return name_;
}

void ShowSupabaseApplicationResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowSupabaseApplicationResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowSupabaseApplicationResponse::getStatus() const
{
    return status_;
}

void ShowSupabaseApplicationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSupabaseApplicationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool ShowSupabaseApplicationResponse::isEnableSsl() const
{
    return enableSsl_;
}

void ShowSupabaseApplicationResponse::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void ShowSupabaseApplicationResponse::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::string ShowSupabaseApplicationResponse::getCertId() const
{
    return certId_;
}

void ShowSupabaseApplicationResponse::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::certIdIsSet() const
{
    return certIdIsSet_;
}

void ShowSupabaseApplicationResponse::unsetcertId()
{
    certIdIsSet_ = false;
}

std::string ShowSupabaseApplicationResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ShowSupabaseApplicationResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ShowSupabaseApplicationResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

SupabaseStorageComponentInfo ShowSupabaseApplicationResponse::getStorageComponent() const
{
    return storageComponent_;
}

void ShowSupabaseApplicationResponse::setStorageComponent(const SupabaseStorageComponentInfo& value)
{
    storageComponent_ = value;
    storageComponentIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::storageComponentIsSet() const
{
    return storageComponentIsSet_;
}

void ShowSupabaseApplicationResponse::unsetstorageComponent()
{
    storageComponentIsSet_ = false;
}

SupabaseManagedInstanceInfo ShowSupabaseApplicationResponse::getManagedInstance() const
{
    return managedInstance_;
}

void ShowSupabaseApplicationResponse::setManagedInstance(const SupabaseManagedInstanceInfo& value)
{
    managedInstance_ = value;
    managedInstanceIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::managedInstanceIsSet() const
{
    return managedInstanceIsSet_;
}

void ShowSupabaseApplicationResponse::unsetmanagedInstance()
{
    managedInstanceIsSet_ = false;
}

int64_t ShowSupabaseApplicationResponse::getUpdatedTime() const
{
    return updatedTime_;
}

void ShowSupabaseApplicationResponse::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ShowSupabaseApplicationResponse::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ShowSupabaseApplicationResponse::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

}
}
}
}
}


