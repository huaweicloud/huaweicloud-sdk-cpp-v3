

#include "huaweicloud/cce/v3/model/UpdateReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateReleaseResponse::UpdateReleaseResponse()
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

UpdateReleaseResponse::~UpdateReleaseResponse() = default;

void UpdateReleaseResponse::validate()
{
}

web::json::value UpdateReleaseResponse::toJson() const
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
bool UpdateReleaseResponse::fromJson(const web::json::value& val)
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


std::string UpdateReleaseResponse::getChartName() const
{
    return chartName_;
}

void UpdateReleaseResponse::setChartName(const std::string& value)
{
    chartName_ = value;
    chartNameIsSet_ = true;
}

bool UpdateReleaseResponse::chartNameIsSet() const
{
    return chartNameIsSet_;
}

void UpdateReleaseResponse::unsetchartName()
{
    chartNameIsSet_ = false;
}

bool UpdateReleaseResponse::isChartPublic() const
{
    return chartPublic_;
}

void UpdateReleaseResponse::setChartPublic(bool value)
{
    chartPublic_ = value;
    chartPublicIsSet_ = true;
}

bool UpdateReleaseResponse::chartPublicIsSet() const
{
    return chartPublicIsSet_;
}

void UpdateReleaseResponse::unsetchartPublic()
{
    chartPublicIsSet_ = false;
}

std::string UpdateReleaseResponse::getChartVersion() const
{
    return chartVersion_;
}

void UpdateReleaseResponse::setChartVersion(const std::string& value)
{
    chartVersion_ = value;
    chartVersionIsSet_ = true;
}

bool UpdateReleaseResponse::chartVersionIsSet() const
{
    return chartVersionIsSet_;
}

void UpdateReleaseResponse::unsetchartVersion()
{
    chartVersionIsSet_ = false;
}

std::string UpdateReleaseResponse::getClusterId() const
{
    return clusterId_;
}

void UpdateReleaseResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateReleaseResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateReleaseResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateReleaseResponse::getClusterName() const
{
    return clusterName_;
}

void UpdateReleaseResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool UpdateReleaseResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void UpdateReleaseResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string UpdateReleaseResponse::getCreateAt() const
{
    return createAt_;
}

void UpdateReleaseResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool UpdateReleaseResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void UpdateReleaseResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string UpdateReleaseResponse::getDescription() const
{
    return description_;
}

void UpdateReleaseResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateReleaseResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateReleaseResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateReleaseResponse::getName() const
{
    return name_;
}

void UpdateReleaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateReleaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateReleaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateReleaseResponse::getNamespace() const
{
    return namespace_;
}

void UpdateReleaseResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool UpdateReleaseResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void UpdateReleaseResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string UpdateReleaseResponse::getParameters() const
{
    return parameters_;
}

void UpdateReleaseResponse::setParameters(const std::string& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpdateReleaseResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpdateReleaseResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string UpdateReleaseResponse::getResources() const
{
    return resources_;
}

void UpdateReleaseResponse::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool UpdateReleaseResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void UpdateReleaseResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string UpdateReleaseResponse::getStatus() const
{
    return status_;
}

void UpdateReleaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateReleaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateReleaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateReleaseResponse::getStatusDescription() const
{
    return statusDescription_;
}

void UpdateReleaseResponse::setStatusDescription(const std::string& value)
{
    statusDescription_ = value;
    statusDescriptionIsSet_ = true;
}

bool UpdateReleaseResponse::statusDescriptionIsSet() const
{
    return statusDescriptionIsSet_;
}

void UpdateReleaseResponse::unsetstatusDescription()
{
    statusDescriptionIsSet_ = false;
}

std::string UpdateReleaseResponse::getUpdateAt() const
{
    return updateAt_;
}

void UpdateReleaseResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool UpdateReleaseResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void UpdateReleaseResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string UpdateReleaseResponse::getValues() const
{
    return values_;
}

void UpdateReleaseResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool UpdateReleaseResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void UpdateReleaseResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t UpdateReleaseResponse::getVersion() const
{
    return version_;
}

void UpdateReleaseResponse::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateReleaseResponse::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateReleaseResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


