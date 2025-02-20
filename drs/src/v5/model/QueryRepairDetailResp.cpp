

#include "huaweicloud/drs/v5/model/QueryRepairDetailResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryRepairDetailResp::QueryRepairDetailResp()
{
    count_ = 0;
    countIsSet_ = false;
    repairDetailsIsSet_ = false;
}

QueryRepairDetailResp::~QueryRepairDetailResp() = default;

void QueryRepairDetailResp::validate()
{
}

web::json::value QueryRepairDetailResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(repairDetailsIsSet_) {
        val[utility::conversions::to_string_t("repair_details")] = ModelBase::toJson(repairDetails_);
    }

    return val;
}
bool QueryRepairDetailResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repair_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repair_details"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryRepairDetailResp_repair_details> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairDetails(refVal);
        }
    }
    return ok;
}


int32_t QueryRepairDetailResp::getCount() const
{
    return count_;
}

void QueryRepairDetailResp::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool QueryRepairDetailResp::countIsSet() const
{
    return countIsSet_;
}

void QueryRepairDetailResp::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryRepairDetailResp_repair_details>& QueryRepairDetailResp::getRepairDetails()
{
    return repairDetails_;
}

void QueryRepairDetailResp::setRepairDetails(const std::vector<QueryRepairDetailResp_repair_details>& value)
{
    repairDetails_ = value;
    repairDetailsIsSet_ = true;
}

bool QueryRepairDetailResp::repairDetailsIsSet() const
{
    return repairDetailsIsSet_;
}

void QueryRepairDetailResp::unsetrepairDetails()
{
    repairDetailsIsSet_ = false;
}

}
}
}
}
}


