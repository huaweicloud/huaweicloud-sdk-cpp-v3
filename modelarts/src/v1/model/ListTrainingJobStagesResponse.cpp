

#include "huaweicloud/modelarts/v1/model/ListTrainingJobStagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobStagesResponse::ListTrainingJobStagesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    runningRecordsIsSet_ = false;
}

ListTrainingJobStagesResponse::~ListTrainingJobStagesResponse() = default;

void ListTrainingJobStagesResponse::validate()
{
}

web::json::value ListTrainingJobStagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(runningRecordsIsSet_) {
        val[utility::conversions::to_string_t("running_records")] = ModelBase::toJson(runningRecords_);
    }

    return val;
}
bool ListTrainingJobStagesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("running_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_records"));
        if(!fieldValue.is_null())
        {
            std::vector<StageRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningRecords(refVal);
        }
    }
    return ok;
}


int32_t ListTrainingJobStagesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTrainingJobStagesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTrainingJobStagesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTrainingJobStagesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<StageRecord>& ListTrainingJobStagesResponse::getRunningRecords()
{
    return runningRecords_;
}

void ListTrainingJobStagesResponse::setRunningRecords(const std::vector<StageRecord>& value)
{
    runningRecords_ = value;
    runningRecordsIsSet_ = true;
}

bool ListTrainingJobStagesResponse::runningRecordsIsSet() const
{
    return runningRecordsIsSet_;
}

void ListTrainingJobStagesResponse::unsetrunningRecords()
{
    runningRecordsIsSet_ = false;
}

}
}
}
}
}


