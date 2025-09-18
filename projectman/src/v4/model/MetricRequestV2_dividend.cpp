

#include "huaweicloud/projectman/v4/model/MetricRequestV2_dividend.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequestV2_dividend::MetricRequestV2_dividend()
{
    customFieldsIsSet_ = false;
}

MetricRequestV2_dividend::~MetricRequestV2_dividend() = default;

void MetricRequestV2_dividend::validate()
{
}

web::json::value MetricRequestV2_dividend::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }

    return val;
}
bool MetricRequestV2_dividend::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricRequestV2_dividend_custom_fields> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    return ok;
}


std::vector<MetricRequestV2_dividend_custom_fields>& MetricRequestV2_dividend::getCustomFields()
{
    return customFields_;
}

void MetricRequestV2_dividend::setCustomFields(const std::vector<MetricRequestV2_dividend_custom_fields>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool MetricRequestV2_dividend::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void MetricRequestV2_dividend::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

}
}
}
}
}


