

#include "huaweicloud/cloudtest/v1/model/IteratorListFilterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IteratorListFilterInfo::IteratorListFilterInfo()
{
    piSprintsIsSet_ = false;
    planEndDateStart_ = utility::datetime();
    planEndDateStartIsSet_ = false;
    planEndDateEnd_ = utility::datetime();
    planEndDateEndIsSet_ = false;
}

IteratorListFilterInfo::~IteratorListFilterInfo() = default;

void IteratorListFilterInfo::validate()
{
}

web::json::value IteratorListFilterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(piSprintsIsSet_) {
        val[utility::conversions::to_string_t("pi_sprints")] = ModelBase::toJson(piSprints_);
    }
    if(planEndDateStartIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date_start")] = ModelBase::toJson(planEndDateStart_);
    }
    if(planEndDateEndIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date_end")] = ModelBase::toJson(planEndDateEnd_);
    }

    return val;
}
bool IteratorListFilterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pi_sprints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_sprints"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueListPiFilterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiSprints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date_start"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDateStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date_end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date_end"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDateEnd(refVal);
        }
    }
    return ok;
}


std::vector<IssueListPiFilterInfo>& IteratorListFilterInfo::getPiSprints()
{
    return piSprints_;
}

void IteratorListFilterInfo::setPiSprints(const std::vector<IssueListPiFilterInfo>& value)
{
    piSprints_ = value;
    piSprintsIsSet_ = true;
}

bool IteratorListFilterInfo::piSprintsIsSet() const
{
    return piSprintsIsSet_;
}

void IteratorListFilterInfo::unsetpiSprints()
{
    piSprintsIsSet_ = false;
}

utility::datetime IteratorListFilterInfo::getPlanEndDateStart() const
{
    return planEndDateStart_;
}

void IteratorListFilterInfo::setPlanEndDateStart(const utility::datetime& value)
{
    planEndDateStart_ = value;
    planEndDateStartIsSet_ = true;
}

bool IteratorListFilterInfo::planEndDateStartIsSet() const
{
    return planEndDateStartIsSet_;
}

void IteratorListFilterInfo::unsetplanEndDateStart()
{
    planEndDateStartIsSet_ = false;
}

utility::datetime IteratorListFilterInfo::getPlanEndDateEnd() const
{
    return planEndDateEnd_;
}

void IteratorListFilterInfo::setPlanEndDateEnd(const utility::datetime& value)
{
    planEndDateEnd_ = value;
    planEndDateEndIsSet_ = true;
}

bool IteratorListFilterInfo::planEndDateEndIsSet() const
{
    return planEndDateEndIsSet_;
}

void IteratorListFilterInfo::unsetplanEndDateEnd()
{
    planEndDateEndIsSet_ = false;
}

}
}
}
}
}


