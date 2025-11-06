

#include "huaweicloud/codeartsrepo/v3/model/ShowStatisticCommitV3Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowStatisticCommitV3Request::ShowStatisticCommitV3Request()
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

ShowStatisticCommitV3Request::~ShowStatisticCommitV3Request() = default;

void ShowStatisticCommitV3Request::validate()
{
}

web::json::value ShowStatisticCommitV3Request::toJson() const
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
bool ShowStatisticCommitV3Request::fromJson(const web::json::value& val)
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


int32_t ShowStatisticCommitV3Request::getRepositoryId() const
{
    return repositoryId_;
}

void ShowStatisticCommitV3Request::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowStatisticCommitV3Request::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowStatisticCommitV3Request::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowStatisticCommitV3Request::getRefName() const
{
    return refName_;
}

void ShowStatisticCommitV3Request::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ShowStatisticCommitV3Request::refNameIsSet() const
{
    return refNameIsSet_;
}

void ShowStatisticCommitV3Request::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string ShowStatisticCommitV3Request::getBeginDate() const
{
    return beginDate_;
}

void ShowStatisticCommitV3Request::setBeginDate(const std::string& value)
{
    beginDate_ = value;
    beginDateIsSet_ = true;
}

bool ShowStatisticCommitV3Request::beginDateIsSet() const
{
    return beginDateIsSet_;
}

void ShowStatisticCommitV3Request::unsetbeginDate()
{
    beginDateIsSet_ = false;
}

std::string ShowStatisticCommitV3Request::getEndDate() const
{
    return endDate_;
}

void ShowStatisticCommitV3Request::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowStatisticCommitV3Request::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowStatisticCommitV3Request::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


