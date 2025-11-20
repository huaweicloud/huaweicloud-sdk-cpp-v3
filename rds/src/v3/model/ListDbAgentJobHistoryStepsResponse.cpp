

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistoryStepsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistoryStepsResponse::ListDbAgentJobHistoryStepsResponse()
{
    stepsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDbAgentJobHistoryStepsResponse::~ListDbAgentJobHistoryStepsResponse() = default;

void ListDbAgentJobHistoryStepsResponse::validate()
{
}

web::json::value ListDbAgentJobHistoryStepsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDbAgentJobHistoryStepsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDbAgentJobHistoryStepsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListDbAgentJobHistoryStepsResult>& ListDbAgentJobHistoryStepsResponse::getSteps()
{
    return steps_;
}

void ListDbAgentJobHistoryStepsResponse::setSteps(const std::vector<ListDbAgentJobHistoryStepsResult>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResponse::stepsIsSet() const
{
    return stepsIsSet_;
}

void ListDbAgentJobHistoryStepsResponse::unsetsteps()
{
    stepsIsSet_ = false;
}

int32_t ListDbAgentJobHistoryStepsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbAgentJobHistoryStepsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbAgentJobHistoryStepsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


