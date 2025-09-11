

#include "huaweicloud/functiongraph/v2/model/UpdateFuncSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFuncSnapshotRequest::UpdateFuncSnapshotRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

UpdateFuncSnapshotRequest::~UpdateFuncSnapshotRequest() = default;

void UpdateFuncSnapshotRequest::validate()
{
}

web::json::value UpdateFuncSnapshotRequest::toJson() const
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
bool UpdateFuncSnapshotRequest::fromJson(const web::json::value& val)
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


std::string UpdateFuncSnapshotRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFuncSnapshotRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFuncSnapshotRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFuncSnapshotRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFuncSnapshotRequest::getAction() const
{
    return action_;
}

void UpdateFuncSnapshotRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateFuncSnapshotRequest::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateFuncSnapshotRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string UpdateFuncSnapshotRequest::getContentType() const
{
    return contentType_;
}

void UpdateFuncSnapshotRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFuncSnapshotRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFuncSnapshotRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


