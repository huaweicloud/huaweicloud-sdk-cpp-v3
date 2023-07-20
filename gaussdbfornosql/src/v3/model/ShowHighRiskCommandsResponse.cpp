

#include "huaweicloud/gaussdbfornosql/v3/model/ShowHighRiskCommandsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowHighRiskCommandsResponse::ShowHighRiskCommandsResponse()
{
    commandsIsSet_ = false;
}

ShowHighRiskCommandsResponse::~ShowHighRiskCommandsResponse() = default;

void ShowHighRiskCommandsResponse::validate()
{
}

web::json::value ShowHighRiskCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }

    return val;
}

bool ShowHighRiskCommandsResponse::fromJson(const web::json::value& val)
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

std::vector<CommandInfo>& ShowHighRiskCommandsResponse::getCommands()
{
    return commands_;
}

void ShowHighRiskCommandsResponse::setCommands(const std::vector<CommandInfo>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool ShowHighRiskCommandsResponse::commandsIsSet() const
{
    return commandsIsSet_;
}

void ShowHighRiskCommandsResponse::unsetcommands()
{
    commandsIsSet_ = false;
}

}
}
}
}
}


