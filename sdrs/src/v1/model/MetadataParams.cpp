

#include "huaweicloud/sdrs/v1/model/MetadataParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




MetadataParams::MetadataParams()
{
    systemFrozen_ = "";
    systemFrozenIsSet_ = false;
}

MetadataParams::~MetadataParams() = default;

void MetadataParams::validate()
{
}

web::json::value MetadataParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemFrozenIsSet_) {
        val[utility::conversions::to_string_t("__system__frozen")] = ModelBase::toJson(systemFrozen_);
    }

    return val;
}

bool MetadataParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__system__frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__frozen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemFrozen(refVal);
        }
    }
    return ok;
}

std::string MetadataParams::getSystemFrozen() const
{
    return systemFrozen_;
}

void MetadataParams::setSystemFrozen(const std::string& value)
{
    systemFrozen_ = value;
    systemFrozenIsSet_ = true;
}

bool MetadataParams::systemFrozenIsSet() const
{
    return systemFrozenIsSet_;
}

void MetadataParams::unsetsystemFrozen()
{
    systemFrozenIsSet_ = false;
}

}
}
}
}
}


