

#include "huaweicloud/gaussdb/v3/model/SwitchAccessControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchAccessControlResponse::SwitchAccessControlResponse()
{
    openAccessControl_ = false;
    openAccessControlIsSet_ = false;
}

SwitchAccessControlResponse::~SwitchAccessControlResponse() = default;

void SwitchAccessControlResponse::validate()
{
}

web::json::value SwitchAccessControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openAccessControlIsSet_) {
        val[utility::conversions::to_string_t("open_access_control")] = ModelBase::toJson(openAccessControl_);
    }

    return val;
}
bool SwitchAccessControlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_access_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_access_control"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenAccessControl(refVal);
        }
    }
    return ok;
}


bool SwitchAccessControlResponse::isOpenAccessControl() const
{
    return openAccessControl_;
}

void SwitchAccessControlResponse::setOpenAccessControl(bool value)
{
    openAccessControl_ = value;
    openAccessControlIsSet_ = true;
}

bool SwitchAccessControlResponse::openAccessControlIsSet() const
{
    return openAccessControlIsSet_;
}

void SwitchAccessControlResponse::unsetopenAccessControl()
{
    openAccessControlIsSet_ = false;
}

}
}
}
}
}


