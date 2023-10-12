

#include "huaweicloud/mpc/v1/model/PicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




PicInfo::PicInfo()
{
    picName_ = "";
    picNameIsSet_ = false;
}

PicInfo::~PicInfo() = default;

void PicInfo::validate()
{
}

web::json::value PicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(picNameIsSet_) {
        val[utility::conversions::to_string_t("pic_name")] = ModelBase::toJson(picName_);
    }

    return val;
}
bool PicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicName(refVal);
        }
    }
    return ok;
}


std::string PicInfo::getPicName() const
{
    return picName_;
}

void PicInfo::setPicName(const std::string& value)
{
    picName_ = value;
    picNameIsSet_ = true;
}

bool PicInfo::picNameIsSet() const
{
    return picNameIsSet_;
}

void PicInfo::unsetpicName()
{
    picNameIsSet_ = false;
}

}
}
}
}
}


