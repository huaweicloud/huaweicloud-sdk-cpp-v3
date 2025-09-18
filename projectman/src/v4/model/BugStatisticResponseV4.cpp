

#include "huaweicloud/projectman/v4/model/BugStatisticResponseV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BugStatisticResponseV4::BugStatisticResponseV4()
{
    criticalNum_ = 0;
    criticalNumIsSet_ = false;
    defectIndex_ = 0.0;
    defectIndexIsSet_ = false;
    module_ = "";
    moduleIsSet_ = false;
    normalNum_ = 0;
    normalNumIsSet_ = false;
    seriousNum_ = 0;
    seriousNumIsSet_ = false;
    tipNum_ = 0;
    tipNumIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

BugStatisticResponseV4::~BugStatisticResponseV4() = default;

void BugStatisticResponseV4::validate()
{
}

web::json::value BugStatisticResponseV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criticalNumIsSet_) {
        val[utility::conversions::to_string_t("critical_num")] = ModelBase::toJson(criticalNum_);
    }
    if(defectIndexIsSet_) {
        val[utility::conversions::to_string_t("defect_index")] = ModelBase::toJson(defectIndex_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(normalNumIsSet_) {
        val[utility::conversions::to_string_t("normal_num")] = ModelBase::toJson(normalNum_);
    }
    if(seriousNumIsSet_) {
        val[utility::conversions::to_string_t("serious_num")] = ModelBase::toJson(seriousNum_);
    }
    if(tipNumIsSet_) {
        val[utility::conversions::to_string_t("tip_num")] = ModelBase::toJson(tipNum_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool BugStatisticResponseV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("critical_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("critical_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriticalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_index"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serious_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serious_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeriousNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tip_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tip_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTipNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t BugStatisticResponseV4::getCriticalNum() const
{
    return criticalNum_;
}

void BugStatisticResponseV4::setCriticalNum(int32_t value)
{
    criticalNum_ = value;
    criticalNumIsSet_ = true;
}

bool BugStatisticResponseV4::criticalNumIsSet() const
{
    return criticalNumIsSet_;
}

void BugStatisticResponseV4::unsetcriticalNum()
{
    criticalNumIsSet_ = false;
}

double BugStatisticResponseV4::getDefectIndex() const
{
    return defectIndex_;
}

void BugStatisticResponseV4::setDefectIndex(double value)
{
    defectIndex_ = value;
    defectIndexIsSet_ = true;
}

bool BugStatisticResponseV4::defectIndexIsSet() const
{
    return defectIndexIsSet_;
}

void BugStatisticResponseV4::unsetdefectIndex()
{
    defectIndexIsSet_ = false;
}

std::string BugStatisticResponseV4::getModule() const
{
    return module_;
}

void BugStatisticResponseV4::setModule(const std::string& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool BugStatisticResponseV4::moduleIsSet() const
{
    return moduleIsSet_;
}

void BugStatisticResponseV4::unsetmodule()
{
    moduleIsSet_ = false;
}

int32_t BugStatisticResponseV4::getNormalNum() const
{
    return normalNum_;
}

void BugStatisticResponseV4::setNormalNum(int32_t value)
{
    normalNum_ = value;
    normalNumIsSet_ = true;
}

bool BugStatisticResponseV4::normalNumIsSet() const
{
    return normalNumIsSet_;
}

void BugStatisticResponseV4::unsetnormalNum()
{
    normalNumIsSet_ = false;
}

int32_t BugStatisticResponseV4::getSeriousNum() const
{
    return seriousNum_;
}

void BugStatisticResponseV4::setSeriousNum(int32_t value)
{
    seriousNum_ = value;
    seriousNumIsSet_ = true;
}

bool BugStatisticResponseV4::seriousNumIsSet() const
{
    return seriousNumIsSet_;
}

void BugStatisticResponseV4::unsetseriousNum()
{
    seriousNumIsSet_ = false;
}

int32_t BugStatisticResponseV4::getTipNum() const
{
    return tipNum_;
}

void BugStatisticResponseV4::setTipNum(int32_t value)
{
    tipNum_ = value;
    tipNumIsSet_ = true;
}

bool BugStatisticResponseV4::tipNumIsSet() const
{
    return tipNumIsSet_;
}

void BugStatisticResponseV4::unsettipNum()
{
    tipNumIsSet_ = false;
}

int32_t BugStatisticResponseV4::getTotal() const
{
    return total_;
}

void BugStatisticResponseV4::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BugStatisticResponseV4::totalIsSet() const
{
    return totalIsSet_;
}

void BugStatisticResponseV4::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


