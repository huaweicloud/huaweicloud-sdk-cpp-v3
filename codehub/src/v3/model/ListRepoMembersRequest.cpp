

#include "huaweicloud/codehub/v3/model/ListRepoMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListRepoMembersRequest::ListRepoMembersRequest()
{
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
}

ListRepoMembersRequest::~ListRepoMembersRequest() = default;

void ListRepoMembersRequest::validate()
{
}

web::json::value ListRepoMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }

    return val;
}
bool ListRepoMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    return ok;
}


int32_t ListRepoMembersRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListRepoMembersRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListRepoMembersRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListRepoMembersRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListRepoMembersRequest::getPageSize() const
{
    return pageSize_;
}

void ListRepoMembersRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListRepoMembersRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListRepoMembersRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListRepoMembersRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ListRepoMembersRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ListRepoMembersRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ListRepoMembersRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

std::string ListRepoMembersRequest::getSubject() const
{
    return subject_;
}

void ListRepoMembersRequest::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ListRepoMembersRequest::subjectIsSet() const
{
    return subjectIsSet_;
}

void ListRepoMembersRequest::unsetsubject()
{
    subjectIsSet_ = false;
}

}
}
}
}
}


