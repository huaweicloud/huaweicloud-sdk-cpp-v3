

#include "huaweicloud/gaussdb/v3/model/SwitchAccessControlRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchAccessControlRequestBody::SwitchAccessControlRequestBody()
{
    openAccessControl_ = false;
    openAccessControlIsSet_ = false;
}

SwitchAccessControlRequestBody::~SwitchAccessControlRequestBody() = default;

void SwitchAccessControlRequestBody::validate()
{
}

web::json::value SwitchAccessControlRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openAccessControlIsSet_) {
        val[utility::conversions::to_string_t("open_access_control")] = ModelBase::toJson(openAccessControl_);
    }

    return val;
}
bool SwitchAccessControlRequestBody::fromJson(const web::json::value& val)
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


bool SwitchAccessControlRequestBody::isOpenAccessControl() const
{
    return openAccessControl_;
}

void SwitchAccessControlRequestBody::setOpenAccessControl(bool value)
{
    openAccessControl_ = value;
    openAccessControlIsSet_ = true;
}

bool SwitchAccessControlRequestBody::openAccessControlIsSet() const
{
    return openAccessControlIsSet_;
}

void SwitchAccessControlRequestBody::unsetopenAccessControl()
{
    openAccessControlIsSet_ = false;
}

}
}
}
}
}


