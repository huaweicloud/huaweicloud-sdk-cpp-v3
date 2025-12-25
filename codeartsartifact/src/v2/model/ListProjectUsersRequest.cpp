

#include "huaweicloud/codeartsartifact/v2/model/ListProjectUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListProjectUsersRequest::ListProjectUsersRequest()
{
    repoId_ = "";
    repoIdIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListProjectUsersRequest::~ListProjectUsersRequest() = default;

void ListProjectUsersRequest::validate()
{
}

web::json::value ListProjectUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListProjectUsersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListProjectUsersRequest::getRepoId() const
{
    return repoId_;
}

void ListProjectUsersRequest::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ListProjectUsersRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ListProjectUsersRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ListProjectUsersRequest::getScene() const
{
    return scene_;
}

void ListProjectUsersRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ListProjectUsersRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void ListProjectUsersRequest::unsetscene()
{
    sceneIsSet_ = false;
}

int32_t ListProjectUsersRequest::getPageNo() const
{
    return pageNo_;
}

void ListProjectUsersRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListProjectUsersRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListProjectUsersRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListProjectUsersRequest::getPageSize() const
{
    return pageSize_;
}

void ListProjectUsersRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListProjectUsersRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListProjectUsersRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


