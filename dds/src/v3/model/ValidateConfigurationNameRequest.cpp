

#include "huaweicloud/dds/v3/model/ValidateConfigurationNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ValidateConfigurationNameRequest::ValidateConfigurationNameRequest()
{
    name_ = "";
    nameIsSet_ = false;
}

ValidateConfigurationNameRequest::~ValidateConfigurationNameRequest() = default;

void ValidateConfigurationNameRequest::validate()
{
}

web::json::value ValidateConfigurationNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ValidateConfigurationNameRequest::fromJson(const web::json::value& val)
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


std::string ValidateConfigurationNameRequest::getName() const
{
    return name_;
}

void ValidateConfigurationNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ValidateConfigurationNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ValidateConfigurationNameRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


