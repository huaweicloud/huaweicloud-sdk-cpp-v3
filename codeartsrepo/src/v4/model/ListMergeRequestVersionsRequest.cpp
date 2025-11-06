

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestVersionsRequest::ListMergeRequestVersionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
}

ListMergeRequestVersionsRequest::~ListMergeRequestVersionsRequest() = default;

void ListMergeRequestVersionsRequest::validate()
{
}

web::json::value ListMergeRequestVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }

    return val;
}
bool ListMergeRequestVersionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestVersionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestVersionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestVersionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestVersionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestVersionsRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestVersionsRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestVersionsRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestVersionsRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

}
}
}
}
}


