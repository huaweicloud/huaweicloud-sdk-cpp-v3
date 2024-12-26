

#include "huaweicloud/cfw/v1/model/ChangeIpsRuleModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsRuleModeResponse::ChangeIpsRuleModeResponse()
{
    dataIsSet_ = false;
}

ChangeIpsRuleModeResponse::~ChangeIpsRuleModeResponse() = default;

void ChangeIpsRuleModeResponse::validate()
{
}

web::json::value ChangeIpsRuleModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ChangeIpsRuleModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpsRuleChangeRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IpsRuleChangeRespBody ChangeIpsRuleModeResponse::getData() const
{
    return data_;
}

void ChangeIpsRuleModeResponse::setData(const IpsRuleChangeRespBody& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ChangeIpsRuleModeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ChangeIpsRuleModeResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


