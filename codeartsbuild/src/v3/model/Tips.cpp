

#include "huaweicloud/codeartsbuild/v3/model/Tips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Tips::Tips()
{
    status_ = 0;
    statusIsSet_ = false;
    nextAction_ = 0;
    nextActionIsSet_ = false;
    nextActionRemainDay_ = 0;
    nextActionRemainDayIsSet_ = false;
    nextActionUrl_ = "";
    nextActionUrlIsSet_ = false;
}

Tips::~Tips() = default;

void Tips::validate()
{
}

web::json::value Tips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nextActionIsSet_) {
        val[utility::conversions::to_string_t("next_action")] = ModelBase::toJson(nextAction_);
    }
    if(nextActionRemainDayIsSet_) {
        val[utility::conversions::to_string_t("next_action_remain_day")] = ModelBase::toJson(nextActionRemainDay_);
    }
    if(nextActionUrlIsSet_) {
        val[utility::conversions::to_string_t("next_action_url")] = ModelBase::toJson(nextActionUrl_);
    }

    return val;
}
bool Tips::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_action_remain_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_action_remain_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextActionRemainDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_action_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_action_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextActionUrl(refVal);
        }
    }
    return ok;
}


int32_t Tips::getStatus() const
{
    return status_;
}

void Tips::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Tips::statusIsSet() const
{
    return statusIsSet_;
}

void Tips::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t Tips::getNextAction() const
{
    return nextAction_;
}

void Tips::setNextAction(int32_t value)
{
    nextAction_ = value;
    nextActionIsSet_ = true;
}

bool Tips::nextActionIsSet() const
{
    return nextActionIsSet_;
}

void Tips::unsetnextAction()
{
    nextActionIsSet_ = false;
}

int32_t Tips::getNextActionRemainDay() const
{
    return nextActionRemainDay_;
}

void Tips::setNextActionRemainDay(int32_t value)
{
    nextActionRemainDay_ = value;
    nextActionRemainDayIsSet_ = true;
}

bool Tips::nextActionRemainDayIsSet() const
{
    return nextActionRemainDayIsSet_;
}

void Tips::unsetnextActionRemainDay()
{
    nextActionRemainDayIsSet_ = false;
}

std::string Tips::getNextActionUrl() const
{
    return nextActionUrl_;
}

void Tips::setNextActionUrl(const std::string& value)
{
    nextActionUrl_ = value;
    nextActionUrlIsSet_ = true;
}

bool Tips::nextActionUrlIsSet() const
{
    return nextActionUrlIsSet_;
}

void Tips::unsetnextActionUrl()
{
    nextActionUrlIsSet_ = false;
}

}
}
}
}
}


