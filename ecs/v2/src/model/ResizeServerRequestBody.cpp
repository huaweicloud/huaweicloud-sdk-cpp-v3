

#include "huaweicloud/ecs/model/ResizeServerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizeServerRequestBody::ResizeServerRequestBody()
{
    resizeIsSet_ = false;
}

ResizeServerRequestBody::~ResizeServerRequestBody() = default;

void ResizeServerRequestBody::validate()
{
}

web::json::value ResizeServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }

    return val;
}

bool ResizeServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizePrePaidServerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
        }
    }
    return ok;
}


ResizePrePaidServerOption ResizeServerRequestBody::getResize() const
{
    return resize_;
}

void ResizeServerRequestBody::setResize(const ResizePrePaidServerOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizeServerRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizeServerRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

}
}
}
}
}


