

#include "huaweicloud/modelarts/v1/model/ListInferServicesByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServicesByTagsRequest::ListInferServicesByTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListInferServicesByTagsRequest::~ListInferServicesByTagsRequest() = default;

void ListInferServicesByTagsRequest::validate()
{
}

web::json::value ListInferServicesByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
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
bool ListInferServicesByTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
            QueryTmsResourceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ListInferServicesByTagsRequest::getLimit() const
{
    return limit_;
}

void ListInferServicesByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferServicesByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferServicesByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferServicesByTagsRequest::getOffset() const
{
    return offset_;
}

void ListInferServicesByTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferServicesByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferServicesByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferServicesByTagsRequest::getContentType() const
{
    return contentType_;
}

void ListInferServicesByTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferServicesByTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferServicesByTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListInferServicesByTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListInferServicesByTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListInferServicesByTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListInferServicesByTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

QueryTmsResourceRequest ListInferServicesByTagsRequest::getBody() const
{
    return body_;
}

void ListInferServicesByTagsRequest::setBody(const QueryTmsResourceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListInferServicesByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListInferServicesByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


