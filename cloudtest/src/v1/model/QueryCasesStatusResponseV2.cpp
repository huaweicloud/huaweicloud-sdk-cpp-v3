

#include "huaweicloud/cloudtest/v1/model/QueryCasesStatusResponseV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryCasesStatusResponseV2::QueryCasesStatusResponseV2()
{
    casesStatusJAIsSet_ = false;
}

QueryCasesStatusResponseV2::~QueryCasesStatusResponseV2() = default;

void QueryCasesStatusResponseV2::validate()
{
}

web::json::value QueryCasesStatusResponseV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(casesStatusJAIsSet_) {
        val[utility::conversions::to_string_t("casesStatusJA")] = ModelBase::toJson(casesStatusJA_);
    }

    return val;
}
bool QueryCasesStatusResponseV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("casesStatusJA"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("casesStatusJA"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasesStatusJA(refVal);
        }
    }
    return ok;
}


std::vector<Object>& QueryCasesStatusResponseV2::getCasesStatusJA()
{
    return casesStatusJA_;
}

void QueryCasesStatusResponseV2::setCasesStatusJA(const std::vector<Object>& value)
{
    casesStatusJA_ = value;
    casesStatusJAIsSet_ = true;
}

bool QueryCasesStatusResponseV2::casesStatusJAIsSet() const
{
    return casesStatusJAIsSet_;
}

void QueryCasesStatusResponseV2::unsetcasesStatusJA()
{
    casesStatusJAIsSet_ = false;
}

}
}
}
}
}


