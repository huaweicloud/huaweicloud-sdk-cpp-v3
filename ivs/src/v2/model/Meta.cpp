

#include "huaweicloud/ivs/v2/model/Meta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




Meta::Meta()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

Meta::~Meta() = default;

void Meta::validate()
{
}

web::json::value Meta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool Meta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    return ok;
}


std::string Meta::getUuid() const
{
    return uuid_;
}

void Meta::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool Meta::uuidIsSet() const
{
    return uuidIsSet_;
}

void Meta::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


