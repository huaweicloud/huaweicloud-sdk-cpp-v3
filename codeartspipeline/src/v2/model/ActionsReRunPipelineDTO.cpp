

#include "huaweicloud/codeartspipeline/v2/model/ActionsReRunPipelineDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ActionsReRunPipelineDTO::ActionsReRunPipelineDTO()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    pipelineRunId_ = "";
    pipelineRunIdIsSet_ = false;
    accessToken_ = "";
    accessTokenIsSet_ = false;
}

ActionsReRunPipelineDTO::~ActionsReRunPipelineDTO() = default;

void ActionsReRunPipelineDTO::validate()
{
}

web::json::value ActionsReRunPipelineDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(pipelineRunIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_id")] = ModelBase::toJson(pipelineRunId_);
    }
    if(accessTokenIsSet_) {
        val[utility::conversions::to_string_t("access_token")] = ModelBase::toJson(accessToken_);
    }

    return val;
}
bool ActionsReRunPipelineDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessToken(refVal);
        }
    }
    return ok;
}


std::string ActionsReRunPipelineDTO::getPipelineId() const
{
    return pipelineId_;
}

void ActionsReRunPipelineDTO::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ActionsReRunPipelineDTO::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ActionsReRunPipelineDTO::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ActionsReRunPipelineDTO::getPipelineRunId() const
{
    return pipelineRunId_;
}

void ActionsReRunPipelineDTO::setPipelineRunId(const std::string& value)
{
    pipelineRunId_ = value;
    pipelineRunIdIsSet_ = true;
}

bool ActionsReRunPipelineDTO::pipelineRunIdIsSet() const
{
    return pipelineRunIdIsSet_;
}

void ActionsReRunPipelineDTO::unsetpipelineRunId()
{
    pipelineRunIdIsSet_ = false;
}

std::string ActionsReRunPipelineDTO::getAccessToken() const
{
    return accessToken_;
}

void ActionsReRunPipelineDTO::setAccessToken(const std::string& value)
{
    accessToken_ = value;
    accessTokenIsSet_ = true;
}

bool ActionsReRunPipelineDTO::accessTokenIsSet() const
{
    return accessTokenIsSet_;
}

void ActionsReRunPipelineDTO::unsetaccessToken()
{
    accessTokenIsSet_ = false;
}

}
}
}
}
}


