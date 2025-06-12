

#include "huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchConfirmLiveCommandsReq::BatchConfirmLiveCommandsReq()
{
    command_ = "";
    commandIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    commandIdsIsSet_ = false;
}

BatchConfirmLiveCommandsReq::~BatchConfirmLiveCommandsReq() = default;

void BatchConfirmLiveCommandsReq::validate()
{
}

web::json::value BatchConfirmLiveCommandsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(commandIdsIsSet_) {
        val[utility::conversions::to_string_t("command_ids")] = ModelBase::toJson(commandIds_);
    }

    return val;
}
bool BatchConfirmLiveCommandsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandIds(refVal);
        }
    }
    return ok;
}


std::string BatchConfirmLiveCommandsReq::getCommand() const
{
    return command_;
}

void BatchConfirmLiveCommandsReq::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool BatchConfirmLiveCommandsReq::commandIsSet() const
{
    return commandIsSet_;
}

void BatchConfirmLiveCommandsReq::unsetcommand()
{
    commandIsSet_ = false;
}

std::string BatchConfirmLiveCommandsReq::getAction() const
{
    return action_;
}

void BatchConfirmLiveCommandsReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchConfirmLiveCommandsReq::actionIsSet() const
{
    return actionIsSet_;
}

void BatchConfirmLiveCommandsReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& BatchConfirmLiveCommandsReq::getCommandIds()
{
    return commandIds_;
}

void BatchConfirmLiveCommandsReq::setCommandIds(const std::vector<std::string>& value)
{
    commandIds_ = value;
    commandIdsIsSet_ = true;
}

bool BatchConfirmLiveCommandsReq::commandIdsIsSet() const
{
    return commandIdsIsSet_;
}

void BatchConfirmLiveCommandsReq::unsetcommandIds()
{
    commandIdsIsSet_ = false;
}

}
}
}
}
}


