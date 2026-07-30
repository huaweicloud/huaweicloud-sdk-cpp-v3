

#include "huaweicloud/modelarts/v1/model/CreateOrderIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateOrderIdRequest::CreateOrderIdRequest()
{
    name_ = "";
    nameIsSet_ = false;
    actionType_ = "";
    actionTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateOrderIdRequest::~CreateOrderIdRequest() = default;

void CreateOrderIdRequest::validate()
{
}

web::json::value CreateOrderIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("actionType")] = ModelBase::toJson(actionType_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateOrderIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actionType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actionType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspaceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateOrderRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateOrderIdRequest::getName() const
{
    return name_;
}

void CreateOrderIdRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateOrderIdRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CreateOrderIdRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateOrderIdRequest::getActionType() const
{
    return actionType_;
}

void CreateOrderIdRequest::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool CreateOrderIdRequest::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void CreateOrderIdRequest::unsetactionType()
{
    actionTypeIsSet_ = false;
}

std::string CreateOrderIdRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateOrderIdRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateOrderIdRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateOrderIdRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

CreateOrderRequestBody CreateOrderIdRequest::getBody() const
{
    return body_;
}

void CreateOrderIdRequest::setBody(const CreateOrderRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrderIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrderIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


