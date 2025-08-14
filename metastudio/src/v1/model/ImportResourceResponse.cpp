

#include "huaweicloud/metastudio/v1/model/ImportResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ImportResourceResponse::ImportResourceResponse()
{
    value_ = "";
    valueIsSet_ = false;
}

ImportResourceResponse::~ImportResourceResponse() = default;

void ImportResourceResponse::validate()
{
}

web::json::value ImportResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ImportResourceResponse::fromJson(const web::json::value& val)
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


std::string ImportResourceResponse::getValue() const
{
    return value_;
}

void ImportResourceResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ImportResourceResponse::valueIsSet() const
{
    return valueIsSet_;
}

void ImportResourceResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


