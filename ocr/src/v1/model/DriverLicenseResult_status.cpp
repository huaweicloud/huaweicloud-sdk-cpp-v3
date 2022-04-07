

#include "huaweicloud/ocr/v1/model/DriverLicenseResult_status.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




DriverLicenseResult_status::DriverLicenseResult_status()
{
    name_ = "";
    nameIsSet_ = false;
}

DriverLicenseResult_status::~DriverLicenseResult_status() = default;

void DriverLicenseResult_status::validate()
{
}

web::json::value DriverLicenseResult_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool DriverLicenseResult_status::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DriverLicenseResult_status::getName() const
{
    return name_;
}

void DriverLicenseResult_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DriverLicenseResult_status::nameIsSet() const
{
    return nameIsSet_;
}

void DriverLicenseResult_status::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


