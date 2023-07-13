

#include "huaweicloud/drs/v5/model/ActionReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ActionReq::ActionReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    actionName_ = "";
    actionNameIsSet_ = false;
    actionParamsIsSet_ = false;
}

ActionReq::~ActionReq() = default;

void ActionReq::validate()
{
}

web::json::value ActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(actionNameIsSet_) {
        val[utility::conversions::to_string_t("action_name")] = ModelBase::toJson(actionName_);
    }
    if(actionParamsIsSet_) {
        val[utility::conversions::to_string_t("action_params")] = ModelBase::toJson(actionParams_);
    }

    return val;
}

bool ActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_params"));
        if(!fieldValue.is_null())
        {
            ActionParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionParams(refVal);
        }
    }
    return ok;
}

std::string ActionReq::getJobId() const
{
    return jobId_;
}

void ActionReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ActionReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ActionReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ActionReq::getActionName() const
{
    return actionName_;
}

void ActionReq::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool ActionReq::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void ActionReq::unsetactionName()
{
    actionNameIsSet_ = false;
}

ActionParams ActionReq::getActionParams() const
{
    return actionParams_;
}

void ActionReq::setActionParams(const ActionParams& value)
{
    actionParams_ = value;
    actionParamsIsSet_ = true;
}

bool ActionReq::actionParamsIsSet() const
{
    return actionParamsIsSet_;
}

void ActionReq::unsetactionParams()
{
    actionParamsIsSet_ = false;
}

}
}
}
}
}


