

#include "huaweicloud/cfw/v1/model/UpdateAntiVirusRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAntiVirusRuleResponse::UpdateAntiVirusRuleResponse()
{
    dataIsSet_ = false;
}

UpdateAntiVirusRuleResponse::~UpdateAntiVirusRuleResponse() = default;

void UpdateAntiVirusRuleResponse::validate()
{
}

web::json::value UpdateAntiVirusRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UpdateAntiVirusRuleResponse::fromJson(const web::json::value& val)
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


ResponseData UpdateAntiVirusRuleResponse::getData() const
{
    return data_;
}

void UpdateAntiVirusRuleResponse::setData(const ResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateAntiVirusRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateAntiVirusRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


