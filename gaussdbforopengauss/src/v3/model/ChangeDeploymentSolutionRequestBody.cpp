

#include "huaweicloud/gaussdbforopengauss/v3/model/ChangeDeploymentSolutionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ChangeDeploymentSolutionRequestBody::ChangeDeploymentSolutionRequestBody()
{
    solution_ = "";
    solutionIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    masterAz_ = "";
    masterAzIsSet_ = false;
    loggerAz_ = "";
    loggerAzIsSet_ = false;
}

ChangeDeploymentSolutionRequestBody::~ChangeDeploymentSolutionRequestBody() = default;

void ChangeDeploymentSolutionRequestBody::validate()
{
}

web::json::value ChangeDeploymentSolutionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(masterAzIsSet_) {
        val[utility::conversions::to_string_t("master_az")] = ModelBase::toJson(masterAz_);
    }
    if(loggerAzIsSet_) {
        val[utility::conversions::to_string_t("logger_az")] = ModelBase::toJson(loggerAz_);
    }

    return val;
}
bool ChangeDeploymentSolutionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logger_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logger_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoggerAz(refVal);
        }
    }
    return ok;
}


std::string ChangeDeploymentSolutionRequestBody::getSolution() const
{
    return solution_;
}

void ChangeDeploymentSolutionRequestBody::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool ChangeDeploymentSolutionRequestBody::solutionIsSet() const
{
    return solutionIsSet_;
}

void ChangeDeploymentSolutionRequestBody::unsetsolution()
{
    solutionIsSet_ = false;
}

std::string ChangeDeploymentSolutionRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ChangeDeploymentSolutionRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ChangeDeploymentSolutionRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ChangeDeploymentSolutionRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ChangeDeploymentSolutionRequestBody::getMasterAz() const
{
    return masterAz_;
}

void ChangeDeploymentSolutionRequestBody::setMasterAz(const std::string& value)
{
    masterAz_ = value;
    masterAzIsSet_ = true;
}

bool ChangeDeploymentSolutionRequestBody::masterAzIsSet() const
{
    return masterAzIsSet_;
}

void ChangeDeploymentSolutionRequestBody::unsetmasterAz()
{
    masterAzIsSet_ = false;
}

std::string ChangeDeploymentSolutionRequestBody::getLoggerAz() const
{
    return loggerAz_;
}

void ChangeDeploymentSolutionRequestBody::setLoggerAz(const std::string& value)
{
    loggerAz_ = value;
    loggerAzIsSet_ = true;
}

bool ChangeDeploymentSolutionRequestBody::loggerAzIsSet() const
{
    return loggerAzIsSet_;
}

void ChangeDeploymentSolutionRequestBody::unsetloggerAz()
{
    loggerAzIsSet_ = false;
}

}
}
}
}
}


