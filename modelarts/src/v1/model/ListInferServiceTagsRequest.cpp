

#include "huaweicloud/modelarts/v1/model/ListInferServiceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServiceTagsRequest::ListInferServiceTagsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ListInferServiceTagsRequest::~ListInferServiceTagsRequest() = default;

void ListInferServiceTagsRequest::validate()
{
}

web::json::value ListInferServiceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ListInferServiceTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInferServiceTagsRequest::getContentType() const
{
    return contentType_;
}

void ListInferServiceTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferServiceTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferServiceTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListInferServiceTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListInferServiceTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListInferServiceTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListInferServiceTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


