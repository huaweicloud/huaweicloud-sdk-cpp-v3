

#include "huaweicloud/sdrs/v1/model/SecurityGroupsParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




SecurityGroupsParams::SecurityGroupsParams()
{
    id_ = "";
    idIsSet_ = false;
}

SecurityGroupsParams::~SecurityGroupsParams() = default;

void SecurityGroupsParams::validate()
{
}

web::json::value SecurityGroupsParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool SecurityGroupsParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string SecurityGroupsParams::getId() const
{
    return id_;
}

void SecurityGroupsParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityGroupsParams::idIsSet() const
{
    return idIsSet_;
}

void SecurityGroupsParams::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


