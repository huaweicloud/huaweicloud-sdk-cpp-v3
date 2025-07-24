

#include "huaweicloud/cloudtest/v1/model/RequirementsOverviewVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RequirementsOverviewVo::RequirementsOverviewVo()
{
    totalNumber_ = 0;
    totalNumberIsSet_ = false;
    requirementOverviewListIsSet_ = false;
}

RequirementsOverviewVo::~RequirementsOverviewVo() = default;

void RequirementsOverviewVo::validate()
{
}

web::json::value RequirementsOverviewVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumberIsSet_) {
        val[utility::conversions::to_string_t("total_number")] = ModelBase::toJson(totalNumber_);
    }
    if(requirementOverviewListIsSet_) {
        val[utility::conversions::to_string_t("requirement_overview_list")] = ModelBase::toJson(requirementOverviewList_);
    }

    return val;
}
bool RequirementsOverviewVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requirement_overview_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requirement_overview_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RequirementOverviewVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequirementOverviewList(refVal);
        }
    }
    return ok;
}


int32_t RequirementsOverviewVo::getTotalNumber() const
{
    return totalNumber_;
}

void RequirementsOverviewVo::setTotalNumber(int32_t value)
{
    totalNumber_ = value;
    totalNumberIsSet_ = true;
}

bool RequirementsOverviewVo::totalNumberIsSet() const
{
    return totalNumberIsSet_;
}

void RequirementsOverviewVo::unsettotalNumber()
{
    totalNumberIsSet_ = false;
}

std::vector<RequirementOverviewVo>& RequirementsOverviewVo::getRequirementOverviewList()
{
    return requirementOverviewList_;
}

void RequirementsOverviewVo::setRequirementOverviewList(const std::vector<RequirementOverviewVo>& value)
{
    requirementOverviewList_ = value;
    requirementOverviewListIsSet_ = true;
}

bool RequirementsOverviewVo::requirementOverviewListIsSet() const
{
    return requirementOverviewListIsSet_;
}

void RequirementsOverviewVo::unsetrequirementOverviewList()
{
    requirementOverviewListIsSet_ = false;
}

}
}
}
}
}


