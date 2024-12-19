

#include "huaweicloud/rds/v3/model/ListUpdateBackupEnhancePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListUpdateBackupEnhancePolicyResponse::ListUpdateBackupEnhancePolicyResponse()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    manualBackupRetentionDays_ = "";
    manualBackupRetentionDaysIsSet_ = false;
    frequency_ = "";
    frequencyIsSet_ = false;
    policiesIsSet_ = false;
}

ListUpdateBackupEnhancePolicyResponse::~ListUpdateBackupEnhancePolicyResponse() = default;

void ListUpdateBackupEnhancePolicyResponse::validate()
{
}

web::json::value ListUpdateBackupEnhancePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(manualBackupRetentionDaysIsSet_) {
        val[utility::conversions::to_string_t("manual_backup_retention_days")] = ModelBase::toJson(manualBackupRetentionDays_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool ListUpdateBackupEnhancePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manual_backup_retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manual_backup_retention_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManualBackupRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<Policy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string ListUpdateBackupEnhancePolicyResponse::getBeginTime() const
{
    return beginTime_;
}

void ListUpdateBackupEnhancePolicyResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListUpdateBackupEnhancePolicyResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListUpdateBackupEnhancePolicyResponse::getEndTime() const
{
    return endTime_;
}

void ListUpdateBackupEnhancePolicyResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListUpdateBackupEnhancePolicyResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListUpdateBackupEnhancePolicyResponse::getManualBackupRetentionDays() const
{
    return manualBackupRetentionDays_;
}

void ListUpdateBackupEnhancePolicyResponse::setManualBackupRetentionDays(const std::string& value)
{
    manualBackupRetentionDays_ = value;
    manualBackupRetentionDaysIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyResponse::manualBackupRetentionDaysIsSet() const
{
    return manualBackupRetentionDaysIsSet_;
}

void ListUpdateBackupEnhancePolicyResponse::unsetmanualBackupRetentionDays()
{
    manualBackupRetentionDaysIsSet_ = false;
}

std::string ListUpdateBackupEnhancePolicyResponse::getFrequency() const
{
    return frequency_;
}

void ListUpdateBackupEnhancePolicyResponse::setFrequency(const std::string& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyResponse::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void ListUpdateBackupEnhancePolicyResponse::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::vector<Policy>& ListUpdateBackupEnhancePolicyResponse::getPolicies()
{
    return policies_;
}

void ListUpdateBackupEnhancePolicyResponse::setPolicies(const std::vector<Policy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListUpdateBackupEnhancePolicyResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


