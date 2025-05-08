

#include "huaweicloud/vod/v1/model/PicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PicInfo::PicInfo()
{
    objectKey_ = "";
    objectKeyIsSet_ = false;
}

PicInfo::~PicInfo() = default;

void PicInfo::validate()
{
}

web::json::value PicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectKeyIsSet_) {
        val[utility::conversions::to_string_t("object_key")] = ModelBase::toJson(objectKey_);
    }

    return val;
}
bool PicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectKey(refVal);
        }
    }
    return ok;
}


std::string PicInfo::getObjectKey() const
{
    return objectKey_;
}

void PicInfo::setObjectKey(const std::string& value)
{
    objectKey_ = value;
    objectKeyIsSet_ = true;
}

bool PicInfo::objectKeyIsSet() const
{
    return objectKeyIsSet_;
}

void PicInfo::unsetobjectKey()
{
    objectKeyIsSet_ = false;
}

}
}
}
}
}


