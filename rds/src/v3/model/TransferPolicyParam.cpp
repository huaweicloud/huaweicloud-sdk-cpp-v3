

#include "huaweicloud/rds/v3/model/TransferPolicyParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferPolicyParam::TransferPolicyParam()
{
    prefix_ = "";
    prefixIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
}

TransferPolicyParam::~TransferPolicyParam() = default;

void TransferPolicyParam::validate()
{
}

web::json::value TransferPolicyParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }

    return val;
}
bool TransferPolicyParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupType(refVal);
        }
    }
    return ok;
}


std::string TransferPolicyParam::getPrefix() const
{
    return prefix_;
}

void TransferPolicyParam::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool TransferPolicyParam::prefixIsSet() const
{
    return prefixIsSet_;
}

void TransferPolicyParam::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string TransferPolicyParam::getDestination() const
{
    return destination_;
}

void TransferPolicyParam::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool TransferPolicyParam::destinationIsSet() const
{
    return destinationIsSet_;
}

void TransferPolicyParam::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string TransferPolicyParam::getPeriod() const
{
    return period_;
}

void TransferPolicyParam::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool TransferPolicyParam::periodIsSet() const
{
    return periodIsSet_;
}

void TransferPolicyParam::unsetperiod()
{
    periodIsSet_ = false;
}

std::string TransferPolicyParam::getBackupType() const
{
    return backupType_;
}

void TransferPolicyParam::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool TransferPolicyParam::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void TransferPolicyParam::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

}
}
}
}
}


