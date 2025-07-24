

#include "huaweicloud/cloudtest/v1/model/VersionTestCasesChangeStatisticsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




VersionTestCasesChangeStatisticsVo::VersionTestCasesChangeStatisticsVo()
{
    addTestcasesNumber_ = 0;
    addTestcasesNumberIsSet_ = false;
    reuseTestcasesNumber_ = 0;
    reuseTestcasesNumberIsSet_ = false;
    modifyingTestcasesNumber_ = 0;
    modifyingTestcasesNumberIsSet_ = false;
    updateDateTimestamp_ = 0L;
    updateDateTimestampIsSet_ = false;
    updateDate_ = utility::datetime();
    updateDateIsSet_ = false;
}

VersionTestCasesChangeStatisticsVo::~VersionTestCasesChangeStatisticsVo() = default;

void VersionTestCasesChangeStatisticsVo::validate()
{
}

web::json::value VersionTestCasesChangeStatisticsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addTestcasesNumberIsSet_) {
        val[utility::conversions::to_string_t("add_testcases_number")] = ModelBase::toJson(addTestcasesNumber_);
    }
    if(reuseTestcasesNumberIsSet_) {
        val[utility::conversions::to_string_t("reuse_testcases_number")] = ModelBase::toJson(reuseTestcasesNumber_);
    }
    if(modifyingTestcasesNumberIsSet_) {
        val[utility::conversions::to_string_t("modifying_testcases_number")] = ModelBase::toJson(modifyingTestcasesNumber_);
    }
    if(updateDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("update_date_timestamp")] = ModelBase::toJson(updateDateTimestamp_);
    }
    if(updateDateIsSet_) {
        val[utility::conversions::to_string_t("update_date")] = ModelBase::toJson(updateDate_);
    }

    return val;
}
bool VersionTestCasesChangeStatisticsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_testcases_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_testcases_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddTestcasesNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reuse_testcases_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reuse_testcases_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReuseTestcasesNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifying_testcases_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifying_testcases_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyingTestcasesNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateDate(refVal);
        }
    }
    return ok;
}


int32_t VersionTestCasesChangeStatisticsVo::getAddTestcasesNumber() const
{
    return addTestcasesNumber_;
}

void VersionTestCasesChangeStatisticsVo::setAddTestcasesNumber(int32_t value)
{
    addTestcasesNumber_ = value;
    addTestcasesNumberIsSet_ = true;
}

bool VersionTestCasesChangeStatisticsVo::addTestcasesNumberIsSet() const
{
    return addTestcasesNumberIsSet_;
}

void VersionTestCasesChangeStatisticsVo::unsetaddTestcasesNumber()
{
    addTestcasesNumberIsSet_ = false;
}

int32_t VersionTestCasesChangeStatisticsVo::getReuseTestcasesNumber() const
{
    return reuseTestcasesNumber_;
}

void VersionTestCasesChangeStatisticsVo::setReuseTestcasesNumber(int32_t value)
{
    reuseTestcasesNumber_ = value;
    reuseTestcasesNumberIsSet_ = true;
}

bool VersionTestCasesChangeStatisticsVo::reuseTestcasesNumberIsSet() const
{
    return reuseTestcasesNumberIsSet_;
}

void VersionTestCasesChangeStatisticsVo::unsetreuseTestcasesNumber()
{
    reuseTestcasesNumberIsSet_ = false;
}

int32_t VersionTestCasesChangeStatisticsVo::getModifyingTestcasesNumber() const
{
    return modifyingTestcasesNumber_;
}

void VersionTestCasesChangeStatisticsVo::setModifyingTestcasesNumber(int32_t value)
{
    modifyingTestcasesNumber_ = value;
    modifyingTestcasesNumberIsSet_ = true;
}

bool VersionTestCasesChangeStatisticsVo::modifyingTestcasesNumberIsSet() const
{
    return modifyingTestcasesNumberIsSet_;
}

void VersionTestCasesChangeStatisticsVo::unsetmodifyingTestcasesNumber()
{
    modifyingTestcasesNumberIsSet_ = false;
}

int64_t VersionTestCasesChangeStatisticsVo::getUpdateDateTimestamp() const
{
    return updateDateTimestamp_;
}

void VersionTestCasesChangeStatisticsVo::setUpdateDateTimestamp(int64_t value)
{
    updateDateTimestamp_ = value;
    updateDateTimestampIsSet_ = true;
}

bool VersionTestCasesChangeStatisticsVo::updateDateTimestampIsSet() const
{
    return updateDateTimestampIsSet_;
}

void VersionTestCasesChangeStatisticsVo::unsetupdateDateTimestamp()
{
    updateDateTimestampIsSet_ = false;
}

utility::datetime VersionTestCasesChangeStatisticsVo::getUpdateDate() const
{
    return updateDate_;
}

void VersionTestCasesChangeStatisticsVo::setUpdateDate(const utility::datetime& value)
{
    updateDate_ = value;
    updateDateIsSet_ = true;
}

bool VersionTestCasesChangeStatisticsVo::updateDateIsSet() const
{
    return updateDateIsSet_;
}

void VersionTestCasesChangeStatisticsVo::unsetupdateDate()
{
    updateDateIsSet_ = false;
}

}
}
}
}
}


