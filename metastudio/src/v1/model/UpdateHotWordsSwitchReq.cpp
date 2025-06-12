

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsSwitchReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsSwitchReq::UpdateHotWordsSwitchReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
}

UpdateHotWordsSwitchReq::~UpdateHotWordsSwitchReq() = default;

void UpdateHotWordsSwitchReq::validate()
{
}

web::json::value UpdateHotWordsSwitchReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(enableHotWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_words")] = ModelBase::toJson(enableHotWords_);
    }

    return val;
}
bool UpdateHotWordsSwitchReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotWords(refVal);
        }
    }
    return ok;
}


std::string UpdateHotWordsSwitchReq::getRobotId() const
{
    return robotId_;
}

void UpdateHotWordsSwitchReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateHotWordsSwitchReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateHotWordsSwitchReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

bool UpdateHotWordsSwitchReq::isEnableHotWords() const
{
    return enableHotWords_;
}

void UpdateHotWordsSwitchReq::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool UpdateHotWordsSwitchReq::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void UpdateHotWordsSwitchReq::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

}
}
}
}
}


