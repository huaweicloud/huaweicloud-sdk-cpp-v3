

#include "huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmSmarLiveRoomReq::ConfirmSmarLiveRoomReq()
{
    action_ = "";
    actionIsSet_ = false;
    scriptVersion_ = "";
    scriptVersionIsSet_ = false;
}

ConfirmSmarLiveRoomReq::~ConfirmSmarLiveRoomReq() = default;

void ConfirmSmarLiveRoomReq::validate()
{
}

web::json::value ConfirmSmarLiveRoomReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(scriptVersionIsSet_) {
        val[utility::conversions::to_string_t("script_version")] = ModelBase::toJson(scriptVersion_);
    }

    return val;
}
bool ConfirmSmarLiveRoomReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptVersion(refVal);
        }
    }
    return ok;
}


std::string ConfirmSmarLiveRoomReq::getAction() const
{
    return action_;
}

void ConfirmSmarLiveRoomReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ConfirmSmarLiveRoomReq::actionIsSet() const
{
    return actionIsSet_;
}

void ConfirmSmarLiveRoomReq::unsetaction()
{
    actionIsSet_ = false;
}

std::string ConfirmSmarLiveRoomReq::getScriptVersion() const
{
    return scriptVersion_;
}

void ConfirmSmarLiveRoomReq::setScriptVersion(const std::string& value)
{
    scriptVersion_ = value;
    scriptVersionIsSet_ = true;
}

bool ConfirmSmarLiveRoomReq::scriptVersionIsSet() const
{
    return scriptVersionIsSet_;
}

void ConfirmSmarLiveRoomReq::unsetscriptVersion()
{
    scriptVersionIsSet_ = false;
}

}
}
}
}
}


