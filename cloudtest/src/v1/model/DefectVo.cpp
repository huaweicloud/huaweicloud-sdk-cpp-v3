

#include "huaweicloud/cloudtest/v1/model/DefectVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DefectVo::DefectVo()
{
    total_ = 0;
    totalIsSet_ = false;
    notSolved_ = 0;
    notSolvedIsSet_ = false;
    severityNumberListIsSet_ = false;
}

DefectVo::~DefectVo() = default;

void DefectVo::validate()
{
}

web::json::value DefectVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(notSolvedIsSet_) {
        val[utility::conversions::to_string_t("not_solved")] = ModelBase::toJson(notSolved_);
    }
    if(severityNumberListIsSet_) {
        val[utility::conversions::to_string_t("severity_number_list")] = ModelBase::toJson(severityNumberList_);
    }

    return val;
}
bool DefectVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("not_solved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_solved"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotSolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityNumberList(refVal);
        }
    }
    return ok;
}


int32_t DefectVo::getTotal() const
{
    return total_;
}

void DefectVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool DefectVo::totalIsSet() const
{
    return totalIsSet_;
}

void DefectVo::unsettotal()
{
    totalIsSet_ = false;
}

int32_t DefectVo::getNotSolved() const
{
    return notSolved_;
}

void DefectVo::setNotSolved(int32_t value)
{
    notSolved_ = value;
    notSolvedIsSet_ = true;
}

bool DefectVo::notSolvedIsSet() const
{
    return notSolvedIsSet_;
}

void DefectVo::unsetnotSolved()
{
    notSolvedIsSet_ = false;
}

std::vector<NameAndValueVo>& DefectVo::getSeverityNumberList()
{
    return severityNumberList_;
}

void DefectVo::setSeverityNumberList(const std::vector<NameAndValueVo>& value)
{
    severityNumberList_ = value;
    severityNumberListIsSet_ = true;
}

bool DefectVo::severityNumberListIsSet() const
{
    return severityNumberListIsSet_;
}

void DefectVo::unsetseverityNumberList()
{
    severityNumberListIsSet_ = false;
}

}
}
}
}
}


