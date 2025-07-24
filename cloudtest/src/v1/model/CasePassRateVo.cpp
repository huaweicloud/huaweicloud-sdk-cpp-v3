

#include "huaweicloud/cloudtest/v1/model/CasePassRateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CasePassRateVo::CasePassRateVo()
{
    passRate_ = "";
    passRateIsSet_ = false;
    resultNumberListIsSet_ = false;
}

CasePassRateVo::~CasePassRateVo() = default;

void CasePassRateVo::validate()
{
}

web::json::value CasePassRateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passRateIsSet_) {
        val[utility::conversions::to_string_t("pass_rate")] = ModelBase::toJson(passRate_);
    }
    if(resultNumberListIsSet_) {
        val[utility::conversions::to_string_t("result_number_list")] = ModelBase::toJson(resultNumberList_);
    }

    return val;
}
bool CasePassRateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pass_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<NameAndValueVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultNumberList(refVal);
        }
    }
    return ok;
}


std::string CasePassRateVo::getPassRate() const
{
    return passRate_;
}

void CasePassRateVo::setPassRate(const std::string& value)
{
    passRate_ = value;
    passRateIsSet_ = true;
}

bool CasePassRateVo::passRateIsSet() const
{
    return passRateIsSet_;
}

void CasePassRateVo::unsetpassRate()
{
    passRateIsSet_ = false;
}

std::vector<NameAndValueVo>& CasePassRateVo::getResultNumberList()
{
    return resultNumberList_;
}

void CasePassRateVo::setResultNumberList(const std::vector<NameAndValueVo>& value)
{
    resultNumberList_ = value;
    resultNumberListIsSet_ = true;
}

bool CasePassRateVo::resultNumberListIsSet() const
{
    return resultNumberListIsSet_;
}

void CasePassRateVo::unsetresultNumberList()
{
    resultNumberListIsSet_ = false;
}

}
}
}
}
}


