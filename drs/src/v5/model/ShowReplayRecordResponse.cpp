

#include "huaweicloud/drs/v5/model/ShowReplayRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayRecordResponse::ShowReplayRecordResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sqlRecordsIsSet_ = false;
}

ShowReplayRecordResponse::~ShowReplayRecordResponse() = default;

void ShowReplayRecordResponse::validate()
{
}

web::json::value ShowReplayRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(sqlRecordsIsSet_) {
        val[utility::conversions::to_string_t("sql_records")] = ModelBase::toJson(sqlRecords_);
    }

    return val;
}
bool ShowReplayRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplayExecuteRecords> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlRecords(refVal);
        }
    }
    return ok;
}


int32_t ShowReplayRecordResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowReplayRecordResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowReplayRecordResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowReplayRecordResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ReplayExecuteRecords>& ShowReplayRecordResponse::getSqlRecords()
{
    return sqlRecords_;
}

void ShowReplayRecordResponse::setSqlRecords(const std::vector<ReplayExecuteRecords>& value)
{
    sqlRecords_ = value;
    sqlRecordsIsSet_ = true;
}

bool ShowReplayRecordResponse::sqlRecordsIsSet() const
{
    return sqlRecordsIsSet_;
}

void ShowReplayRecordResponse::unsetsqlRecords()
{
    sqlRecordsIsSet_ = false;
}

}
}
}
}
}


