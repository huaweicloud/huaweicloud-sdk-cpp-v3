

#include "huaweicloud/codeartsdeploy/v2/model/CreateHostClusterRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateHostClusterRequestBody::CreateHostClusterRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isProxyMode_ = 0;
    isProxyModeIsSet_ = false;
}

CreateHostClusterRequestBody::~CreateHostClusterRequestBody() = default;

void CreateHostClusterRequestBody::validate()
{
}

web::json::value CreateHostClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isProxyModeIsSet_) {
        val[utility::conversions::to_string_t("is_proxy_mode")] = ModelBase::toJson(isProxyMode_);
    }

    return val;
}

bool CreateHostClusterRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_proxy_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProxyMode(refVal);
        }
    }
    return ok;
}

std::string CreateHostClusterRequestBody::getName() const
{
    return name_;
}

void CreateHostClusterRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateHostClusterRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateHostClusterRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateHostClusterRequestBody::getProjectId() const
{
    return projectId_;
}

void CreateHostClusterRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateHostClusterRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateHostClusterRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateHostClusterRequestBody::getOs() const
{
    return os_;
}

void CreateHostClusterRequestBody::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool CreateHostClusterRequestBody::osIsSet() const
{
    return osIsSet_;
}

void CreateHostClusterRequestBody::unsetos()
{
    osIsSet_ = false;
}

std::string CreateHostClusterRequestBody::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void CreateHostClusterRequestBody::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool CreateHostClusterRequestBody::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void CreateHostClusterRequestBody::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

std::string CreateHostClusterRequestBody::getDescription() const
{
    return description_;
}

void CreateHostClusterRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateHostClusterRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateHostClusterRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CreateHostClusterRequestBody::getIsProxyMode() const
{
    return isProxyMode_;
}

void CreateHostClusterRequestBody::setIsProxyMode(int32_t value)
{
    isProxyMode_ = value;
    isProxyModeIsSet_ = true;
}

bool CreateHostClusterRequestBody::isProxyModeIsSet() const
{
    return isProxyModeIsSet_;
}

void CreateHostClusterRequestBody::unsetisProxyMode()
{
    isProxyModeIsSet_ = false;
}

}
}
}
}
}


