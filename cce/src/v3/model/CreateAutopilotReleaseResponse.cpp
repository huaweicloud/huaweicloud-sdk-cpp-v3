

#include "huaweicloud/cce/v3/model/CreateAutopilotReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotReleaseResponse::CreateAutopilotReleaseResponse()
{
    chartName_ = "";
    chartNameIsSet_ = false;
    chartPublic_ = false;
    chartPublicIsSet_ = false;
    chartVersion_ = "";
    chartVersionIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    parameters_ = "";
    parametersIsSet_ = false;
    resources_ = "";
    resourcesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusDescription_ = "";
    statusDescriptionIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
    version_ = 0;
    versionIsSet_ = false;
}

CreateAutopilotReleaseResponse::~CreateAutopilotReleaseResponse() = default;

void CreateAutopilotReleaseResponse::validate()
{
}

web::json::value CreateAutopilotReleaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartNameIsSet_) {
        val[utility::conversions::to_string_t("chart_name")] = ModelBase::toJson(chartName_);
    }
    if(chartPublicIsSet_) {
        val[utility::conversions::to_string_t("chart_public")] = ModelBase::toJson(chartPublic_);
    }
    if(chartVersionIsSet_) {
        val[utility::conversions::to_string_t("chart_version")] = ModelBase::toJson(chartVersion_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusDescriptionIsSet_) {
        val[utility::conversions::to_string_t("status_description")] = ModelBase::toJson(statusDescription_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool CreateAutopilotReleaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chart_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chart_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chart_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotReleaseResponse::getChartName() const
{
    return chartName_;
}

void CreateAutopilotReleaseResponse::setChartName(const std::string& value)
{
    chartName_ = value;
    chartNameIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::chartNameIsSet() const
{
    return chartNameIsSet_;
}

void CreateAutopilotReleaseResponse::unsetchartName()
{
    chartNameIsSet_ = false;
}

bool CreateAutopilotReleaseResponse::isChartPublic() const
{
    return chartPublic_;
}

void CreateAutopilotReleaseResponse::setChartPublic(bool value)
{
    chartPublic_ = value;
    chartPublicIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::chartPublicIsSet() const
{
    return chartPublicIsSet_;
}

void CreateAutopilotReleaseResponse::unsetchartPublic()
{
    chartPublicIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getChartVersion() const
{
    return chartVersion_;
}

void CreateAutopilotReleaseResponse::setChartVersion(const std::string& value)
{
    chartVersion_ = value;
    chartVersionIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::chartVersionIsSet() const
{
    return chartVersionIsSet_;
}

void CreateAutopilotReleaseResponse::unsetchartVersion()
{
    chartVersionIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotReleaseResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotReleaseResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getClusterName() const
{
    return clusterName_;
}

void CreateAutopilotReleaseResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void CreateAutopilotReleaseResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getCreateAt() const
{
    return createAt_;
}

void CreateAutopilotReleaseResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void CreateAutopilotReleaseResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getDescription() const
{
    return description_;
}

void CreateAutopilotReleaseResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAutopilotReleaseResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getName() const
{
    return name_;
}

void CreateAutopilotReleaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAutopilotReleaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getNamespace() const
{
    return namespace_;
}

void CreateAutopilotReleaseResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateAutopilotReleaseResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getParameters() const
{
    return parameters_;
}

void CreateAutopilotReleaseResponse::setParameters(const std::string& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateAutopilotReleaseResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getResources() const
{
    return resources_;
}

void CreateAutopilotReleaseResponse::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void CreateAutopilotReleaseResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getStatus() const
{
    return status_;
}

void CreateAutopilotReleaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAutopilotReleaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getStatusDescription() const
{
    return statusDescription_;
}

void CreateAutopilotReleaseResponse::setStatusDescription(const std::string& value)
{
    statusDescription_ = value;
    statusDescriptionIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::statusDescriptionIsSet() const
{
    return statusDescriptionIsSet_;
}

void CreateAutopilotReleaseResponse::unsetstatusDescription()
{
    statusDescriptionIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getUpdateAt() const
{
    return updateAt_;
}

void CreateAutopilotReleaseResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CreateAutopilotReleaseResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string CreateAutopilotReleaseResponse::getValues() const
{
    return values_;
}

void CreateAutopilotReleaseResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void CreateAutopilotReleaseResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t CreateAutopilotReleaseResponse::getVersion() const
{
    return version_;
}

void CreateAutopilotReleaseResponse::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateAutopilotReleaseResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateAutopilotReleaseResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


