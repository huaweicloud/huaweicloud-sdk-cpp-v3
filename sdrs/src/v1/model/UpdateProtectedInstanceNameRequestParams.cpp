

#include "huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectedInstanceNameRequestParams::UpdateProtectedInstanceNameRequestParams()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateProtectedInstanceNameRequestParams::~UpdateProtectedInstanceNameRequestParams() = default;

void UpdateProtectedInstanceNameRequestParams::validate()
{
}

web::json::value UpdateProtectedInstanceNameRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool UpdateProtectedInstanceNameRequestParams::fromJson(const web::json::value& val)
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


std::string UpdateProtectedInstanceNameRequestParams::getName() const
{
    return name_;
}

void UpdateProtectedInstanceNameRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProtectedInstanceNameRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProtectedInstanceNameRequestParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


