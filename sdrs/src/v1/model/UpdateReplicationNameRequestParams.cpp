

#include "huaweicloud/sdrs/v1/model/UpdateReplicationNameRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateReplicationNameRequestParams::UpdateReplicationNameRequestParams()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateReplicationNameRequestParams::~UpdateReplicationNameRequestParams() = default;

void UpdateReplicationNameRequestParams::validate()
{
}

web::json::value UpdateReplicationNameRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool UpdateReplicationNameRequestParams::fromJson(const web::json::value& val)
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

std::string UpdateReplicationNameRequestParams::getName() const
{
    return name_;
}

void UpdateReplicationNameRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateReplicationNameRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateReplicationNameRequestParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


