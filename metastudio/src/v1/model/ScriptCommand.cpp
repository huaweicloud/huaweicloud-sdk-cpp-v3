

#include "huaweicloud/metastudio/v1/model/ScriptCommand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ScriptCommand::ScriptCommand()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    commandId_ = "";
    commandIdIsSet_ = false;
    commandTime_ = "";
    commandTimeIsSet_ = false;
    sceneScriptsIsSet_ = false;
}

ScriptCommand::~ScriptCommand() = default;

void ScriptCommand::validate()
{
}

web::json::value ScriptCommand::toJson() const
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
    if(sceneScriptsIsSet_) {
        val[utility::conversions::to_string_t("scene_scripts")] = ModelBase::toJson(sceneScripts_);
    }

    return val;
}
bool ScriptCommand::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scene_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<LivePlayingScriptInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneScripts(refVal);
        }
    }
    return ok;
}


std::string ScriptCommand::getRoomId() const
{
    return roomId_;
}

void ScriptCommand::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ScriptCommand::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ScriptCommand::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ScriptCommand::getJobId() const
{
    return jobId_;
}

void ScriptCommand::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ScriptCommand::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ScriptCommand::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ScriptCommand::getCommandId() const
{
    return commandId_;
}

void ScriptCommand::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool ScriptCommand::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void ScriptCommand::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string ScriptCommand::getCommandTime() const
{
    return commandTime_;
}

void ScriptCommand::setCommandTime(const std::string& value)
{
    commandTime_ = value;
    commandTimeIsSet_ = true;
}

bool ScriptCommand::commandTimeIsSet() const
{
    return commandTimeIsSet_;
}

void ScriptCommand::unsetcommandTime()
{
    commandTimeIsSet_ = false;
}

std::vector<LivePlayingScriptInfo>& ScriptCommand::getSceneScripts()
{
    return sceneScripts_;
}

void ScriptCommand::setSceneScripts(const std::vector<LivePlayingScriptInfo>& value)
{
    sceneScripts_ = value;
    sceneScriptsIsSet_ = true;
}

bool ScriptCommand::sceneScriptsIsSet() const
{
    return sceneScriptsIsSet_;
}

void ScriptCommand::unsetsceneScripts()
{
    sceneScriptsIsSet_ = false;
}

}
}
}
}
}


