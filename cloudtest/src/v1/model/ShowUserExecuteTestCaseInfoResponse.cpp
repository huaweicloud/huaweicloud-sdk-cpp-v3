

#include "huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowUserExecuteTestCaseInfoResponse::ShowUserExecuteTestCaseInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    valuesIsSet_ = false;
}

ShowUserExecuteTestCaseInfoResponse::~ShowUserExecuteTestCaseInfoResponse() = default;

void ShowUserExecuteTestCaseInfoResponse::validate()
{
}

web::json::value ShowUserExecuteTestCaseInfoResponse::toJson() const
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
bool ShowUserExecuteTestCaseInfoResponse::fromJson(const web::json::value& val)
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
            std::vector<ExternalUserExecuteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


int32_t ShowUserExecuteTestCaseInfoResponse::getTotal() const
{
    return total_;
}

void ShowUserExecuteTestCaseInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowUserExecuteTestCaseInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ExternalUserExecuteInfo>& ShowUserExecuteTestCaseInfoResponse::getValues()
{
    return values_;
}

void ShowUserExecuteTestCaseInfoResponse::setValues(const std::vector<ExternalUserExecuteInfo>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ShowUserExecuteTestCaseInfoResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ShowUserExecuteTestCaseInfoResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


