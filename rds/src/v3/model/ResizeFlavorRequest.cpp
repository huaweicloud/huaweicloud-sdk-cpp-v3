

#include "huaweicloud/rds/v3/model/ResizeFlavorRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResizeFlavorRequest::ResizeFlavorRequest()
{
    resizeFlavorIsSet_ = false;
}

ResizeFlavorRequest::~ResizeFlavorRequest() = default;

void ResizeFlavorRequest::validate()
{
}

web::json::value ResizeFlavorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeFlavorIsSet_) {
        val[utility::conversions::to_string_t("resize_flavor")] = ModelBase::toJson(resizeFlavor_);
    }

    return val;
}

bool ResizeFlavorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize_flavor"));
        if(!fieldValue.is_null())
        {
            ResizeFlavorObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResizeFlavor(refVal);
        }
    }
    return ok;
}

ResizeFlavorObject ResizeFlavorRequest::getResizeFlavor() const
{
    return resizeFlavor_;
}

void ResizeFlavorRequest::setResizeFlavor(const ResizeFlavorObject& value)
{
    resizeFlavor_ = value;
    resizeFlavorIsSet_ = true;
}

bool ResizeFlavorRequest::resizeFlavorIsSet() const
{
    return resizeFlavorIsSet_;
}

void ResizeFlavorRequest::unsetresizeFlavor()
{
    resizeFlavorIsSet_ = false;
}

}
}
}
}
}


