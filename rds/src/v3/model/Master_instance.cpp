

#include "huaweicloud/rds/v3/model/Master_instance.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Master_instance::Master_instance()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

Master_instance::~Master_instance() = default;

void Master_instance::validate()
{
}

web::json::value Master_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}

bool Master_instance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    return ok;
}

std::string Master_instance::getInstanceId() const
{
    return instanceId_;
}

void Master_instance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Master_instance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Master_instance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string Master_instance::getRegion() const
{
    return region_;
}

void Master_instance::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool Master_instance::regionIsSet() const
{
    return regionIsSet_;
}

void Master_instance::unsetregion()
{
    regionIsSet_ = false;
}

std::string Master_instance::getProjectId() const
{
    return projectId_;
}

void Master_instance::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Master_instance::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Master_instance::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Master_instance::getProjectName() const
{
    return projectName_;
}

void Master_instance::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool Master_instance::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void Master_instance::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


