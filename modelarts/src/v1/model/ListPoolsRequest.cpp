

#include "huaweicloud/modelarts/v1/model/ListPoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolsRequest::ListPoolsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    labelSelector_ = "";
    labelSelectorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListPoolsRequest::~ListPoolsRequest() = default;

void ListPoolsRequest::validate()
{
}

web::json::value ListPoolsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(workspaceId_);
    }
    if(labelSelectorIsSet_) {
        val[utility::conversions::to_string_t("labelSelector")] = ModelBase::toJson(labelSelector_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListPoolsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspaceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labelSelector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelSelector"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelSelector(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListPoolsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListPoolsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListPoolsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListPoolsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListPoolsRequest::getLabelSelector() const
{
    return labelSelector_;
}

void ListPoolsRequest::setLabelSelector(const std::string& value)
{
    labelSelector_ = value;
    labelSelectorIsSet_ = true;
}

bool ListPoolsRequest::labelSelectorIsSet() const
{
    return labelSelectorIsSet_;
}

void ListPoolsRequest::unsetlabelSelector()
{
    labelSelectorIsSet_ = false;
}

std::string ListPoolsRequest::getStatus() const
{
    return status_;
}

void ListPoolsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPoolsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListPoolsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


