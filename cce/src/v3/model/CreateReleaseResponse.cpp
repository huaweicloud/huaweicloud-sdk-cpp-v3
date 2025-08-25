

#include "huaweicloud/cce/v3/model/CreateReleaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateReleaseResponse::CreateReleaseResponse()
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

CreateReleaseResponse::~CreateReleaseResponse() = default;

void CreateReleaseResponse::validate()
{
}

web::json::value CreateReleaseResponse::toJson() const
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
bool CreateReleaseResponse::fromJson(const web::json::value& val)
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


std::string CreateReleaseResponse::getChartName() const
{
    return chartName_;
}

void CreateReleaseResponse::setChartName(const std::string& value)
{
    chartName_ = value;
    chartNameIsSet_ = true;
}

bool CreateReleaseResponse::chartNameIsSet() const
{
    return chartNameIsSet_;
}

void CreateReleaseResponse::unsetchartName()
{
    chartNameIsSet_ = false;
}

bool CreateReleaseResponse::isChartPublic() const
{
    return chartPublic_;
}

void CreateReleaseResponse::setChartPublic(bool value)
{
    chartPublic_ = value;
    chartPublicIsSet_ = true;
}

bool CreateReleaseResponse::chartPublicIsSet() const
{
    return chartPublicIsSet_;
}

void CreateReleaseResponse::unsetchartPublic()
{
    chartPublicIsSet_ = false;
}

std::string CreateReleaseResponse::getChartVersion() const
{
    return chartVersion_;
}

void CreateReleaseResponse::setChartVersion(const std::string& value)
{
    chartVersion_ = value;
    chartVersionIsSet_ = true;
}

bool CreateReleaseResponse::chartVersionIsSet() const
{
    return chartVersionIsSet_;
}

void CreateReleaseResponse::unsetchartVersion()
{
    chartVersionIsSet_ = false;
}

std::string CreateReleaseResponse::getClusterId() const
{
    return clusterId_;
}

void CreateReleaseResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateReleaseResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateReleaseResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateReleaseResponse::getClusterName() const
{
    return clusterName_;
}

void CreateReleaseResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool CreateReleaseResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void CreateReleaseResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string CreateReleaseResponse::getCreateAt() const
{
    return createAt_;
}

void CreateReleaseResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CreateReleaseResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void CreateReleaseResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string CreateReleaseResponse::getDescription() const
{
    return description_;
}

void CreateReleaseResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateReleaseResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateReleaseResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateReleaseResponse::getName() const
{
    return name_;
}

void CreateReleaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateReleaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateReleaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateReleaseResponse::getNamespace() const
{
    return namespace_;
}

void CreateReleaseResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateReleaseResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateReleaseResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateReleaseResponse::getParameters() const
{
    return parameters_;
}

void CreateReleaseResponse::setParameters(const std::string& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateReleaseResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateReleaseResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string CreateReleaseResponse::getResources() const
{
    return resources_;
}

void CreateReleaseResponse::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool CreateReleaseResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void CreateReleaseResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string CreateReleaseResponse::getStatus() const
{
    return status_;
}

void CreateReleaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateReleaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateReleaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateReleaseResponse::getStatusDescription() const
{
    return statusDescription_;
}

void CreateReleaseResponse::setStatusDescription(const std::string& value)
{
    statusDescription_ = value;
    statusDescriptionIsSet_ = true;
}

bool CreateReleaseResponse::statusDescriptionIsSet() const
{
    return statusDescriptionIsSet_;
}

void CreateReleaseResponse::unsetstatusDescription()
{
    statusDescriptionIsSet_ = false;
}

std::string CreateReleaseResponse::getUpdateAt() const
{
    return updateAt_;
}

void CreateReleaseResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CreateReleaseResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CreateReleaseResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string CreateReleaseResponse::getValues() const
{
    return values_;
}

void CreateReleaseResponse::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CreateReleaseResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void CreateReleaseResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t CreateReleaseResponse::getVersion() const
{
    return version_;
}

void CreateReleaseResponse::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateReleaseResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateReleaseResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


