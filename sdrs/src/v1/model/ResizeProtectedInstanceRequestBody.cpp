

#include "huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResizeProtectedInstanceRequestBody::ResizeProtectedInstanceRequestBody()
{
    resizeIsSet_ = false;
}

ResizeProtectedInstanceRequestBody::~ResizeProtectedInstanceRequestBody() = default;

void ResizeProtectedInstanceRequestBody::validate()
{
}

web::json::value ResizeProtectedInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }

    return val;
}

bool ResizeProtectedInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizeProtectedInstanceRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
        }
    }
    return ok;
}


ResizeProtectedInstanceRequestParams ResizeProtectedInstanceRequestBody::getResize() const
{
    return resize_;
}

void ResizeProtectedInstanceRequestBody::setResize(const ResizeProtectedInstanceRequestParams& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizeProtectedInstanceRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizeProtectedInstanceRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

}
}
}
}
}


