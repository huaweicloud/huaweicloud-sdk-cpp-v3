

#include "huaweicloud/codeartscheck/v2/model/CheckRulesetParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRulesetParametersResponse::CheckRulesetParametersResponse()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CheckRulesetParametersResponse::~CheckRulesetParametersResponse() = default;

void CheckRulesetParametersResponse::validate()
{
}

web::json::value CheckRulesetParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool CheckRulesetParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskCheckParamters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::vector<TaskCheckParamters>& CheckRulesetParametersResponse::getData()
{
    return data_;
}

void CheckRulesetParametersResponse::setData(const std::vector<TaskCheckParamters>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CheckRulesetParametersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CheckRulesetParametersResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t CheckRulesetParametersResponse::getTotal() const
{
    return total_;
}

void CheckRulesetParametersResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CheckRulesetParametersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void CheckRulesetParametersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


