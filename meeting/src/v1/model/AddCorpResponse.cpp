

#include "huaweicloud/meeting/v1/model/AddCorpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddCorpResponse::AddCorpResponse()
{
    value_ = "";
    valueIsSet_ = false;
}

AddCorpResponse::~AddCorpResponse() = default;

void AddCorpResponse::validate()
{
}

web::json::value AddCorpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool AddCorpResponse::fromJson(const web::json::value& val)
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


std::string AddCorpResponse::getValue() const
{
    return value_;
}

void AddCorpResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AddCorpResponse::valueIsSet() const
{
    return valueIsSet_;
}

void AddCorpResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


