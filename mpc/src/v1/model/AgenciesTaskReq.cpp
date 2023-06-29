

#include "huaweicloud/mpc/v1/model/AgenciesTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




AgenciesTaskReq::AgenciesTaskReq()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
}

AgenciesTaskReq::~AgenciesTaskReq() = default;

void AgenciesTaskReq::validate()
{
}

web::json::value AgenciesTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }

    return val;
}

bool AgenciesTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    return ok;
}


std::string AgenciesTaskReq::getProjectId() const
{
    return projectId_;
}

void AgenciesTaskReq::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AgenciesTaskReq::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AgenciesTaskReq::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AgenciesTaskReq::getOperateType() const
{
    return operateType_;
}

void AgenciesTaskReq::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool AgenciesTaskReq::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void AgenciesTaskReq::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

}
}
}
}
}


