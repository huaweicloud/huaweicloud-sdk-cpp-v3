

#include "huaweicloud/gaussdb/v3/model/ShowAutoScalingHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoScalingHistoryResponse::ShowAutoScalingHistoryResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    recordsIsSet_ = false;
}

ShowAutoScalingHistoryResponse::~ShowAutoScalingHistoryResponse() = default;

void ShowAutoScalingHistoryResponse::validate()
{
}

web::json::value ShowAutoScalingHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool ShowAutoScalingHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoScalingRecordInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


std::string ShowAutoScalingHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowAutoScalingHistoryResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowAutoScalingHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowAutoScalingHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AutoScalingRecordInfo>& ShowAutoScalingHistoryResponse::getRecords()
{
    return records_;
}

void ShowAutoScalingHistoryResponse::setRecords(const std::vector<AutoScalingRecordInfo>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ShowAutoScalingHistoryResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ShowAutoScalingHistoryResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


