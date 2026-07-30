

#include "huaweicloud/modelarts/v1/model/PoolStatus_clusters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus_clusters::PoolStatus_clusters()
{
    name_ = "";
    nameIsSet_ = false;
    clusterFlavor_ = "";
    clusterFlavorIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    pluginsIsSet_ = false;
}

PoolStatus_clusters::~PoolStatus_clusters() = default;

void PoolStatus_clusters::validate()
{
}

web::json::value PoolStatus_clusters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(clusterFlavorIsSet_) {
        val[utility::conversions::to_string_t("clusterFlavor")] = ModelBase::toJson(clusterFlavor_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(pluginsIsSet_) {
        val[utility::conversions::to_string_t("plugins")] = ModelBase::toJson(plugins_);
    }

    return val;
}
bool PoolStatus_clusters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterFlavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterFlavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugins"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugins"));
        if(!fieldValue.is_null())
        {
            PoolStatus_clusters_plugins refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlugins(refVal);
        }
    }
    return ok;
}


std::string PoolStatus_clusters::getName() const
{
    return name_;
}

void PoolStatus_clusters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolStatus_clusters::nameIsSet() const
{
    return nameIsSet_;
}

void PoolStatus_clusters::unsetname()
{
    nameIsSet_ = false;
}

std::string PoolStatus_clusters::getClusterFlavor() const
{
    return clusterFlavor_;
}

void PoolStatus_clusters::setClusterFlavor(const std::string& value)
{
    clusterFlavor_ = value;
    clusterFlavorIsSet_ = true;
}

bool PoolStatus_clusters::clusterFlavorIsSet() const
{
    return clusterFlavorIsSet_;
}

void PoolStatus_clusters::unsetclusterFlavor()
{
    clusterFlavorIsSet_ = false;
}

std::string PoolStatus_clusters::getType() const
{
    return type_;
}

void PoolStatus_clusters::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PoolStatus_clusters::typeIsSet() const
{
    return typeIsSet_;
}

void PoolStatus_clusters::unsettype()
{
    typeIsSet_ = false;
}

std::string PoolStatus_clusters::getVersion() const
{
    return version_;
}

void PoolStatus_clusters::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PoolStatus_clusters::versionIsSet() const
{
    return versionIsSet_;
}

void PoolStatus_clusters::unsetversion()
{
    versionIsSet_ = false;
}

PoolStatus_clusters_plugins PoolStatus_clusters::getPlugins() const
{
    return plugins_;
}

void PoolStatus_clusters::setPlugins(const PoolStatus_clusters_plugins& value)
{
    plugins_ = value;
    pluginsIsSet_ = true;
}

bool PoolStatus_clusters::pluginsIsSet() const
{
    return pluginsIsSet_;
}

void PoolStatus_clusters::unsetplugins()
{
    pluginsIsSet_ = false;
}

}
}
}
}
}


