

#include "huaweicloud/cbr/v1/model/Path.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Path::Path()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    dirPath_ = "";
    dirPathIsSet_ = false;
}

Path::~Path() = default;

void Path::validate()
{
}

web::json::value Path::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(dirPathIsSet_) {
        val[utility::conversions::to_string_t("dir_path")] = ModelBase::toJson(dirPath_);
    }

    return val;
}

bool Path::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dir_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dir_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirPath(refVal);
        }
    }
    return ok;
}

std::string Path::getId() const
{
    return id_;
}

void Path::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Path::idIsSet() const
{
    return idIsSet_;
}

void Path::unsetid()
{
    idIsSet_ = false;
}

std::string Path::getStatus() const
{
    return status_;
}

void Path::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Path::statusIsSet() const
{
    return statusIsSet_;
}

void Path::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Path::getAgentId() const
{
    return agentId_;
}

void Path::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool Path::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void Path::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string Path::getDirPath() const
{
    return dirPath_;
}

void Path::setDirPath(const std::string& value)
{
    dirPath_ = value;
    dirPathIsSet_ = true;
}

bool Path::dirPathIsSet() const
{
    return dirPathIsSet_;
}

void Path::unsetdirPath()
{
    dirPathIsSet_ = false;
}

}
}
}
}
}


