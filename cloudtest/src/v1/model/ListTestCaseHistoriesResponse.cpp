

#include "huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseHistoriesResponse::ListTestCaseHistoriesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    valuesIsSet_ = false;
}

ListTestCaseHistoriesResponse::~ListTestCaseHistoriesResponse() = default;

void ListTestCaseHistoriesResponse::validate()
{
}

web::json::value ListTestCaseHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ListTestCaseHistoriesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalTestCaseHistoryVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


int32_t ListTestCaseHistoriesResponse::getTotal() const
{
    return total_;
}

void ListTestCaseHistoriesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTestCaseHistoriesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTestCaseHistoriesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ExternalTestCaseHistoryVo>& ListTestCaseHistoriesResponse::getValues()
{
    return values_;
}

void ListTestCaseHistoriesResponse::setValues(const std::vector<ExternalTestCaseHistoryVo>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListTestCaseHistoriesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListTestCaseHistoriesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


