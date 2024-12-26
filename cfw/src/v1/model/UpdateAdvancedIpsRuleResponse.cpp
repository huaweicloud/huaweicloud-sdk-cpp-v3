

#include "huaweicloud/cfw/v1/model/UpdateAdvancedIpsRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAdvancedIpsRuleResponse::UpdateAdvancedIpsRuleResponse()
{
    dataIsSet_ = false;
}

UpdateAdvancedIpsRuleResponse::~UpdateAdvancedIpsRuleResponse() = default;

void UpdateAdvancedIpsRuleResponse::validate()
{
}

web::json::value UpdateAdvancedIpsRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAdvancedIpsRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ResponseData UpdateAdvancedIpsRuleResponse::getData() const
{
    return data_;
}

void UpdateAdvancedIpsRuleResponse::setData(const ResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAdvancedIpsRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAdvancedIpsRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


