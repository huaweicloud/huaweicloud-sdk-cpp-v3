

#include "huaweicloud/metastudio/v1/model/RuleCommand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RuleCommand::RuleCommand()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    commandId_ = "";
    commandIdIsSet_ = false;
    commandTime_ = "";
    commandTimeIsSet_ = false;
    interactionRulesIsSet_ = false;
}

RuleCommand::~RuleCommand() = default;

void RuleCommand::validate()
{
}

web::json::value RuleCommand::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }
    if(commandTimeIsSet_) {
        val[utility::conversions::to_string_t("command_time")] = ModelBase::toJson(commandTime_);
    }
    if(interactionRulesIsSet_) {
        val[utility::conversions::to_string_t("interaction_rules")] = ModelBase::toJson(interactionRules_);
    }

    return val;
}
bool RuleCommand::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveRoomInteractionRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRules(refVal);
        }
    }
    return ok;
}


std::string RuleCommand::getRoomId() const
{
    return roomId_;
}

void RuleCommand::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool RuleCommand::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void RuleCommand::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string RuleCommand::getJobId() const
{
    return jobId_;
}

void RuleCommand::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RuleCommand::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RuleCommand::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RuleCommand::getCommandId() const
{
    return commandId_;
}

void RuleCommand::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool RuleCommand::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void RuleCommand::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string RuleCommand::getCommandTime() const
{
    return commandTime_;
}

void RuleCommand::setCommandTime(const std::string& value)
{
    commandTime_ = value;
    commandTimeIsSet_ = true;
}

bool RuleCommand::commandTimeIsSet() const
{
    return commandTimeIsSet_;
}

void RuleCommand::unsetcommandTime()
{
    commandTimeIsSet_ = false;
}

std::vector<LiveRoomInteractionRuleInfo>& RuleCommand::getInteractionRules()
{
    return interactionRules_;
}

void RuleCommand::setInteractionRules(const std::vector<LiveRoomInteractionRuleInfo>& value)
{
    interactionRules_ = value;
    interactionRulesIsSet_ = true;
}

bool RuleCommand::interactionRulesIsSet() const
{
    return interactionRulesIsSet_;
}

void RuleCommand::unsetinteractionRules()
{
    interactionRulesIsSet_ = false;
}

}
}
}
}
}


