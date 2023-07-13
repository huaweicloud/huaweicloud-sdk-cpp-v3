

#include "huaweicloud/evs/v2/model/CreateVolumeTransferOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeTransferOption::CreateVolumeTransferOption()
{
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

CreateVolumeTransferOption::~CreateVolumeTransferOption() = default;

void CreateVolumeTransferOption::validate()
{
}

web::json::value CreateVolumeTransferOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool CreateVolumeTransferOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}

std::string CreateVolumeTransferOption::getName() const
{
    return name_;
}

void CreateVolumeTransferOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVolumeTransferOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVolumeTransferOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVolumeTransferOption::getVolumeId() const
{
    return volumeId_;
}

void CreateVolumeTransferOption::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateVolumeTransferOption::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateVolumeTransferOption::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


