

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussVolumeResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussVolumeResult::OpenGaussVolumeResult()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

OpenGaussVolumeResult::~OpenGaussVolumeResult() = default;

void OpenGaussVolumeResult::validate()
{
}

web::json::value OpenGaussVolumeResult::toJson() const
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

bool OpenGaussVolumeResult::fromJson(const web::json::value& val)
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

std::string OpenGaussVolumeResult::getType() const
{
    return type_;
}

void OpenGaussVolumeResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussVolumeResult::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussVolumeResult::unsettype()
{
    typeIsSet_ = false;
}

int32_t OpenGaussVolumeResult::getSize() const
{
    return size_;
}

void OpenGaussVolumeResult::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OpenGaussVolumeResult::sizeIsSet() const
{
    return sizeIsSet_;
}

void OpenGaussVolumeResult::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


