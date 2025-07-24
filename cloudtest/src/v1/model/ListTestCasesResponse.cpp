

#include "huaweicloud/cloudtest/v1/model/ListTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCasesResponse::ListTestCasesResponse()
{
    valuesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTestCasesResponse::~ListTestCasesResponse() = default;

void ListTestCasesResponse::validate()
{
}

web::json::value ListTestCasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListTestCasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalTestCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
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


std::vector<ExternalTestCaseVo>& ListTestCasesResponse::getValues()
{
    return values_;
}

void ListTestCasesResponse::setValues(const std::vector<ExternalTestCaseVo>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListTestCasesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListTestCasesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

int32_t ListTestCasesResponse::getTotal() const
{
    return total_;
}

void ListTestCasesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTestCasesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTestCasesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


