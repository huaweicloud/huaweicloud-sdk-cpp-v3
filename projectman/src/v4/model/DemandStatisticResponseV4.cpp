

#include "huaweicloud/projectman/v4/model/DemandStatisticResponseV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DemandStatisticResponseV4::DemandStatisticResponseV4()
{
    closedNum_ = 0;
    closedNumIsSet_ = false;
    module_ = "";
    moduleIsSet_ = false;
    newNum_ = 0;
    newNumIsSet_ = false;
    processNum_ = 0;
    processNumIsSet_ = false;
    rejectedNum_ = 0;
    rejectedNumIsSet_ = false;
    solvedNum_ = 0;
    solvedNumIsSet_ = false;
    testNum_ = 0;
    testNumIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

DemandStatisticResponseV4::~DemandStatisticResponseV4() = default;

void DemandStatisticResponseV4::validate()
{
}

web::json::value DemandStatisticResponseV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(closedNumIsSet_) {
        val[utility::conversions::to_string_t("closed_num")] = ModelBase::toJson(closedNum_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(newNumIsSet_) {
        val[utility::conversions::to_string_t("new_num")] = ModelBase::toJson(newNum_);
    }
    if(processNumIsSet_) {
        val[utility::conversions::to_string_t("process_num")] = ModelBase::toJson(processNum_);
    }
    if(rejectedNumIsSet_) {
        val[utility::conversions::to_string_t("rejected_num")] = ModelBase::toJson(rejectedNum_);
    }
    if(solvedNumIsSet_) {
        val[utility::conversions::to_string_t("solved_num")] = ModelBase::toJson(solvedNum_);
    }
    if(testNumIsSet_) {
        val[utility::conversions::to_string_t("test_num")] = ModelBase::toJson(testNum_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool DemandStatisticResponseV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("closed_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rejected_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rejected_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solved_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solved_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolvedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestNum(refVal);
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


int32_t DemandStatisticResponseV4::getClosedNum() const
{
    return closedNum_;
}

void DemandStatisticResponseV4::setClosedNum(int32_t value)
{
    closedNum_ = value;
    closedNumIsSet_ = true;
}

bool DemandStatisticResponseV4::closedNumIsSet() const
{
    return closedNumIsSet_;
}

void DemandStatisticResponseV4::unsetclosedNum()
{
    closedNumIsSet_ = false;
}

std::string DemandStatisticResponseV4::getModule() const
{
    return module_;
}

void DemandStatisticResponseV4::setModule(const std::string& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool DemandStatisticResponseV4::moduleIsSet() const
{
    return moduleIsSet_;
}

void DemandStatisticResponseV4::unsetmodule()
{
    moduleIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getNewNum() const
{
    return newNum_;
}

void DemandStatisticResponseV4::setNewNum(int32_t value)
{
    newNum_ = value;
    newNumIsSet_ = true;
}

bool DemandStatisticResponseV4::newNumIsSet() const
{
    return newNumIsSet_;
}

void DemandStatisticResponseV4::unsetnewNum()
{
    newNumIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getProcessNum() const
{
    return processNum_;
}

void DemandStatisticResponseV4::setProcessNum(int32_t value)
{
    processNum_ = value;
    processNumIsSet_ = true;
}

bool DemandStatisticResponseV4::processNumIsSet() const
{
    return processNumIsSet_;
}

void DemandStatisticResponseV4::unsetprocessNum()
{
    processNumIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getRejectedNum() const
{
    return rejectedNum_;
}

void DemandStatisticResponseV4::setRejectedNum(int32_t value)
{
    rejectedNum_ = value;
    rejectedNumIsSet_ = true;
}

bool DemandStatisticResponseV4::rejectedNumIsSet() const
{
    return rejectedNumIsSet_;
}

void DemandStatisticResponseV4::unsetrejectedNum()
{
    rejectedNumIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getSolvedNum() const
{
    return solvedNum_;
}

void DemandStatisticResponseV4::setSolvedNum(int32_t value)
{
    solvedNum_ = value;
    solvedNumIsSet_ = true;
}

bool DemandStatisticResponseV4::solvedNumIsSet() const
{
    return solvedNumIsSet_;
}

void DemandStatisticResponseV4::unsetsolvedNum()
{
    solvedNumIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getTestNum() const
{
    return testNum_;
}

void DemandStatisticResponseV4::setTestNum(int32_t value)
{
    testNum_ = value;
    testNumIsSet_ = true;
}

bool DemandStatisticResponseV4::testNumIsSet() const
{
    return testNumIsSet_;
}

void DemandStatisticResponseV4::unsettestNum()
{
    testNumIsSet_ = false;
}

int32_t DemandStatisticResponseV4::getTotal() const
{
    return total_;
}

void DemandStatisticResponseV4::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool DemandStatisticResponseV4::totalIsSet() const
{
    return totalIsSet_;
}

void DemandStatisticResponseV4::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


