

#include "huaweicloud/cloudtest/v1/model/CasePassVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CasePassVo::CasePassVo()
{
    passRate_ = "";
    passRateIsSet_ = false;
    resultNumberListIsSet_ = false;
}

CasePassVo::~CasePassVo() = default;

void CasePassVo::validate()
{
}

web::json::value CasePassVo::toJson() const
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
bool CasePassVo::fromJson(const web::json::value& val)
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


std::string CasePassVo::getPassRate() const
{
    return passRate_;
}

void CasePassVo::setPassRate(const std::string& value)
{
    passRate_ = value;
    passRateIsSet_ = true;
}

bool CasePassVo::passRateIsSet() const
{
    return passRateIsSet_;
}

void CasePassVo::unsetpassRate()
{
    passRateIsSet_ = false;
}

std::vector<NameAndValueVo>& CasePassVo::getResultNumberList()
{
    return resultNumberList_;
}

void CasePassVo::setResultNumberList(const std::vector<NameAndValueVo>& value)
{
    resultNumberList_ = value;
    resultNumberListIsSet_ = true;
}

bool CasePassVo::resultNumberListIsSet() const
{
    return resultNumberListIsSet_;
}

void CasePassVo::unsetresultNumberList()
{
    resultNumberListIsSet_ = false;
}

}
}
}
}
}


