

#include "huaweicloud/gaussdb/v3/model/CreateAccessControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateAccessControlResponse::CreateAccessControlResponse()
{
    openAccessControl_ = false;
    openAccessControlIsSet_ = false;
}

CreateAccessControlResponse::~CreateAccessControlResponse() = default;

void CreateAccessControlResponse::validate()
{
}

web::json::value CreateAccessControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openAccessControlIsSet_) {
        val[utility::conversions::to_string_t("open_access_control")] = ModelBase::toJson(openAccessControl_);
    }

    return val;
}
bool CreateAccessControlResponse::fromJson(const web::json::value& val)
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


bool CreateAccessControlResponse::isOpenAccessControl() const
{
    return openAccessControl_;
}

void CreateAccessControlResponse::setOpenAccessControl(bool value)
{
    openAccessControl_ = value;
    openAccessControlIsSet_ = true;
}

bool CreateAccessControlResponse::openAccessControlIsSet() const
{
    return openAccessControlIsSet_;
}

void CreateAccessControlResponse::unsetopenAccessControl()
{
    openAccessControlIsSet_ = false;
}

}
}
}
}
}


