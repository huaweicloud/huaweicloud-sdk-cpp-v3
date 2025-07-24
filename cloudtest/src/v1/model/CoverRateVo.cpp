

#include "huaweicloud/cloudtest/v1/model/CoverRateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CoverRateVo::CoverRateVo()
{
    testing_ = 0;
    testingIsSet_ = false;
    finished_ = 0;
    finishedIsSet_ = false;
    notTested_ = 0;
    notTestedIsSet_ = false;
    totalNumber_ = 0;
    totalNumberIsSet_ = false;
    coverRate_ = "";
    coverRateIsSet_ = false;
}

CoverRateVo::~CoverRateVo() = default;

void CoverRateVo::validate()
{
}

web::json::value CoverRateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testingIsSet_) {
        val[utility::conversions::to_string_t("testing")] = ModelBase::toJson(testing_);
    }
    if(finishedIsSet_) {
        val[utility::conversions::to_string_t("finished")] = ModelBase::toJson(finished_);
    }
    if(notTestedIsSet_) {
        val[utility::conversions::to_string_t("not_tested")] = ModelBase::toJson(notTested_);
    }
    if(totalNumberIsSet_) {
        val[utility::conversions::to_string_t("total_number")] = ModelBase::toJson(totalNumber_);
    }
    if(coverRateIsSet_) {
        val[utility::conversions::to_string_t("cover_rate")] = ModelBase::toJson(coverRate_);
    }

    return val;
}
bool CoverRateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTesting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinished(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tested"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tested"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTested(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverRate(refVal);
        }
    }
    return ok;
}


int32_t CoverRateVo::getTesting() const
{
    return testing_;
}

void CoverRateVo::setTesting(int32_t value)
{
    testing_ = value;
    testingIsSet_ = true;
}

bool CoverRateVo::testingIsSet() const
{
    return testingIsSet_;
}

void CoverRateVo::unsettesting()
{
    testingIsSet_ = false;
}

int32_t CoverRateVo::getFinished() const
{
    return finished_;
}

void CoverRateVo::setFinished(int32_t value)
{
    finished_ = value;
    finishedIsSet_ = true;
}

bool CoverRateVo::finishedIsSet() const
{
    return finishedIsSet_;
}

void CoverRateVo::unsetfinished()
{
    finishedIsSet_ = false;
}

int32_t CoverRateVo::getNotTested() const
{
    return notTested_;
}

void CoverRateVo::setNotTested(int32_t value)
{
    notTested_ = value;
    notTestedIsSet_ = true;
}

bool CoverRateVo::notTestedIsSet() const
{
    return notTestedIsSet_;
}

void CoverRateVo::unsetnotTested()
{
    notTestedIsSet_ = false;
}

int32_t CoverRateVo::getTotalNumber() const
{
    return totalNumber_;
}

void CoverRateVo::setTotalNumber(int32_t value)
{
    totalNumber_ = value;
    totalNumberIsSet_ = true;
}

bool CoverRateVo::totalNumberIsSet() const
{
    return totalNumberIsSet_;
}

void CoverRateVo::unsettotalNumber()
{
    totalNumberIsSet_ = false;
}

std::string CoverRateVo::getCoverRate() const
{
    return coverRate_;
}

void CoverRateVo::setCoverRate(const std::string& value)
{
    coverRate_ = value;
    coverRateIsSet_ = true;
}

bool CoverRateVo::coverRateIsSet() const
{
    return coverRateIsSet_;
}

void CoverRateVo::unsetcoverRate()
{
    coverRateIsSet_ = false;
}

}
}
}
}
}


