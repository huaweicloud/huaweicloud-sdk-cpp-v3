

#include "huaweicloud/codeartsrepo/v4/model/ShowActualHeadPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowActualHeadPipelineRequest::ShowActualHeadPipelineRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
}

ShowActualHeadPipelineRequest::~ShowActualHeadPipelineRequest() = default;

void ShowActualHeadPipelineRequest::validate()
{
}

web::json::value ShowActualHeadPipelineRequest::toJson() const
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
bool ShowActualHeadPipelineRequest::fromJson(const web::json::value& val)
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


int32_t ShowActualHeadPipelineRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowActualHeadPipelineRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowActualHeadPipelineRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowActualHeadPipelineRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowActualHeadPipelineRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ShowActualHeadPipelineRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ShowActualHeadPipelineRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ShowActualHeadPipelineRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

}
}
}
}
}


