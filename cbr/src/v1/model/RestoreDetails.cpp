

#include "huaweicloud/cbr/v1/model/RestoreDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RestoreDetails::RestoreDetails()
{
    destinationPath_ = "";
    destinationPathIsSet_ = false;
}

RestoreDetails::~RestoreDetails() = default;

void RestoreDetails::validate()
{
}

web::json::value RestoreDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationPathIsSet_) {
        val[utility::conversions::to_string_t("destination_path")] = ModelBase::toJson(destinationPath_);
    }

    return val;
}
bool RestoreDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationPath(refVal);
        }
    }
    return ok;
}


std::string RestoreDetails::getDestinationPath() const
{
    return destinationPath_;
}

void RestoreDetails::setDestinationPath(const std::string& value)
{
    destinationPath_ = value;
    destinationPathIsSet_ = true;
}

bool RestoreDetails::destinationPathIsSet() const
{
    return destinationPathIsSet_;
}

void RestoreDetails::unsetdestinationPath()
{
    destinationPathIsSet_ = false;
}

}
}
}
}
}


