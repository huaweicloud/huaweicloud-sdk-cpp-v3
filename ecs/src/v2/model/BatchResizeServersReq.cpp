

#include "huaweicloud/ecs/v2/model/BatchResizeServersReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResizeServersReq::BatchResizeServersReq()
{
    resizeIsSet_ = false;
}

BatchResizeServersReq::~BatchResizeServersReq() = default;

void BatchResizeServersReq::validate()
{
}

web::json::value BatchResizeServersReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }

    return val;
}
bool BatchResizeServersReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            BatchResizeServersOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
        }
    }
    return ok;
}


BatchResizeServersOption BatchResizeServersReq::getResize() const
{
    return resize_;
}

void BatchResizeServersReq::setResize(const BatchResizeServersOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool BatchResizeServersReq::resizeIsSet() const
{
    return resizeIsSet_;
}

void BatchResizeServersReq::unsetresize()
{
    resizeIsSet_ = false;
}

}
}
}
}
}


