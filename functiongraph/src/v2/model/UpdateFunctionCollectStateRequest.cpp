

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionCollectStateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionCollectStateRequest::UpdateFunctionCollectStateRequest()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

UpdateFunctionCollectStateRequest::~UpdateFunctionCollectStateRequest() = default;

void UpdateFunctionCollectStateRequest::validate()
{
}

web::json::value UpdateFunctionCollectStateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool UpdateFunctionCollectStateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionCollectStateRequest::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateFunctionCollectStateRequest::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateFunctionCollectStateRequest::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateFunctionCollectStateRequest::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string UpdateFunctionCollectStateRequest::getState() const
{
    return state_;
}

void UpdateFunctionCollectStateRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UpdateFunctionCollectStateRequest::stateIsSet() const
{
    return stateIsSet_;
}

void UpdateFunctionCollectStateRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string UpdateFunctionCollectStateRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionCollectStateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionCollectStateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionCollectStateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


