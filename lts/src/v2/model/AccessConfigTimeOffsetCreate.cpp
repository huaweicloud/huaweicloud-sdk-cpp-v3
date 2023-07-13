

#include "huaweicloud/lts/v2/model/AccessConfigTimeOffsetCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigTimeOffsetCreate::AccessConfigTimeOffsetCreate()
{
    offset_ = 0L;
    offsetIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

AccessConfigTimeOffsetCreate::~AccessConfigTimeOffsetCreate() = default;

void AccessConfigTimeOffsetCreate::validate()
{
}

web::json::value AccessConfigTimeOffsetCreate::toJson() const
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

bool AccessConfigTimeOffsetCreate::fromJson(const web::json::value& val)
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

int64_t AccessConfigTimeOffsetCreate::getOffset() const
{
    return offset_;
}

void AccessConfigTimeOffsetCreate::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool AccessConfigTimeOffsetCreate::offsetIsSet() const
{
    return offsetIsSet_;
}

void AccessConfigTimeOffsetCreate::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string AccessConfigTimeOffsetCreate::getUnit() const
{
    return unit_;
}

void AccessConfigTimeOffsetCreate::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool AccessConfigTimeOffsetCreate::unitIsSet() const
{
    return unitIsSet_;
}

void AccessConfigTimeOffsetCreate::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


