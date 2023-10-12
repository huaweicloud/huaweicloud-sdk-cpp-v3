

#include "huaweicloud/lts/v2/model/AccessConfigTimeOffset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigTimeOffset::AccessConfigTimeOffset()
{
    offset_ = 0L;
    offsetIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

AccessConfigTimeOffset::~AccessConfigTimeOffset() = default;

void AccessConfigTimeOffset::validate()
{
}

web::json::value AccessConfigTimeOffset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool AccessConfigTimeOffset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


int64_t AccessConfigTimeOffset::getOffset() const
{
    return offset_;
}

void AccessConfigTimeOffset::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool AccessConfigTimeOffset::offsetIsSet() const
{
    return offsetIsSet_;
}

void AccessConfigTimeOffset::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string AccessConfigTimeOffset::getUnit() const
{
    return unit_;
}

void AccessConfigTimeOffset::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool AccessConfigTimeOffset::unitIsSet() const
{
    return unitIsSet_;
}

void AccessConfigTimeOffset::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


