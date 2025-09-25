

#include "huaweicloud/codehub/v4/model/ShowRepositoryMergeRequestsStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryMergeRequestsStatisticRequest::ShowRepositoryMergeRequestsStatisticRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    iids_ = "";
    iidsIsSet_ = false;
    fields_ = "";
    fieldsIsSet_ = false;
}

ShowRepositoryMergeRequestsStatisticRequest::~ShowRepositoryMergeRequestsStatisticRequest() = default;

void ShowRepositoryMergeRequestsStatisticRequest::validate()
{
}

web::json::value ShowRepositoryMergeRequestsStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(iidsIsSet_) {
        val[utility::conversions::to_string_t("iids")] = ModelBase::toJson(iids_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowRepositoryMergeRequestsStatisticRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIids(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


int32_t ShowRepositoryMergeRequestsStatisticRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryMergeRequestsStatisticRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryMergeRequestsStatisticRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryMergeRequestsStatisticRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRepositoryMergeRequestsStatisticRequest::getIids() const
{
    return iids_;
}

void ShowRepositoryMergeRequestsStatisticRequest::setIids(const std::string& value)
{
    iids_ = value;
    iidsIsSet_ = true;
}

bool ShowRepositoryMergeRequestsStatisticRequest::iidsIsSet() const
{
    return iidsIsSet_;
}

void ShowRepositoryMergeRequestsStatisticRequest::unsetiids()
{
    iidsIsSet_ = false;
}

std::string ShowRepositoryMergeRequestsStatisticRequest::getFields() const
{
    return fields_;
}

void ShowRepositoryMergeRequestsStatisticRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowRepositoryMergeRequestsStatisticRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowRepositoryMergeRequestsStatisticRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


