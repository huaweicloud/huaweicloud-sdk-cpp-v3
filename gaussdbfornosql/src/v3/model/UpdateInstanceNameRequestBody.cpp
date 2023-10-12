

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceNameRequestBody::UpdateInstanceNameRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateInstanceNameRequestBody::~UpdateInstanceNameRequestBody() = default;

void UpdateInstanceNameRequestBody::validate()
{
}

web::json::value UpdateInstanceNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateInstanceNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceNameRequestBody::getName() const
{
    return name_;
}

void UpdateInstanceNameRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInstanceNameRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInstanceNameRequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


