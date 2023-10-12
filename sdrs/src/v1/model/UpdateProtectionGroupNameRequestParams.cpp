

#include "huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequestParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectionGroupNameRequestParams::UpdateProtectionGroupNameRequestParams()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateProtectionGroupNameRequestParams::~UpdateProtectionGroupNameRequestParams() = default;

void UpdateProtectionGroupNameRequestParams::validate()
{
}

web::json::value UpdateProtectionGroupNameRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateProtectionGroupNameRequestParams::fromJson(const web::json::value& val)
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


std::string UpdateProtectionGroupNameRequestParams::getName() const
{
    return name_;
}

void UpdateProtectionGroupNameRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProtectionGroupNameRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProtectionGroupNameRequestParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


