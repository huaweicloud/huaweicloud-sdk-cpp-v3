

#include "huaweicloud/codeartsrepo/v4/model/ExecuteRepositoryStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ExecuteRepositoryStatisticsRequest::ExecuteRepositoryStatisticsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteRepositoryStatisticsRequest::~ExecuteRepositoryStatisticsRequest() = default;

void ExecuteRepositoryStatisticsRequest::validate()
{
}

web::json::value ExecuteRepositoryStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteRepositoryStatisticsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StatisticsParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ExecuteRepositoryStatisticsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ExecuteRepositoryStatisticsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ExecuteRepositoryStatisticsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ExecuteRepositoryStatisticsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

StatisticsParamsDto ExecuteRepositoryStatisticsRequest::getBody() const
{
    return body_;
}

void ExecuteRepositoryStatisticsRequest::setBody(const StatisticsParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteRepositoryStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteRepositoryStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


