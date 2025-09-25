

#include "huaweicloud/codehub/v4/model/ShowMergeRequestDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestDetailRequest::ShowMergeRequestDetailRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
}

ShowMergeRequestDetailRequest::~ShowMergeRequestDetailRequest() = default;

void ShowMergeRequestDetailRequest::validate()
{
}

web::json::value ShowMergeRequestDetailRequest::toJson() const
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
bool ShowMergeRequestDetailRequest::fromJson(const web::json::value& val)
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


int32_t ShowMergeRequestDetailRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestDetailRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestDetailRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestDetailRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowMergeRequestDetailRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ShowMergeRequestDetailRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ShowMergeRequestDetailRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ShowMergeRequestDetailRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

}
}
}
}
}


