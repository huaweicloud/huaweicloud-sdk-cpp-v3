

#include "huaweicloud/vod/v1/model/ShowStorageModeTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowStorageModeTypeResponse::ShowStorageModeTypeResponse()
{
    storageModeType_ = "";
    storageModeTypeIsSet_ = false;
}

ShowStorageModeTypeResponse::~ShowStorageModeTypeResponse() = default;

void ShowStorageModeTypeResponse::validate()
{
}

web::json::value ShowStorageModeTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(storageModeTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode_type")] = ModelBase::toJson(storageModeType_);
    }

    return val;
}
bool ShowStorageModeTypeResponse::fromJson(const web::json::value& val)
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


std::string ShowStorageModeTypeResponse::getStorageModeType() const
{
    return storageModeType_;
}

void ShowStorageModeTypeResponse::setStorageModeType(const std::string& value)
{
    storageModeType_ = value;
    storageModeTypeIsSet_ = true;
}

bool ShowStorageModeTypeResponse::storageModeTypeIsSet() const
{
    return storageModeTypeIsSet_;
}

void ShowStorageModeTypeResponse::unsetstorageModeType()
{
    storageModeTypeIsSet_ = false;
}

}
}
}
}
}


