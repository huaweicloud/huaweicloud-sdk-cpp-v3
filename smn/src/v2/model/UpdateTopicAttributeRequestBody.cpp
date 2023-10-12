

#include "huaweicloud/smn/v2/model/UpdateTopicAttributeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicAttributeRequestBody::UpdateTopicAttributeRequestBody()
{
    value_ = "";
    valueIsSet_ = false;
}

UpdateTopicAttributeRequestBody::~UpdateTopicAttributeRequestBody() = default;

void UpdateTopicAttributeRequestBody::validate()
{
}

web::json::value UpdateTopicAttributeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool UpdateTopicAttributeRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateTopicAttributeRequestBody::getValue() const
{
    return value_;
}

void UpdateTopicAttributeRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateTopicAttributeRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateTopicAttributeRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


