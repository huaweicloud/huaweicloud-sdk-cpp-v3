

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowDeploymentFormRequest::ShowDeploymentFormRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    solution_ = "";
    solutionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    consistency_ = "";
    consistencyIsSet_ = false;
    consistencyProtocol_ = "";
    consistencyProtocolIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
}

ShowDeploymentFormRequest::~ShowDeploymentFormRequest() = default;

void ShowDeploymentFormRequest::validate()
{
}

web::json::value ShowDeploymentFormRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(consistencyIsSet_) {
        val[utility::conversions::to_string_t("consistency")] = ModelBase::toJson(consistency_);
    }
    if(consistencyProtocolIsSet_) {
        val[utility::conversions::to_string_t("consistency_protocol")] = ModelBase::toJson(consistencyProtocol_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }

    return val;
}
bool ShowDeploymentFormRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistency_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistencyProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    return ok;
}


std::string ShowDeploymentFormRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDeploymentFormRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDeploymentFormRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDeploymentFormRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDeploymentFormRequest::getSolution() const
{
    return solution_;
}

void ShowDeploymentFormRequest::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool ShowDeploymentFormRequest::solutionIsSet() const
{
    return solutionIsSet_;
}

void ShowDeploymentFormRequest::unsetsolution()
{
    solutionIsSet_ = false;
}

std::string ShowDeploymentFormRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeploymentFormRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeploymentFormRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeploymentFormRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeploymentFormRequest::getConsistency() const
{
    return consistency_;
}

void ShowDeploymentFormRequest::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool ShowDeploymentFormRequest::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void ShowDeploymentFormRequest::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string ShowDeploymentFormRequest::getConsistencyProtocol() const
{
    return consistencyProtocol_;
}

void ShowDeploymentFormRequest::setConsistencyProtocol(const std::string& value)
{
    consistencyProtocol_ = value;
    consistencyProtocolIsSet_ = true;
}

bool ShowDeploymentFormRequest::consistencyProtocolIsSet() const
{
    return consistencyProtocolIsSet_;
}

void ShowDeploymentFormRequest::unsetconsistencyProtocol()
{
    consistencyProtocolIsSet_ = false;
}

std::string ShowDeploymentFormRequest::getEngineVersion() const
{
    return engineVersion_;
}

void ShowDeploymentFormRequest::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ShowDeploymentFormRequest::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ShowDeploymentFormRequest::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

}
}
}
}
}


