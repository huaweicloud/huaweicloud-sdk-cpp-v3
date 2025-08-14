

#include "huaweicloud/identitycenter/v1/model/ApplicationAssignmentDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationAssignmentDto::ApplicationAssignmentDto()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
}

ApplicationAssignmentDto::~ApplicationAssignmentDto() = default;

void ApplicationAssignmentDto::validate()
{
}

web::json::value ApplicationAssignmentDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
    }

    return val;
}
bool ApplicationAssignmentDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
        }
    }
    return ok;
}


std::string ApplicationAssignmentDto::getApplicationUrn() const
{
    return applicationUrn_;
}

void ApplicationAssignmentDto::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool ApplicationAssignmentDto::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void ApplicationAssignmentDto::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

std::string ApplicationAssignmentDto::getPrincipalId() const
{
    return principalId_;
}

void ApplicationAssignmentDto::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool ApplicationAssignmentDto::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void ApplicationAssignmentDto::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string ApplicationAssignmentDto::getPrincipalType() const
{
    return principalType_;
}

void ApplicationAssignmentDto::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool ApplicationAssignmentDto::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void ApplicationAssignmentDto::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

}
}
}
}
}


