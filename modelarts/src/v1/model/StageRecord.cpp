

#include "huaweicloud/modelarts/v1/model/StageRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StageRecord::StageRecord()
{
    recordOrder_ = 0;
    recordOrderIsSet_ = false;
    stagesIsSet_ = false;
}

StageRecord::~StageRecord() = default;

void StageRecord::validate()
{
}

web::json::value StageRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordOrderIsSet_) {
        val[utility::conversions::to_string_t("record_order")] = ModelBase::toJson(recordOrder_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }

    return val;
}
bool StageRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<StageInfoWithSub> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    return ok;
}


int32_t StageRecord::getRecordOrder() const
{
    return recordOrder_;
}

void StageRecord::setRecordOrder(int32_t value)
{
    recordOrder_ = value;
    recordOrderIsSet_ = true;
}

bool StageRecord::recordOrderIsSet() const
{
    return recordOrderIsSet_;
}

void StageRecord::unsetrecordOrder()
{
    recordOrderIsSet_ = false;
}

std::vector<StageInfoWithSub>& StageRecord::getStages()
{
    return stages_;
}

void StageRecord::setStages(const std::vector<StageInfoWithSub>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool StageRecord::stagesIsSet() const
{
    return stagesIsSet_;
}

void StageRecord::unsetstages()
{
    stagesIsSet_ = false;
}

}
}
}
}
}


