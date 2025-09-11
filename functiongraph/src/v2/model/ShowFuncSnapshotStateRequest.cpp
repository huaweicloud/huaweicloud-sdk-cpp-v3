

#include "huaweicloud/functiongraph/v2/model/ShowFuncSnapshotStateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFuncSnapshotStateRequest::ShowFuncSnapshotStateRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFuncSnapshotStateRequest::~ShowFuncSnapshotStateRequest() = default;

void ShowFuncSnapshotStateRequest::validate()
{
}

web::json::value ShowFuncSnapshotStateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowFuncSnapshotStateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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


std::string ShowFuncSnapshotStateRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowFuncSnapshotStateRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowFuncSnapshotStateRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowFuncSnapshotStateRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowFuncSnapshotStateRequest::getAction() const
{
    return action_;
}

void ShowFuncSnapshotStateRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowFuncSnapshotStateRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowFuncSnapshotStateRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string ShowFuncSnapshotStateRequest::getContentType() const
{
    return contentType_;
}

void ShowFuncSnapshotStateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFuncSnapshotStateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFuncSnapshotStateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


