

#include "huaweicloud/functiongraph/v2/model/OnError.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




OnError::OnError()
{
    error_ = "";
    errorIsSet_ = false;
    transition_ = "";
    transitionIsSet_ = false;
    retryRef_ = "";
    retryRefIsSet_ = false;
}

OnError::~OnError() = default;

void OnError::validate()
{
}

web::json::value OnError::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(transitionIsSet_) {
        val[utility::conversions::to_string_t("transition")] = ModelBase::toJson(transition_);
    }
    if(retryRefIsSet_) {
        val[utility::conversions::to_string_t("retry_ref")] = ModelBase::toJson(retryRef_);
    }

    return val;
}
bool OnError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryRef(refVal);
        }
    }
    return ok;
}


std::string OnError::getError() const
{
    return error_;
}

void OnError::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool OnError::errorIsSet() const
{
    return errorIsSet_;
}

void OnError::unseterror()
{
    errorIsSet_ = false;
}

std::string OnError::getTransition() const
{
    return transition_;
}

void OnError::setTransition(const std::string& value)
{
    transition_ = value;
    transitionIsSet_ = true;
}

bool OnError::transitionIsSet() const
{
    return transitionIsSet_;
}

void OnError::unsettransition()
{
    transitionIsSet_ = false;
}

std::string OnError::getRetryRef() const
{
    return retryRef_;
}

void OnError::setRetryRef(const std::string& value)
{
    retryRef_ = value;
    retryRefIsSet_ = true;
}

bool OnError::retryRefIsSet() const
{
    return retryRefIsSet_;
}

void OnError::unsetretryRef()
{
    retryRefIsSet_ = false;
}

}
}
}
}
}


