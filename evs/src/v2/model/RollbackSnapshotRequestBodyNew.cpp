

#include "huaweicloud/evs/v2/model/RollbackSnapshotRequestBodyNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotRequestBodyNew::RollbackSnapshotRequestBodyNew()
{
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

RollbackSnapshotRequestBodyNew::~RollbackSnapshotRequestBodyNew() = default;

void RollbackSnapshotRequestBodyNew::validate()
{
}

web::json::value RollbackSnapshotRequestBodyNew::toJson() const
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
bool RollbackSnapshotRequestBodyNew::fromJson(const web::json::value& val)
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


std::string RollbackSnapshotRequestBodyNew::getName() const
{
    return name_;
}

void RollbackSnapshotRequestBodyNew::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RollbackSnapshotRequestBodyNew::nameIsSet() const
{
    return nameIsSet_;
}

void RollbackSnapshotRequestBodyNew::unsetname()
{
    nameIsSet_ = false;
}

std::string RollbackSnapshotRequestBodyNew::getVolumeId() const
{
    return volumeId_;
}

void RollbackSnapshotRequestBodyNew::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool RollbackSnapshotRequestBodyNew::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void RollbackSnapshotRequestBodyNew::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


