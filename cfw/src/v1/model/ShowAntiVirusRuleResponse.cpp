

#include "huaweicloud/cfw/v1/model/ShowAntiVirusRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAntiVirusRuleResponse::ShowAntiVirusRuleResponse()
{
    dataIsSet_ = false;
}

ShowAntiVirusRuleResponse::~ShowAntiVirusRuleResponse() = default;

void ShowAntiVirusRuleResponse::validate()
{
}

web::json::value ShowAntiVirusRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowAntiVirusRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            AntiVirusRuleVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


AntiVirusRuleVO ShowAntiVirusRuleResponse::getData() const
{
    return data_;
}

void ShowAntiVirusRuleResponse::setData(const AntiVirusRuleVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowAntiVirusRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowAntiVirusRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


