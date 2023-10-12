

#include "huaweicloud/live/v1/model/FLVRecordConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FLVRecordConfig::FLVRecordConfig()
{
    recordCycle_ = 0;
    recordCycleIsSet_ = false;
    recordPrefix_ = "";
    recordPrefixIsSet_ = false;
    recordMaxDurationToMergeFile_ = 0;
    recordMaxDurationToMergeFileIsSet_ = false;
}

FLVRecordConfig::~FLVRecordConfig() = default;

void FLVRecordConfig::validate()
{
}

web::json::value FLVRecordConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordCycleIsSet_) {
        val[utility::conversions::to_string_t("record_cycle")] = ModelBase::toJson(recordCycle_);
    }
    if(recordPrefixIsSet_) {
        val[utility::conversions::to_string_t("record_prefix")] = ModelBase::toJson(recordPrefix_);
    }
    if(recordMaxDurationToMergeFileIsSet_) {
        val[utility::conversions::to_string_t("record_max_duration_to_merge_file")] = ModelBase::toJson(recordMaxDurationToMergeFile_);
    }

    return val;
}
bool FLVRecordConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_cycle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_max_duration_to_merge_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_max_duration_to_merge_file"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordMaxDurationToMergeFile(refVal);
        }
    }
    return ok;
}


int32_t FLVRecordConfig::getRecordCycle() const
{
    return recordCycle_;
}

void FLVRecordConfig::setRecordCycle(int32_t value)
{
    recordCycle_ = value;
    recordCycleIsSet_ = true;
}

bool FLVRecordConfig::recordCycleIsSet() const
{
    return recordCycleIsSet_;
}

void FLVRecordConfig::unsetrecordCycle()
{
    recordCycleIsSet_ = false;
}

std::string FLVRecordConfig::getRecordPrefix() const
{
    return recordPrefix_;
}

void FLVRecordConfig::setRecordPrefix(const std::string& value)
{
    recordPrefix_ = value;
    recordPrefixIsSet_ = true;
}

bool FLVRecordConfig::recordPrefixIsSet() const
{
    return recordPrefixIsSet_;
}

void FLVRecordConfig::unsetrecordPrefix()
{
    recordPrefixIsSet_ = false;
}

int32_t FLVRecordConfig::getRecordMaxDurationToMergeFile() const
{
    return recordMaxDurationToMergeFile_;
}

void FLVRecordConfig::setRecordMaxDurationToMergeFile(int32_t value)
{
    recordMaxDurationToMergeFile_ = value;
    recordMaxDurationToMergeFileIsSet_ = true;
}

bool FLVRecordConfig::recordMaxDurationToMergeFileIsSet() const
{
    return recordMaxDurationToMergeFileIsSet_;
}

void FLVRecordConfig::unsetrecordMaxDurationToMergeFile()
{
    recordMaxDurationToMergeFileIsSet_ = false;
}

}
}
}
}
}


