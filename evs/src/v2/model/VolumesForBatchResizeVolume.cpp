

#include "huaweicloud/evs/v2/model/VolumesForBatchResizeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




VolumesForBatchResizeVolume::VolumesForBatchResizeVolume()
{
    id_ = "";
    idIsSet_ = false;
    newSize_ = 0;
    newSizeIsSet_ = false;
}

VolumesForBatchResizeVolume::~VolumesForBatchResizeVolume() = default;

void VolumesForBatchResizeVolume::validate()
{
}

web::json::value VolumesForBatchResizeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(newSizeIsSet_) {
        val[utility::conversions::to_string_t("new_size")] = ModelBase::toJson(newSize_);
    }

    return val;
}
bool VolumesForBatchResizeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewSize(refVal);
        }
    }
    return ok;
}


std::string VolumesForBatchResizeVolume::getId() const
{
    return id_;
}

void VolumesForBatchResizeVolume::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VolumesForBatchResizeVolume::idIsSet() const
{
    return idIsSet_;
}

void VolumesForBatchResizeVolume::unsetid()
{
    idIsSet_ = false;
}

int32_t VolumesForBatchResizeVolume::getNewSize() const
{
    return newSize_;
}

void VolumesForBatchResizeVolume::setNewSize(int32_t value)
{
    newSize_ = value;
    newSizeIsSet_ = true;
}

bool VolumesForBatchResizeVolume::newSizeIsSet() const
{
    return newSizeIsSet_;
}

void VolumesForBatchResizeVolume::unsetnewSize()
{
    newSizeIsSet_ = false;
}

}
}
}
}
}


