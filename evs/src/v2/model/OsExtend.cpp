

#include "huaweicloud/evs/v2/model/OsExtend.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




OsExtend::OsExtend()
{
    newSize_ = 0;
    newSizeIsSet_ = false;
}

OsExtend::~OsExtend() = default;

void OsExtend::validate()
{
}

web::json::value OsExtend::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newSizeIsSet_) {
        val[utility::conversions::to_string_t("new_size")] = ModelBase::toJson(newSize_);
    }

    return val;
}

bool OsExtend::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewSize(refVal);
        }
    }
    return ok;
}


int32_t OsExtend::getNewSize() const
{
    return newSize_;
}

void OsExtend::setNewSize(int32_t value)
{
    newSize_ = value;
    newSizeIsSet_ = true;
}

bool OsExtend::newSizeIsSet() const
{
    return newSizeIsSet_;
}

void OsExtend::unsetnewSize()
{
    newSizeIsSet_ = false;
}

}
}
}
}
}


