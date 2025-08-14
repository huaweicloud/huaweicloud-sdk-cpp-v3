

#include "huaweicloud/metastudio/v1/model/ExportResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExportResourceResponse::ExportResourceResponse()
{
    value_ = "";
    valueIsSet_ = false;
}

ExportResourceResponse::~ExportResourceResponse() = default;

void ExportResourceResponse::validate()
{
}

web::json::value ExportResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ExportResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ExportResourceResponse::getValue() const
{
    return value_;
}

void ExportResourceResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ExportResourceResponse::valueIsSet() const
{
    return valueIsSet_;
}

void ExportResourceResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


