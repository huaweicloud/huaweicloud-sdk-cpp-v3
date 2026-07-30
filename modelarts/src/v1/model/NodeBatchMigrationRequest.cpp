

#include "huaweicloud/modelarts/v1/model/NodeBatchMigrationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeBatchMigrationRequest::NodeBatchMigrationRequest()
{
    migrateNodeNamesIsSet_ = false;
    fromClusterName_ = "";
    fromClusterNameIsSet_ = false;
    toClusterName_ = "";
    toClusterNameIsSet_ = false;
    toPoolName_ = "";
    toPoolNameIsSet_ = false;
    resourceSpecIsSet_ = false;
}

NodeBatchMigrationRequest::~NodeBatchMigrationRequest() = default;

void NodeBatchMigrationRequest::validate()
{
}

web::json::value NodeBatchMigrationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(migrateNodeNamesIsSet_) {
        val[utility::conversions::to_string_t("migrateNodeNames")] = ModelBase::toJson(migrateNodeNames_);
    }
    if(fromClusterNameIsSet_) {
        val[utility::conversions::to_string_t("fromClusterName")] = ModelBase::toJson(fromClusterName_);
    }
    if(toClusterNameIsSet_) {
        val[utility::conversions::to_string_t("toClusterName")] = ModelBase::toJson(toClusterName_);
    }
    if(toPoolNameIsSet_) {
        val[utility::conversions::to_string_t("toPoolName")] = ModelBase::toJson(toPoolName_);
    }
    if(resourceSpecIsSet_) {
        val[utility::conversions::to_string_t("resourceSpec")] = ModelBase::toJson(resourceSpec_);
    }

    return val;
}
bool NodeBatchMigrationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("migrateNodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrateNodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrateNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fromClusterName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fromClusterName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("toClusterName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("toClusterName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("toPoolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("toPoolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceSpec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSpec"));
        if(!fieldValue.is_null())
        {
            MigrateResourceSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpec(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& NodeBatchMigrationRequest::getMigrateNodeNames()
{
    return migrateNodeNames_;
}

void NodeBatchMigrationRequest::setMigrateNodeNames(const std::vector<std::string>& value)
{
    migrateNodeNames_ = value;
    migrateNodeNamesIsSet_ = true;
}

bool NodeBatchMigrationRequest::migrateNodeNamesIsSet() const
{
    return migrateNodeNamesIsSet_;
}

void NodeBatchMigrationRequest::unsetmigrateNodeNames()
{
    migrateNodeNamesIsSet_ = false;
}

std::string NodeBatchMigrationRequest::getFromClusterName() const
{
    return fromClusterName_;
}

void NodeBatchMigrationRequest::setFromClusterName(const std::string& value)
{
    fromClusterName_ = value;
    fromClusterNameIsSet_ = true;
}

bool NodeBatchMigrationRequest::fromClusterNameIsSet() const
{
    return fromClusterNameIsSet_;
}

void NodeBatchMigrationRequest::unsetfromClusterName()
{
    fromClusterNameIsSet_ = false;
}

std::string NodeBatchMigrationRequest::getToClusterName() const
{
    return toClusterName_;
}

void NodeBatchMigrationRequest::setToClusterName(const std::string& value)
{
    toClusterName_ = value;
    toClusterNameIsSet_ = true;
}

bool NodeBatchMigrationRequest::toClusterNameIsSet() const
{
    return toClusterNameIsSet_;
}

void NodeBatchMigrationRequest::unsettoClusterName()
{
    toClusterNameIsSet_ = false;
}

std::string NodeBatchMigrationRequest::getToPoolName() const
{
    return toPoolName_;
}

void NodeBatchMigrationRequest::setToPoolName(const std::string& value)
{
    toPoolName_ = value;
    toPoolNameIsSet_ = true;
}

bool NodeBatchMigrationRequest::toPoolNameIsSet() const
{
    return toPoolNameIsSet_;
}

void NodeBatchMigrationRequest::unsettoPoolName()
{
    toPoolNameIsSet_ = false;
}

MigrateResourceSpec NodeBatchMigrationRequest::getResourceSpec() const
{
    return resourceSpec_;
}

void NodeBatchMigrationRequest::setResourceSpec(const MigrateResourceSpec& value)
{
    resourceSpec_ = value;
    resourceSpecIsSet_ = true;
}

bool NodeBatchMigrationRequest::resourceSpecIsSet() const
{
    return resourceSpecIsSet_;
}

void NodeBatchMigrationRequest::unsetresourceSpec()
{
    resourceSpecIsSet_ = false;
}

}
}
}
}
}


