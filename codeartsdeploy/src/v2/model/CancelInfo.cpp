

#include "huaweicloud/codeartsdeploy/v2/model/CancelInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CancelInfo::CancelInfo()
{
    id_ = "";
    idIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

CancelInfo::~CancelInfo() = default;

void CancelInfo::validate()
{
}

web::json::value CancelInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CancelInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string CancelInfo::getId() const
{
    return id_;
}

void CancelInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CancelInfo::idIsSet() const
{
    return idIsSet_;
}

void CancelInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CancelInfo::getTaskId() const
{
    return taskId_;
}

void CancelInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CancelInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CancelInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


