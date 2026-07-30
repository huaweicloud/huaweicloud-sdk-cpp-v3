

#include "huaweicloud/modelarts/v1/model/ValidateAuthResults.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateAuthResults::ValidateAuthResults()
{
    action_ = "";
    actionIsSet_ = false;
    verdict_ = "";
    verdictIsSet_ = false;
    actionId_ = "";
    actionIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    causeIsSet_ = false;
}

ValidateAuthResults::~ValidateAuthResults() = default;

void ValidateAuthResults::validate()
{
}

web::json::value ValidateAuthResults::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(verdictIsSet_) {
        val[utility::conversions::to_string_t("verdict")] = ModelBase::toJson(verdict_);
    }
    if(actionIdIsSet_) {
        val[utility::conversions::to_string_t("action_id")] = ModelBase::toJson(actionId_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(causeIsSet_) {
        val[utility::conversions::to_string_t("cause")] = ModelBase::toJson(cause_);
    }

    return val;
}
bool ValidateAuthResults::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("verdict"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verdict"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerdict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cause"));
        if(!fieldValue.is_null())
        {
            std::vector<Cause> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCause(refVal);
        }
    }
    return ok;
}


std::string ValidateAuthResults::getAction() const
{
    return action_;
}

void ValidateAuthResults::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ValidateAuthResults::actionIsSet() const
{
    return actionIsSet_;
}

void ValidateAuthResults::unsetaction()
{
    actionIsSet_ = false;
}

std::string ValidateAuthResults::getVerdict() const
{
    return verdict_;
}

void ValidateAuthResults::setVerdict(const std::string& value)
{
    verdict_ = value;
    verdictIsSet_ = true;
}

bool ValidateAuthResults::verdictIsSet() const
{
    return verdictIsSet_;
}

void ValidateAuthResults::unsetverdict()
{
    verdictIsSet_ = false;
}

std::string ValidateAuthResults::getActionId() const
{
    return actionId_;
}

void ValidateAuthResults::setActionId(const std::string& value)
{
    actionId_ = value;
    actionIdIsSet_ = true;
}

bool ValidateAuthResults::actionIdIsSet() const
{
    return actionIdIsSet_;
}

void ValidateAuthResults::unsetactionId()
{
    actionIdIsSet_ = false;
}

std::string ValidateAuthResults::getResource() const
{
    return resource_;
}

void ValidateAuthResults::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ValidateAuthResults::resourceIsSet() const
{
    return resourceIsSet_;
}

void ValidateAuthResults::unsetresource()
{
    resourceIsSet_ = false;
}

std::vector<Cause>& ValidateAuthResults::getCause()
{
    return cause_;
}

void ValidateAuthResults::setCause(const std::vector<Cause>& value)
{
    cause_ = value;
    causeIsSet_ = true;
}

bool ValidateAuthResults::causeIsSet() const
{
    return causeIsSet_;
}

void ValidateAuthResults::unsetcause()
{
    causeIsSet_ = false;
}

}
}
}
}
}


