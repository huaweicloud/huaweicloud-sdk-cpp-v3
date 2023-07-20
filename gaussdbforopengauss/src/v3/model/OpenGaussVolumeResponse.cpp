

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussVolumeResponse::OpenGaussVolumeResponse()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

OpenGaussVolumeResponse::~OpenGaussVolumeResponse() = default;

void OpenGaussVolumeResponse::validate()
{
}

web::json::value OpenGaussVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool OpenGaussVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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

std::string OpenGaussVolumeResponse::getType() const
{
    return type_;
}

void OpenGaussVolumeResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussVolumeResponse::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussVolumeResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t OpenGaussVolumeResponse::getSize() const
{
    return size_;
}

void OpenGaussVolumeResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OpenGaussVolumeResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void OpenGaussVolumeResponse::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


