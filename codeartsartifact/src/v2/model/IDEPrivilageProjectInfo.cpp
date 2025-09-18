

#include "huaweicloud/codeartsartifact/v2/model/IDEPrivilageProjectInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDEPrivilageProjectInfo::IDEPrivilageProjectInfo()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    idsIsSet_ = false;
}

IDEPrivilageProjectInfo::~IDEPrivilageProjectInfo() = default;

void IDEPrivilageProjectInfo::validate()
{
}

web::json::value IDEPrivilageProjectInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool IDEPrivilageProjectInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::string IDEPrivilageProjectInfo::getProjectId() const
{
    return projectId_;
}

void IDEPrivilageProjectInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IDEPrivilageProjectInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IDEPrivilageProjectInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& IDEPrivilageProjectInfo::getIds()
{
    return ids_;
}

void IDEPrivilageProjectInfo::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool IDEPrivilageProjectInfo::idsIsSet() const
{
    return idsIsSet_;
}

void IDEPrivilageProjectInfo::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


