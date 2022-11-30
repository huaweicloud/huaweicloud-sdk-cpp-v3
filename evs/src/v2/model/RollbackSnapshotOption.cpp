

#include "huaweicloud/evs/v2/model/RollbackSnapshotOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotOption::RollbackSnapshotOption()
{
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

RollbackSnapshotOption::~RollbackSnapshotOption() = default;

void RollbackSnapshotOption::validate()
{
}

web::json::value RollbackSnapshotOption::toJson() const
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

bool RollbackSnapshotOption::fromJson(const web::json::value& val)
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


std::string RollbackSnapshotOption::getName() const
{
    return name_;
}

void RollbackSnapshotOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RollbackSnapshotOption::nameIsSet() const
{
    return nameIsSet_;
}

void RollbackSnapshotOption::unsetname()
{
    nameIsSet_ = false;
}

std::string RollbackSnapshotOption::getVolumeId() const
{
    return volumeId_;
}

void RollbackSnapshotOption::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool RollbackSnapshotOption::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void RollbackSnapshotOption::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


