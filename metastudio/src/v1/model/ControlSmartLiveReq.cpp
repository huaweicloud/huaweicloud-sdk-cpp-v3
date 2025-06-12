

#include "huaweicloud/metastudio/v1/model/ControlSmartLiveReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ControlSmartLiveReq::ControlSmartLiveReq()
{
    command_ = "";
    commandIsSet_ = false;
    paramsIsSet_ = false;
    reviewConfigIsSet_ = false;
}

ControlSmartLiveReq::~ControlSmartLiveReq() = default;

void ControlSmartLiveReq::validate()
{
}

web::json::value ControlSmartLiveReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }

    return val;
}
bool ControlSmartLiveReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    return ok;
}


std::string ControlSmartLiveReq::getCommand() const
{
    return command_;
}

void ControlSmartLiveReq::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool ControlSmartLiveReq::commandIsSet() const
{
    return commandIsSet_;
}

void ControlSmartLiveReq::unsetcommand()
{
    commandIsSet_ = false;
}

Object ControlSmartLiveReq::getParams() const
{
    return params_;
}

void ControlSmartLiveReq::setParams(const Object& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ControlSmartLiveReq::paramsIsSet() const
{
    return paramsIsSet_;
}

void ControlSmartLiveReq::unsetparams()
{
    paramsIsSet_ = false;
}

ReviewConfig ControlSmartLiveReq::getReviewConfig() const
{
    return reviewConfig_;
}

void ControlSmartLiveReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool ControlSmartLiveReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void ControlSmartLiveReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

}
}
}
}
}


