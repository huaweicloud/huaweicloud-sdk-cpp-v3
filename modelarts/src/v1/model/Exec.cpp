

#include "huaweicloud/modelarts/v1/model/Exec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Exec::Exec()
{
    commandIsSet_ = false;
}

Exec::~Exec() = default;

void Exec::validate()
{
}

web::json::value Exec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }

    return val;
}
bool Exec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& Exec::getCommand()
{
    return command_;
}

void Exec::setCommand(const std::vector<std::string>& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool Exec::commandIsSet() const
{
    return commandIsSet_;
}

void Exec::unsetcommand()
{
    commandIsSet_ = false;
}

}
}
}
}
}


