

#include "huaweicloud/identitycenter/v1/model/DescribeApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeApplicationResponse::DescribeApplicationResponse()
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

DescribeApplicationResponse::~DescribeApplicationResponse() = default;

void DescribeApplicationResponse::validate()
{
}

web::json::value DescribeApplicationResponse::toJson() const
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
bool DescribeApplicationResponse::fromJson(const web::json::value& val)
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


std::string DescribeApplicationResponse::getApplicationUrn() const
{
    return applicationUrn_;
}

void DescribeApplicationResponse::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool DescribeApplicationResponse::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void DescribeApplicationResponse::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

std::string DescribeApplicationResponse::getApplicationProviderUrn() const
{
    return applicationProviderUrn_;
}

void DescribeApplicationResponse::setApplicationProviderUrn(const std::string& value)
{
    applicationProviderUrn_ = value;
    applicationProviderUrnIsSet_ = true;
}

bool DescribeApplicationResponse::applicationProviderUrnIsSet() const
{
    return applicationProviderUrnIsSet_;
}

void DescribeApplicationResponse::unsetapplicationProviderUrn()
{
    applicationProviderUrnIsSet_ = false;
}

AssignmentConfigDto DescribeApplicationResponse::getAssignmentConfig() const
{
    return assignmentConfig_;
}

void DescribeApplicationResponse::setAssignmentConfig(const AssignmentConfigDto& value)
{
    assignmentConfig_ = value;
    assignmentConfigIsSet_ = true;
}

bool DescribeApplicationResponse::assignmentConfigIsSet() const
{
    return assignmentConfigIsSet_;
}

void DescribeApplicationResponse::unsetassignmentConfig()
{
    assignmentConfigIsSet_ = false;
}

int64_t DescribeApplicationResponse::getCreatedDate() const
{
    return createdDate_;
}

void DescribeApplicationResponse::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool DescribeApplicationResponse::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void DescribeApplicationResponse::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string DescribeApplicationResponse::getDescription() const
{
    return description_;
}

void DescribeApplicationResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DescribeApplicationResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DescribeApplicationResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DescribeApplicationResponse::getInstanceUrn() const
{
    return instanceUrn_;
}

void DescribeApplicationResponse::setInstanceUrn(const std::string& value)
{
    instanceUrn_ = value;
    instanceUrnIsSet_ = true;
}

bool DescribeApplicationResponse::instanceUrnIsSet() const
{
    return instanceUrnIsSet_;
}

void DescribeApplicationResponse::unsetinstanceUrn()
{
    instanceUrnIsSet_ = false;
}

std::string DescribeApplicationResponse::getName() const
{
    return name_;
}

void DescribeApplicationResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DescribeApplicationResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DescribeApplicationResponse::unsetname()
{
    nameIsSet_ = false;
}

PortalOptionsDto DescribeApplicationResponse::getPortalOptions() const
{
    return portalOptions_;
}

void DescribeApplicationResponse::setPortalOptions(const PortalOptionsDto& value)
{
    portalOptions_ = value;
    portalOptionsIsSet_ = true;
}

bool DescribeApplicationResponse::portalOptionsIsSet() const
{
    return portalOptionsIsSet_;
}

void DescribeApplicationResponse::unsetportalOptions()
{
    portalOptionsIsSet_ = false;
}

std::string DescribeApplicationResponse::getStatus() const
{
    return status_;
}

void DescribeApplicationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DescribeApplicationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DescribeApplicationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DescribeApplicationResponse::getApplicationAccount() const
{
    return applicationAccount_;
}

void DescribeApplicationResponse::setApplicationAccount(const std::string& value)
{
    applicationAccount_ = value;
    applicationAccountIsSet_ = true;
}

bool DescribeApplicationResponse::applicationAccountIsSet() const
{
    return applicationAccountIsSet_;
}

void DescribeApplicationResponse::unsetapplicationAccount()
{
    applicationAccountIsSet_ = false;
}

}
}
}
}
}


