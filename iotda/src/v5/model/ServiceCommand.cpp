

#include "huaweicloud/iotda/v5/model/ServiceCommand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceCommand::ServiceCommand()
{
    commandName_ = "";
    commandNameIsSet_ = false;
    parasIsSet_ = false;
    responsesIsSet_ = false;
}

ServiceCommand::~ServiceCommand() = default;

void ServiceCommand::validate()
{
}

web::json::value ServiceCommand::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandNameIsSet_) {
        val[utility::conversions::to_string_t("command_name")] = ModelBase::toJson(commandName_);
    }
    if(parasIsSet_) {
        val[utility::conversions::to_string_t("paras")] = ModelBase::toJson(paras_);
    }
    if(responsesIsSet_) {
        val[utility::conversions::to_string_t("responses")] = ModelBase::toJson(responses_);
    }

    return val;
}
bool ServiceCommand::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paras"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCommandPara> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("responses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responses"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCommandResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponses(refVal);
        }
    }
    return ok;
}


std::string ServiceCommand::getCommandName() const
{
    return commandName_;
}

void ServiceCommand::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool ServiceCommand::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void ServiceCommand::unsetcommandName()
{
    commandNameIsSet_ = false;
}

std::vector<ServiceCommandPara>& ServiceCommand::getParas()
{
    return paras_;
}

void ServiceCommand::setParas(const std::vector<ServiceCommandPara>& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool ServiceCommand::parasIsSet() const
{
    return parasIsSet_;
}

void ServiceCommand::unsetparas()
{
    parasIsSet_ = false;
}

std::vector<ServiceCommandResponse>& ServiceCommand::getResponses()
{
    return responses_;
}

void ServiceCommand::setResponses(const std::vector<ServiceCommandResponse>& value)
{
    responses_ = value;
    responsesIsSet_ = true;
}

bool ServiceCommand::responsesIsSet() const
{
    return responsesIsSet_;
}

void ServiceCommand::unsetresponses()
{
    responsesIsSet_ = false;
}

}
}
}
}
}


