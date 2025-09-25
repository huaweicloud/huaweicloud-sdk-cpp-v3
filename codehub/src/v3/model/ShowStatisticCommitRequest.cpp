

#include "huaweicloud/codehub/v3/model/ShowStatisticCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowStatisticCommitRequest::ShowStatisticCommitRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    beginDate_ = "";
    beginDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

ShowStatisticCommitRequest::~ShowStatisticCommitRequest() = default;

void ShowStatisticCommitRequest::validate()
{
}

web::json::value ShowStatisticCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(beginDateIsSet_) {
        val[utility::conversions::to_string_t("begin_date")] = ModelBase::toJson(beginDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }

    return val;
}
bool ShowStatisticCommitRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    return ok;
}


int32_t ShowStatisticCommitRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowStatisticCommitRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowStatisticCommitRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowStatisticCommitRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowStatisticCommitRequest::getRefName() const
{
    return refName_;
}

void ShowStatisticCommitRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ShowStatisticCommitRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ShowStatisticCommitRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string ShowStatisticCommitRequest::getBeginDate() const
{
    return beginDate_;
}

void ShowStatisticCommitRequest::setBeginDate(const std::string& value)
{
    beginDate_ = value;
    beginDateIsSet_ = true;
}

bool ShowStatisticCommitRequest::beginDateIsSet() const
{
    return beginDateIsSet_;
}

void ShowStatisticCommitRequest::unsetbeginDate()
{
    beginDateIsSet_ = false;
}

std::string ShowStatisticCommitRequest::getEndDate() const
{
    return endDate_;
}

void ShowStatisticCommitRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowStatisticCommitRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowStatisticCommitRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


