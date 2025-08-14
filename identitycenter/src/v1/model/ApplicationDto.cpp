

#include "huaweicloud/identitycenter/v1/model/ApplicationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationDto::ApplicationDto()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    applicationProviderUrn_ = "";
    applicationProviderUrnIsSet_ = false;
    assignmentConfigIsSet_ = false;
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instanceUrn_ = "";
    instanceUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    portalOptionsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    applicationAccount_ = "";
    applicationAccountIsSet_ = false;
}

ApplicationDto::~ApplicationDto() = default;

void ApplicationDto::validate()
{
}

web::json::value ApplicationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(applicationProviderUrnIsSet_) {
        val[utility::conversions::to_string_t("application_provider_urn")] = ModelBase::toJson(applicationProviderUrn_);
    }
    if(assignmentConfigIsSet_) {
        val[utility::conversions::to_string_t("assignment_config")] = ModelBase::toJson(assignmentConfig_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instanceUrnIsSet_) {
        val[utility::conversions::to_string_t("instance_urn")] = ModelBase::toJson(instanceUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(portalOptionsIsSet_) {
        val[utility::conversions::to_string_t("portal_options")] = ModelBase::toJson(portalOptions_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(applicationAccountIsSet_) {
        val[utility::conversions::to_string_t("application_account")] = ModelBase::toJson(applicationAccount_);
    }

    return val;
}
bool ApplicationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_provider_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_provider_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProviderUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignment_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignment_config"));
        if(!fieldValue.is_null())
        {
            AssignmentConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignmentConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("portal_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portal_options"));
        if(!fieldValue.is_null())
        {
            PortalOptionsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortalOptions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("application_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationAccount(refVal);
        }
    }
    return ok;
}


std::string ApplicationDto::getApplicationUrn() const
{
    return applicationUrn_;
}

void ApplicationDto::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool ApplicationDto::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void ApplicationDto::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

std::string ApplicationDto::getApplicationProviderUrn() const
{
    return applicationProviderUrn_;
}

void ApplicationDto::setApplicationProviderUrn(const std::string& value)
{
    applicationProviderUrn_ = value;
    applicationProviderUrnIsSet_ = true;
}

bool ApplicationDto::applicationProviderUrnIsSet() const
{
    return applicationProviderUrnIsSet_;
}

void ApplicationDto::unsetapplicationProviderUrn()
{
    applicationProviderUrnIsSet_ = false;
}

AssignmentConfigDto ApplicationDto::getAssignmentConfig() const
{
    return assignmentConfig_;
}

void ApplicationDto::setAssignmentConfig(const AssignmentConfigDto& value)
{
    assignmentConfig_ = value;
    assignmentConfigIsSet_ = true;
}

bool ApplicationDto::assignmentConfigIsSet() const
{
    return assignmentConfigIsSet_;
}

void ApplicationDto::unsetassignmentConfig()
{
    assignmentConfigIsSet_ = false;
}

int64_t ApplicationDto::getCreatedDate() const
{
    return createdDate_;
}

void ApplicationDto::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ApplicationDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ApplicationDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ApplicationDto::getDescription() const
{
    return description_;
}

void ApplicationDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ApplicationDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ApplicationDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ApplicationDto::getInstanceUrn() const
{
    return instanceUrn_;
}

void ApplicationDto::setInstanceUrn(const std::string& value)
{
    instanceUrn_ = value;
    instanceUrnIsSet_ = true;
}

bool ApplicationDto::instanceUrnIsSet() const
{
    return instanceUrnIsSet_;
}

void ApplicationDto::unsetinstanceUrn()
{
    instanceUrnIsSet_ = false;
}

std::string ApplicationDto::getName() const
{
    return name_;
}

void ApplicationDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicationDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicationDto::unsetname()
{
    nameIsSet_ = false;
}

PortalOptionsDto ApplicationDto::getPortalOptions() const
{
    return portalOptions_;
}

void ApplicationDto::setPortalOptions(const PortalOptionsDto& value)
{
    portalOptions_ = value;
    portalOptionsIsSet_ = true;
}

bool ApplicationDto::portalOptionsIsSet() const
{
    return portalOptionsIsSet_;
}

void ApplicationDto::unsetportalOptions()
{
    portalOptionsIsSet_ = false;
}

std::string ApplicationDto::getStatus() const
{
    return status_;
}

void ApplicationDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplicationDto::statusIsSet() const
{
    return statusIsSet_;
}

void ApplicationDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApplicationDto::getApplicationAccount() const
{
    return applicationAccount_;
}

void ApplicationDto::setApplicationAccount(const std::string& value)
{
    applicationAccount_ = value;
    applicationAccountIsSet_ = true;
}

bool ApplicationDto::applicationAccountIsSet() const
{
    return applicationAccountIsSet_;
}

void ApplicationDto::unsetapplicationAccount()
{
    applicationAccountIsSet_ = false;
}

}
}
}
}
}


