

#include "huaweicloud/projectman/v4/model/IssueConfigFieldsResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueConfigFieldsResponseBody_result::IssueConfigFieldsResponseBody_result()
{
    configFieldsIsSet_ = false;
}

IssueConfigFieldsResponseBody_result::~IssueConfigFieldsResponseBody_result() = default;

void IssueConfigFieldsResponseBody_result::validate()
{
}

web::json::value IssueConfigFieldsResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configFieldsIsSet_) {
        val[utility::conversions::to_string_t("config_fields")] = ModelBase::toJson(configFields_);
    }

    return val;
}
bool IssueConfigFieldsResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueConfigFieldsResponseBody_result_config_fields> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigFields(refVal);
        }
    }
    return ok;
}


std::vector<IssueConfigFieldsResponseBody_result_config_fields>& IssueConfigFieldsResponseBody_result::getConfigFields()
{
    return configFields_;
}

void IssueConfigFieldsResponseBody_result::setConfigFields(const std::vector<IssueConfigFieldsResponseBody_result_config_fields>& value)
{
    configFields_ = value;
    configFieldsIsSet_ = true;
}

bool IssueConfigFieldsResponseBody_result::configFieldsIsSet() const
{
    return configFieldsIsSet_;
}

void IssueConfigFieldsResponseBody_result::unsetconfigFields()
{
    configFieldsIsSet_ = false;
}

}
}
}
}
}


