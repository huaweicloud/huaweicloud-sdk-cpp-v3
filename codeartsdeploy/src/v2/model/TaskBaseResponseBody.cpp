

#include "huaweicloud/codeartsdeploy/v2/model/TaskBaseResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskBaseResponseBody::TaskBaseResponseBody()
{
    id_ = "";
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    deploySystem_ = "";
    deploySystemIsSet_ = false;
}

TaskBaseResponseBody::~TaskBaseResponseBody() = default;

void TaskBaseResponseBody::validate()
{
}

web::json::value TaskBaseResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(deploySystemIsSet_) {
        val[utility::conversions::to_string_t("deploy_system")] = ModelBase::toJson(deploySystem_);
    }

    return val;
}

bool TaskBaseResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_system"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploySystem(refVal);
        }
    }
    return ok;
}

std::string TaskBaseResponseBody::getId() const
{
    return id_;
}

void TaskBaseResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskBaseResponseBody::idIsSet() const
{
    return idIsSet_;
}

void TaskBaseResponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string TaskBaseResponseBody::getState() const
{
    return state_;
}

void TaskBaseResponseBody::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaskBaseResponseBody::stateIsSet() const
{
    return stateIsSet_;
}

void TaskBaseResponseBody::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaskBaseResponseBody::getDeploySystem() const
{
    return deploySystem_;
}

void TaskBaseResponseBody::setDeploySystem(const std::string& value)
{
    deploySystem_ = value;
    deploySystemIsSet_ = true;
}

bool TaskBaseResponseBody::deploySystemIsSet() const
{
    return deploySystemIsSet_;
}

void TaskBaseResponseBody::unsetdeploySystem()
{
    deploySystemIsSet_ = false;
}

}
}
}
}
}


