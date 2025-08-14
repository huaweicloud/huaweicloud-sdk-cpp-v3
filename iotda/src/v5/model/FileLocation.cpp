

#include "huaweicloud/iotda/v5/model/FileLocation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FileLocation::FileLocation()
{
    obsLocationIsSet_ = false;
}

FileLocation::~FileLocation() = default;

void FileLocation::validate()
{
}

web::json::value FileLocation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsLocationIsSet_) {
        val[utility::conversions::to_string_t("obs_location")] = ModelBase::toJson(obsLocation_);
    }

    return val;
}
bool FileLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_location"));
        if(!fieldValue.is_null())
        {
            ObsLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsLocation(refVal);
        }
    }
    return ok;
}


ObsLocation FileLocation::getObsLocation() const
{
    return obsLocation_;
}

void FileLocation::setObsLocation(const ObsLocation& value)
{
    obsLocation_ = value;
    obsLocationIsSet_ = true;
}

bool FileLocation::obsLocationIsSet() const
{
    return obsLocationIsSet_;
}

void FileLocation::unsetobsLocation()
{
    obsLocationIsSet_ = false;
}

}
}
}
}
}


