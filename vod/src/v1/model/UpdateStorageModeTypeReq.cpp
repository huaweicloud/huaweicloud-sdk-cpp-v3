

#include "huaweicloud/vod/v1/model/UpdateStorageModeTypeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeTypeReq::UpdateStorageModeTypeReq()
{
    storageModeType_ = "";
    storageModeTypeIsSet_ = false;
}

UpdateStorageModeTypeReq::~UpdateStorageModeTypeReq() = default;

void UpdateStorageModeTypeReq::validate()
{
}

web::json::value UpdateStorageModeTypeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageModeTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode_type")] = ModelBase::toJson(storageModeType_);
    }

    return val;
}
bool UpdateStorageModeTypeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("storage_mode_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_mode_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageModeType(refVal);
        }
    }
    return ok;
}


std::string UpdateStorageModeTypeReq::getStorageModeType() const
{
    return storageModeType_;
}

void UpdateStorageModeTypeReq::setStorageModeType(const std::string& value)
{
    storageModeType_ = value;
    storageModeTypeIsSet_ = true;
}

bool UpdateStorageModeTypeReq::storageModeTypeIsSet() const
{
    return storageModeTypeIsSet_;
}

void UpdateStorageModeTypeReq::unsetstorageModeType()
{
    storageModeTypeIsSet_ = false;
}

}
}
}
}
}


