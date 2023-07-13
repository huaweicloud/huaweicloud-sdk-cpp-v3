

#include "huaweicloud/ecs/v2/model/PostPaidServerIpv6Bandwidth.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerIpv6Bandwidth::PostPaidServerIpv6Bandwidth()
{
    id_ = "";
    idIsSet_ = false;
}

PostPaidServerIpv6Bandwidth::~PostPaidServerIpv6Bandwidth() = default;

void PostPaidServerIpv6Bandwidth::validate()
{
}

web::json::value PostPaidServerIpv6Bandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool PostPaidServerIpv6Bandwidth::fromJson(const web::json::value& val)
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

std::string PostPaidServerIpv6Bandwidth::getId() const
{
    return id_;
}

void PostPaidServerIpv6Bandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostPaidServerIpv6Bandwidth::idIsSet() const
{
    return idIsSet_;
}

void PostPaidServerIpv6Bandwidth::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


