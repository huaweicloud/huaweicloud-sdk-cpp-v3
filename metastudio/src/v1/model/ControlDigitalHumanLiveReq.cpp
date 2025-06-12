

#include "huaweicloud/metastudio/v1/model/ControlDigitalHumanLiveReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ControlDigitalHumanLiveReq::ControlDigitalHumanLiveReq()
{
    command_ = "";
    commandIsSet_ = false;
    paramsIsSet_ = false;
}

ControlDigitalHumanLiveReq::~ControlDigitalHumanLiveReq() = default;

void ControlDigitalHumanLiveReq::validate()
{
}

web::json::value ControlDigitalHumanLiveReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool ControlDigitalHumanLiveReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string ControlDigitalHumanLiveReq::getCommand() const
{
    return command_;
}

void ControlDigitalHumanLiveReq::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool ControlDigitalHumanLiveReq::commandIsSet() const
{
    return commandIsSet_;
}

void ControlDigitalHumanLiveReq::unsetcommand()
{
    commandIsSet_ = false;
}

Object ControlDigitalHumanLiveReq::getParams() const
{
    return params_;
}

void ControlDigitalHumanLiveReq::setParams(const Object& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ControlDigitalHumanLiveReq::paramsIsSet() const
{
    return paramsIsSet_;
}

void ControlDigitalHumanLiveReq::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


