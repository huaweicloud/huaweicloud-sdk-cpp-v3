

#include "huaweicloud/modelarts/v1/model/ListWorkspaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkspaceResponse::ListWorkspaceResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    workspacesIsSet_ = false;
}

ListWorkspaceResponse::~ListWorkspaceResponse() = default;

void ListWorkspaceResponse::validate()
{
}

web::json::value ListWorkspaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(workspacesIsSet_) {
        val[utility::conversions::to_string_t("workspaces")] = ModelBase::toJson(workspaces_);
    }

    return val;
}
bool ListWorkspaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaces"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkspaceResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaces(refVal);
        }
    }
    return ok;
}


int32_t ListWorkspaceResponse::getTotalCount() const
{
    return totalCount_;
}

void ListWorkspaceResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListWorkspaceResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListWorkspaceResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListWorkspaceResponse::getCount() const
{
    return count_;
}

void ListWorkspaceResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListWorkspaceResponse::countIsSet() const
{
    return countIsSet_;
}

void ListWorkspaceResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<WorkspaceResponse>& ListWorkspaceResponse::getWorkspaces()
{
    return workspaces_;
}

void ListWorkspaceResponse::setWorkspaces(const std::vector<WorkspaceResponse>& value)
{
    workspaces_ = value;
    workspacesIsSet_ = true;
}

bool ListWorkspaceResponse::workspacesIsSet() const
{
    return workspacesIsSet_;
}

void ListWorkspaceResponse::unsetworkspaces()
{
    workspacesIsSet_ = false;
}

}
}
}
}
}


