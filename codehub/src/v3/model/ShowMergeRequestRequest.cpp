

#include "huaweicloud/codehub/v3/model/ShowMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowMergeRequestRequest::ShowMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
}

ShowMergeRequestRequest::~ShowMergeRequestRequest() = default;

void ShowMergeRequestRequest::validate()
{
}

web::json::value ShowMergeRequestRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }

    return val;
}
bool ShowMergeRequestRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    return ok;
}


int32_t ShowMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowMergeRequestRequest::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ShowMergeRequestRequest::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ShowMergeRequestRequest::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ShowMergeRequestRequest::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

}
}
}
}
}


