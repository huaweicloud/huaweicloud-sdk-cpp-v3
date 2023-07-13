

#include "huaweicloud/vpc/v2/model/AllocationPool.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AllocationPool::AllocationPool()
{
    end_ = "";
    endIsSet_ = false;
    start_ = "";
    startIsSet_ = false;
}

AllocationPool::~AllocationPool() = default;

void AllocationPool::validate()
{
}

web::json::value AllocationPool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(startIsSet_) {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(start_);
    }

    return val;
}

bool AllocationPool::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStart(refVal);
        }
    }
    return ok;
}

std::string AllocationPool::getEnd() const
{
    return end_;
}

void AllocationPool::setEnd(const std::string& value)
{
    end_ = value;
    endIsSet_ = true;
}

bool AllocationPool::endIsSet() const
{
    return endIsSet_;
}

void AllocationPool::unsetend()
{
    endIsSet_ = false;
}

std::string AllocationPool::getStart() const
{
    return start_;
}

void AllocationPool::setStart(const std::string& value)
{
    start_ = value;
    startIsSet_ = true;
}

bool AllocationPool::startIsSet() const
{
    return startIsSet_;
}

void AllocationPool::unsetstart()
{
    startIsSet_ = false;
}

}
}
}
}
}


