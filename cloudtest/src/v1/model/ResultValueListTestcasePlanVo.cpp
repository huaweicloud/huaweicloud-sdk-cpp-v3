

#include "huaweicloud/cloudtest/v1/model/ResultValueListTestcasePlanVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListTestcasePlanVo::ResultValueListTestcasePlanVo()
{
    total_ = 0;
    totalIsSet_ = false;
    valueIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

ResultValueListTestcasePlanVo::~ResultValueListTestcasePlanVo() = default;

void ResultValueListTestcasePlanVo::validate()
{
}

web::json::value ResultValueListTestcasePlanVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool ResultValueListTestcasePlanVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<TestcasePlanVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


int32_t ResultValueListTestcasePlanVo::getTotal() const
{
    return total_;
}

void ResultValueListTestcasePlanVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListTestcasePlanVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListTestcasePlanVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TestcasePlanVo>& ResultValueListTestcasePlanVo::getValue()
{
    return value_;
}

void ResultValueListTestcasePlanVo::setValue(const std::vector<TestcasePlanVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListTestcasePlanVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListTestcasePlanVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueListTestcasePlanVo::getReason() const
{
    return reason_;
}

void ResultValueListTestcasePlanVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListTestcasePlanVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListTestcasePlanVo::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


