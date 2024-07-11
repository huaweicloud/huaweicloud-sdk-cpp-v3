

#include "huaweicloud/codeartsdeploy/v2/model/HostClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostClusterRequest::HostClusterRequest()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
}

HostClusterRequest::~HostClusterRequest() = default;

void HostClusterRequest::validate()
{
}

web::json::value HostClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }

    return val;
}
bool HostClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    return ok;
}


std::string HostClusterRequest::getName() const
{
    return name_;
}

void HostClusterRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HostClusterRequest::nameIsSet() const
{
    return nameIsSet_;
}

void HostClusterRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string HostClusterRequest::getDescription() const
{
    return description_;
}

void HostClusterRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool HostClusterRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void HostClusterRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string HostClusterRequest::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void HostClusterRequest::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool HostClusterRequest::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void HostClusterRequest::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

}
}
}
}
}


