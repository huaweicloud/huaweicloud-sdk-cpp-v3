

#include "huaweicloud/cce/v3/model/DeleteReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteReleaseResponse::DeleteReleaseResponse()
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

DeleteReleaseResponse::~DeleteReleaseResponse() = default;

void DeleteReleaseResponse::validate()
{
}

web::json::value DeleteReleaseResponse::toJson() const
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
bool DeleteReleaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteReleaseResponse::getChartName() const
{
    return chartName_;
}

void DeleteReleaseResponse::setChartName(const std::string& value)
{
    chartName_ = value;
    chartNameIsSet_ = true;
}

bool DeleteReleaseResponse::chartNameIsSet() const
{
    return chartNameIsSet_;
}

void DeleteReleaseResponse::unsetchartName()
{
    chartNameIsSet_ = false;
}

bool DeleteReleaseResponse::isChartPublic() const
{
    return chartPublic_;
}

void DeleteReleaseResponse::setChartPublic(bool value)
{
    chartPublic_ = value;
    chartPublicIsSet_ = true;
}

bool DeleteReleaseResponse::chartPublicIsSet() const
{
    return chartPublicIsSet_;
}

void DeleteReleaseResponse::unsetchartPublic()
{
    chartPublicIsSet_ = false;
}

std::string DeleteReleaseResponse::getChartVersion() const
{
    return chartVersion_;
}

void DeleteReleaseResponse::setChartVersion(const std::string& value)
{
    chartVersion_ = value;
    chartVersionIsSet_ = true;
}

bool DeleteReleaseResponse::chartVersionIsSet() const
{
    return chartVersionIsSet_;
}

void DeleteReleaseResponse::unsetchartVersion()
{
    chartVersionIsSet_ = false;
}

std::string DeleteReleaseResponse::getClusterId() const
{
    return clusterId_;
}

void DeleteReleaseResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteReleaseResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteReleaseResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteReleaseResponse::getClusterName() const
{
    return clusterName_;
}

void DeleteReleaseResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool DeleteReleaseResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void DeleteReleaseResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string DeleteReleaseResponse::getCreateAt() const
{
    return createAt_;
}

void DeleteReleaseResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DeleteReleaseResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DeleteReleaseResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string DeleteReleaseResponse::getDescription() const
{
    return description_;
}

void DeleteReleaseResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeleteReleaseResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeleteReleaseResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DeleteReleaseResponse::getName() const
{
    return name_;
}

void DeleteReleaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteReleaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteReleaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteReleaseResponse::getNamespace() const
{
    return namespace_;
}

void DeleteReleaseResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool DeleteReleaseResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void DeleteReleaseResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string DeleteReleaseResponse::getParameters() const
{
    return parameters_;
}

void DeleteReleaseResponse::setParameters(const std::string& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool DeleteReleaseResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void DeleteReleaseResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string DeleteReleaseResponse::getResources() const
{
    return resources_;
}

void DeleteReleaseResponse::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool DeleteReleaseResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void DeleteReleaseResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string DeleteReleaseResponse::getStatus() const
{
    return status_;
}

void DeleteReleaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteReleaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteReleaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteReleaseResponse::getStatusDescription() const
{
    return statusDescription_;
}

void DeleteReleaseResponse::setStatusDescription(const std::string& value)
{
    statusDescription_ = value;
    statusDescriptionIsSet_ = true;
}

bool DeleteReleaseResponse::statusDescriptionIsSet() const
{
    return statusDescriptionIsSet_;
}

void DeleteReleaseResponse::unsetstatusDescription()
{
    statusDescriptionIsSet_ = false;
}

std::string DeleteReleaseResponse::getUpdateAt() const
{
    return updateAt_;
}

void DeleteReleaseResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DeleteReleaseResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DeleteReleaseResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string DeleteReleaseResponse::getValues() const
{
    return values_;
}

void DeleteReleaseResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool DeleteReleaseResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void DeleteReleaseResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t DeleteReleaseResponse::getVersion() const
{
    return version_;
}

void DeleteReleaseResponse::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeleteReleaseResponse::versionIsSet() const
{
    return versionIsSet_;
}

void DeleteReleaseResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


