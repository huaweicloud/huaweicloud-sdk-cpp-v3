

#include "huaweicloud/modelarts/v1/model/VolumeExtendParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeExtendParams::VolumeExtendParams()
{
    volumeGroup_ = "";
    volumeGroupIsSet_ = false;
}

VolumeExtendParams::~VolumeExtendParams() = default;

void VolumeExtendParams::validate()
{
}

web::json::value VolumeExtendParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeGroupIsSet_) {
        val[utility::conversions::to_string_t("volumeGroup")] = ModelBase::toJson(volumeGroup_);
    }

    return val;
}
bool VolumeExtendParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroup(refVal);
        }
    }
    return ok;
}


std::string VolumeExtendParams::getVolumeGroup() const
{
    return volumeGroup_;
}

void VolumeExtendParams::setVolumeGroup(const std::string& value)
{
    volumeGroup_ = value;
    volumeGroupIsSet_ = true;
}

bool VolumeExtendParams::volumeGroupIsSet() const
{
    return volumeGroupIsSet_;
}

void VolumeExtendParams::unsetvolumeGroup()
{
    volumeGroupIsSet_ = false;
}

}
}
}
}
}


