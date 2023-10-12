

#include "huaweicloud/evs/v2/model/CreateVolumeSchedulerHints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeSchedulerHints::CreateVolumeSchedulerHints()
{
    dedicatedStorageId_ = "";
    dedicatedStorageIdIsSet_ = false;
}

CreateVolumeSchedulerHints::~CreateVolumeSchedulerHints() = default;

void CreateVolumeSchedulerHints::validate()
{
}

web::json::value CreateVolumeSchedulerHints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dedicatedStorageIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_storage_id")] = ModelBase::toJson(dedicatedStorageId_);
    }

    return val;
}
bool CreateVolumeSchedulerHints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dedicated_storage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_storage_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedStorageId(refVal);
        }
    }
    return ok;
}


std::string CreateVolumeSchedulerHints::getDedicatedStorageId() const
{
    return dedicatedStorageId_;
}

void CreateVolumeSchedulerHints::setDedicatedStorageId(const std::string& value)
{
    dedicatedStorageId_ = value;
    dedicatedStorageIdIsSet_ = true;
}

bool CreateVolumeSchedulerHints::dedicatedStorageIdIsSet() const
{
    return dedicatedStorageIdIsSet_;
}

void CreateVolumeSchedulerHints::unsetdedicatedStorageId()
{
    dedicatedStorageIdIsSet_ = false;
}

}
}
}
}
}


