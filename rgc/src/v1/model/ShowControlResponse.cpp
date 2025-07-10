

#include "huaweicloud/rgc/v1/model/ShowControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlResponse::ShowControlResponse()
{
    identifier_ = "";
    identifierIsSet_ = false;
    implementation_ = "";
    implementationIsSet_ = false;
    guidance_ = "";
    guidanceIsSet_ = false;
    resourceIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    behavior_ = "";
    behaviorIsSet_ = false;
    controlObjective_ = "";
    controlObjectiveIsSet_ = false;
    frameworkIsSet_ = false;
    artifactsIsSet_ = false;
    aliasesIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    releaseDate_ = utility::datetime();
    releaseDateIsSet_ = false;
}

ShowControlResponse::~ShowControlResponse() = default;

void ShowControlResponse::validate()
{
}

web::json::value ShowControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(implementationIsSet_) {
        val[utility::conversions::to_string_t("implementation")] = ModelBase::toJson(implementation_);
    }
    if(guidanceIsSet_) {
        val[utility::conversions::to_string_t("guidance")] = ModelBase::toJson(guidance_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(behaviorIsSet_) {
        val[utility::conversions::to_string_t("behavior")] = ModelBase::toJson(behavior_);
    }
    if(controlObjectiveIsSet_) {
        val[utility::conversions::to_string_t("control_objective")] = ModelBase::toJson(controlObjective_);
    }
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(artifactsIsSet_) {
        val[utility::conversions::to_string_t("artifacts")] = ModelBase::toJson(artifacts_);
    }
    if(aliasesIsSet_) {
        val[utility::conversions::to_string_t("aliases")] = ModelBase::toJson(aliases_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(releaseDateIsSet_) {
        val[utility::conversions::to_string_t("release_date")] = ModelBase::toJson(releaseDate_);
    }

    return val;
}
bool ShowControlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("implementation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("implementation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImplementation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guidance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guidance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuidance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBehavior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_objective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_objective"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlObjective(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("framework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("framework"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFramework(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifacts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifacts"));
        if(!fieldValue.is_null())
        {
            std::vector<Artifact> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifacts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aliases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aliases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDate(refVal);
        }
    }
    return ok;
}


std::string ShowControlResponse::getIdentifier() const
{
    return identifier_;
}

void ShowControlResponse::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool ShowControlResponse::identifierIsSet() const
{
    return identifierIsSet_;
}

void ShowControlResponse::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string ShowControlResponse::getImplementation() const
{
    return implementation_;
}

void ShowControlResponse::setImplementation(const std::string& value)
{
    implementation_ = value;
    implementationIsSet_ = true;
}

bool ShowControlResponse::implementationIsSet() const
{
    return implementationIsSet_;
}

void ShowControlResponse::unsetimplementation()
{
    implementationIsSet_ = false;
}

std::string ShowControlResponse::getGuidance() const
{
    return guidance_;
}

void ShowControlResponse::setGuidance(const std::string& value)
{
    guidance_ = value;
    guidanceIsSet_ = true;
}

bool ShowControlResponse::guidanceIsSet() const
{
    return guidanceIsSet_;
}

void ShowControlResponse::unsetguidance()
{
    guidanceIsSet_ = false;
}

std::vector<std::string>& ShowControlResponse::getResource()
{
    return resource_;
}

void ShowControlResponse::setResource(const std::vector<std::string>& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ShowControlResponse::resourceIsSet() const
{
    return resourceIsSet_;
}

void ShowControlResponse::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ShowControlResponse::getService() const
{
    return service_;
}

void ShowControlResponse::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool ShowControlResponse::serviceIsSet() const
{
    return serviceIsSet_;
}

void ShowControlResponse::unsetservice()
{
    serviceIsSet_ = false;
}

std::string ShowControlResponse::getBehavior() const
{
    return behavior_;
}

void ShowControlResponse::setBehavior(const std::string& value)
{
    behavior_ = value;
    behaviorIsSet_ = true;
}

bool ShowControlResponse::behaviorIsSet() const
{
    return behaviorIsSet_;
}

void ShowControlResponse::unsetbehavior()
{
    behaviorIsSet_ = false;
}

std::string ShowControlResponse::getControlObjective() const
{
    return controlObjective_;
}

void ShowControlResponse::setControlObjective(const std::string& value)
{
    controlObjective_ = value;
    controlObjectiveIsSet_ = true;
}

bool ShowControlResponse::controlObjectiveIsSet() const
{
    return controlObjectiveIsSet_;
}

void ShowControlResponse::unsetcontrolObjective()
{
    controlObjectiveIsSet_ = false;
}

std::vector<std::string>& ShowControlResponse::getFramework()
{
    return framework_;
}

void ShowControlResponse::setFramework(const std::vector<std::string>& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool ShowControlResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void ShowControlResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::vector<Artifact>& ShowControlResponse::getArtifacts()
{
    return artifacts_;
}

void ShowControlResponse::setArtifacts(const std::vector<Artifact>& value)
{
    artifacts_ = value;
    artifactsIsSet_ = true;
}

bool ShowControlResponse::artifactsIsSet() const
{
    return artifactsIsSet_;
}

void ShowControlResponse::unsetartifacts()
{
    artifactsIsSet_ = false;
}

std::vector<std::string>& ShowControlResponse::getAliases()
{
    return aliases_;
}

void ShowControlResponse::setAliases(const std::vector<std::string>& value)
{
    aliases_ = value;
    aliasesIsSet_ = true;
}

bool ShowControlResponse::aliasesIsSet() const
{
    return aliasesIsSet_;
}

void ShowControlResponse::unsetaliases()
{
    aliasesIsSet_ = false;
}

std::string ShowControlResponse::getOwner() const
{
    return owner_;
}

void ShowControlResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowControlResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowControlResponse::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ShowControlResponse::getSeverity() const
{
    return severity_;
}

void ShowControlResponse::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ShowControlResponse::severityIsSet() const
{
    return severityIsSet_;
}

void ShowControlResponse::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ShowControlResponse::getVersion() const
{
    return version_;
}

void ShowControlResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowControlResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowControlResponse::unsetversion()
{
    versionIsSet_ = false;
}

utility::datetime ShowControlResponse::getReleaseDate() const
{
    return releaseDate_;
}

void ShowControlResponse::setReleaseDate(const utility::datetime& value)
{
    releaseDate_ = value;
    releaseDateIsSet_ = true;
}

bool ShowControlResponse::releaseDateIsSet() const
{
    return releaseDateIsSet_;
}

void ShowControlResponse::unsetreleaseDate()
{
    releaseDateIsSet_ = false;
}

}
}
}
}
}


