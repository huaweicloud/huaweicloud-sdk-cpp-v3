

#include "huaweicloud/modelarts/v1/model/CountInferServicesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountInferServicesByTagsRequest::CountInferServicesByTagsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountInferServicesByTagsRequest::~CountInferServicesByTagsRequest() = default;

void CountInferServicesByTagsRequest::validate()
{
}

web::json::value CountInferServicesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountInferServicesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
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
            QueryTmsResourceCountRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountInferServicesByTagsRequest::getContentType() const
{
    return contentType_;
}

void CountInferServicesByTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CountInferServicesByTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CountInferServicesByTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string CountInferServicesByTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CountInferServicesByTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CountInferServicesByTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CountInferServicesByTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

QueryTmsResourceCountRequest CountInferServicesByTagsRequest::getBody() const
{
    return body_;
}

void CountInferServicesByTagsRequest::setBody(const QueryTmsResourceCountRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountInferServicesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountInferServicesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


