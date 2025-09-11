

#include "huaweicloud/functiongraph/v2/model/ShowResInstanceInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowResInstanceInfoRequest::ShowResInstanceInfoRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ShowResInstanceInfoRequest::~ShowResInstanceInfoRequest() = default;

void ShowResInstanceInfoRequest::validate()
{
}

web::json::value ShowResInstanceInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowResInstanceInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListEnterpriseResourceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowResInstanceInfoRequest::getResourceType() const
{
    return resourceType_;
}

void ShowResInstanceInfoRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowResInstanceInfoRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowResInstanceInfoRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowResInstanceInfoRequest::getAction() const
{
    return action_;
}

void ShowResInstanceInfoRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowResInstanceInfoRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowResInstanceInfoRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string ShowResInstanceInfoRequest::getContentType() const
{
    return contentType_;
}

void ShowResInstanceInfoRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowResInstanceInfoRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowResInstanceInfoRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

ListEnterpriseResourceRequestBody ShowResInstanceInfoRequest::getBody() const
{
    return body_;
}

void ShowResInstanceInfoRequest::setBody(const ListEnterpriseResourceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowResInstanceInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowResInstanceInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


