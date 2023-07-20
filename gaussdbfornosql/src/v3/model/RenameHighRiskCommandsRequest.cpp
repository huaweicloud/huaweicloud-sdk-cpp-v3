

#include "huaweicloud/gaussdbfornosql/v3/model/RenameHighRiskCommandsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RenameHighRiskCommandsRequest::RenameHighRiskCommandsRequest()
{
    commandsIsSet_ = false;
}

RenameHighRiskCommandsRequest::~RenameHighRiskCommandsRequest() = default;

void RenameHighRiskCommandsRequest::validate()
{
}

web::json::value RenameHighRiskCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }

    return val;
}

bool RenameHighRiskCommandsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commands"));
        if(!fieldValue.is_null())
        {
            std::vector<CommandInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommands(refVal);
        }
    }
    return ok;
}

std::vector<CommandInfo>& RenameHighRiskCommandsRequest::getCommands()
{
    return commands_;
}

void RenameHighRiskCommandsRequest::setCommands(const std::vector<CommandInfo>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool RenameHighRiskCommandsRequest::commandsIsSet() const
{
    return commandsIsSet_;
}

void RenameHighRiskCommandsRequest::unsetcommands()
{
    commandsIsSet_ = false;
}

}
}
}
}
}


