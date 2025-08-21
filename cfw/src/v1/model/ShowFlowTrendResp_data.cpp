

#include "huaweicloud/cfw/v1/model/ShowFlowTrendResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowTrendResp_data::ShowFlowTrendResp_data()
{
    recordsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ShowFlowTrendResp_data::~ShowFlowTrendResp_data() = default;

void ShowFlowTrendResp_data::validate()
{
}

web::json::value ShowFlowTrendResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowFlowTrendResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowTrendVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<FlowTrendVO>& ShowFlowTrendResp_data::getRecords()
{
    return records_;
}

void ShowFlowTrendResp_data::setRecords(const std::vector<FlowTrendVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ShowFlowTrendResp_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void ShowFlowTrendResp_data::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t ShowFlowTrendResp_data::getTotal() const
{
    return total_;
}

void ShowFlowTrendResp_data::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowFlowTrendResp_data::totalIsSet() const
{
    return totalIsSet_;
}

void ShowFlowTrendResp_data::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


