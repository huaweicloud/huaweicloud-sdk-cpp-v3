

#include "huaweicloud/ecs/model/ResizePostPaidServerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePostPaidServerRequestBody::ResizePostPaidServerRequestBody()
{
    resizeIsSet_ = false;
}

ResizePostPaidServerRequestBody::~ResizePostPaidServerRequestBody() = default;

void ResizePostPaidServerRequestBody::validate()
{
}

web::json::value ResizePostPaidServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }

    return val;
}

bool ResizePostPaidServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizePostPaidServerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
        }
    }
    return ok;
}


ResizePostPaidServerOption ResizePostPaidServerRequestBody::getResize() const
{
    return resize_;
}

void ResizePostPaidServerRequestBody::setResize(const ResizePostPaidServerOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizePostPaidServerRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizePostPaidServerRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

}
}
}
}
}


