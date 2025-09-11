

#include "huaweicloud/functiongraph/v2/model/FuncAsyncDestinationConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncAsyncDestinationConfig::FuncAsyncDestinationConfig()
{
    onSuccessIsSet_ = false;
    onFailureIsSet_ = false;
}

FuncAsyncDestinationConfig::~FuncAsyncDestinationConfig() = default;

void FuncAsyncDestinationConfig::validate()
{
}

web::json::value FuncAsyncDestinationConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onSuccessIsSet_) {
        val[utility::conversions::to_string_t("on_success")] = ModelBase::toJson(onSuccess_);
    }
    if(onFailureIsSet_) {
        val[utility::conversions::to_string_t("on_failure")] = ModelBase::toJson(onFailure_);
    }

    return val;
}
bool FuncAsyncDestinationConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("on_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_success"));
        if(!fieldValue.is_null())
        {
            FuncDestinationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("on_failure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_failure"));
        if(!fieldValue.is_null())
        {
            FuncDestinationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnFailure(refVal);
        }
    }
    return ok;
}


FuncDestinationConfig FuncAsyncDestinationConfig::getOnSuccess() const
{
    return onSuccess_;
}

void FuncAsyncDestinationConfig::setOnSuccess(const FuncDestinationConfig& value)
{
    onSuccess_ = value;
    onSuccessIsSet_ = true;
}

bool FuncAsyncDestinationConfig::onSuccessIsSet() const
{
    return onSuccessIsSet_;
}

void FuncAsyncDestinationConfig::unsetonSuccess()
{
    onSuccessIsSet_ = false;
}

FuncDestinationConfig FuncAsyncDestinationConfig::getOnFailure() const
{
    return onFailure_;
}

void FuncAsyncDestinationConfig::setOnFailure(const FuncDestinationConfig& value)
{
    onFailure_ = value;
    onFailureIsSet_ = true;
}

bool FuncAsyncDestinationConfig::onFailureIsSet() const
{
    return onFailureIsSet_;
}

void FuncAsyncDestinationConfig::unsetonFailure()
{
    onFailureIsSet_ = false;
}

}
}
}
}
}


