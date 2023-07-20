

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussEnlargeVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussEnlargeVolume::OpenGaussEnlargeVolume()
{
    size_ = 0;
    sizeIsSet_ = false;
}

OpenGaussEnlargeVolume::~OpenGaussEnlargeVolume() = default;

void OpenGaussEnlargeVolume::validate()
{
}

web::json::value OpenGaussEnlargeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool OpenGaussEnlargeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}

int32_t OpenGaussEnlargeVolume::getSize() const
{
    return size_;
}

void OpenGaussEnlargeVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OpenGaussEnlargeVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void OpenGaussEnlargeVolume::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


