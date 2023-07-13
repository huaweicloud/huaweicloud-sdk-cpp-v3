

#include "huaweicloud/live/v1/model/HLSRecordConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




HLSRecordConfig::HLSRecordConfig()
{
    recordCycle_ = 0;
    recordCycleIsSet_ = false;
    recordPrefix_ = "";
    recordPrefixIsSet_ = false;
    recordTsPrefix_ = "";
    recordTsPrefixIsSet_ = false;
    recordSliceDuration_ = 0;
    recordSliceDurationIsSet_ = false;
    recordMaxDurationToMergeFile_ = 0;
    recordMaxDurationToMergeFileIsSet_ = false;
}

HLSRecordConfig::~HLSRecordConfig() = default;

void HLSRecordConfig::validate()
{
}

web::json::value HLSRecordConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordCycleIsSet_) {
        val[utility::conversions::to_string_t("record_cycle")] = ModelBase::toJson(recordCycle_);
    }
    if(recordPrefixIsSet_) {
        val[utility::conversions::to_string_t("record_prefix")] = ModelBase::toJson(recordPrefix_);
    }
    if(recordTsPrefixIsSet_) {
        val[utility::conversions::to_string_t("record_ts_prefix")] = ModelBase::toJson(recordTsPrefix_);
    }
    if(recordSliceDurationIsSet_) {
        val[utility::conversions::to_string_t("record_slice_duration")] = ModelBase::toJson(recordSliceDuration_);
    }
    if(recordMaxDurationToMergeFileIsSet_) {
        val[utility::conversions::to_string_t("record_max_duration_to_merge_file")] = ModelBase::toJson(recordMaxDurationToMergeFile_);
    }

    return val;
}

bool HLSRecordConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_ts_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_ts_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordTsPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_slice_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_slice_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordSliceDuration(refVal);
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

int32_t HLSRecordConfig::getRecordCycle() const
{
    return recordCycle_;
}

void HLSRecordConfig::setRecordCycle(int32_t value)
{
    recordCycle_ = value;
    recordCycleIsSet_ = true;
}

bool HLSRecordConfig::recordCycleIsSet() const
{
    return recordCycleIsSet_;
}

void HLSRecordConfig::unsetrecordCycle()
{
    recordCycleIsSet_ = false;
}

std::string HLSRecordConfig::getRecordPrefix() const
{
    return recordPrefix_;
}

void HLSRecordConfig::setRecordPrefix(const std::string& value)
{
    recordPrefix_ = value;
    recordPrefixIsSet_ = true;
}

bool HLSRecordConfig::recordPrefixIsSet() const
{
    return recordPrefixIsSet_;
}

void HLSRecordConfig::unsetrecordPrefix()
{
    recordPrefixIsSet_ = false;
}

std::string HLSRecordConfig::getRecordTsPrefix() const
{
    return recordTsPrefix_;
}

void HLSRecordConfig::setRecordTsPrefix(const std::string& value)
{
    recordTsPrefix_ = value;
    recordTsPrefixIsSet_ = true;
}

bool HLSRecordConfig::recordTsPrefixIsSet() const
{
    return recordTsPrefixIsSet_;
}

void HLSRecordConfig::unsetrecordTsPrefix()
{
    recordTsPrefixIsSet_ = false;
}

int32_t HLSRecordConfig::getRecordSliceDuration() const
{
    return recordSliceDuration_;
}

void HLSRecordConfig::setRecordSliceDuration(int32_t value)
{
    recordSliceDuration_ = value;
    recordSliceDurationIsSet_ = true;
}

bool HLSRecordConfig::recordSliceDurationIsSet() const
{
    return recordSliceDurationIsSet_;
}

void HLSRecordConfig::unsetrecordSliceDuration()
{
    recordSliceDurationIsSet_ = false;
}

int32_t HLSRecordConfig::getRecordMaxDurationToMergeFile() const
{
    return recordMaxDurationToMergeFile_;
}

void HLSRecordConfig::setRecordMaxDurationToMergeFile(int32_t value)
{
    recordMaxDurationToMergeFile_ = value;
    recordMaxDurationToMergeFileIsSet_ = true;
}

bool HLSRecordConfig::recordMaxDurationToMergeFileIsSet() const
{
    return recordMaxDurationToMergeFileIsSet_;
}

void HLSRecordConfig::unsetrecordMaxDurationToMergeFile()
{
    recordMaxDurationToMergeFileIsSet_ = false;
}

}
}
}
}
}


