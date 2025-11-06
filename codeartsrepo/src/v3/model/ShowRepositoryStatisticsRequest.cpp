

#include "huaweicloud/codeartsrepo/v3/model/ShowRepositoryStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowRepositoryStatisticsRequest::ShowRepositoryStatisticsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowRepositoryStatisticsRequest::~ShowRepositoryStatisticsRequest() = default;

void ShowRepositoryStatisticsRequest::validate()
{
}

web::json::value ShowRepositoryStatisticsRequest::toJson() const
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
bool ShowRepositoryStatisticsRequest::fromJson(const web::json::value& val)
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
            ShowRepositoryStatisticsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ShowRepositoryStatisticsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryStatisticsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryStatisticsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryStatisticsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

ShowRepositoryStatisticsRequestBody ShowRepositoryStatisticsRequest::getBody() const
{
    return body_;
}

void ShowRepositoryStatisticsRequest::setBody(const ShowRepositoryStatisticsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowRepositoryStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowRepositoryStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


