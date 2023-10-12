

#include "huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithoutCloudInitRequestBody::ReinstallServerWithoutCloudInitRequestBody()
{
    osReinstallIsSet_ = false;
}

ReinstallServerWithoutCloudInitRequestBody::~ReinstallServerWithoutCloudInitRequestBody() = default;

void ReinstallServerWithoutCloudInitRequestBody::validate()
{
}

web::json::value ReinstallServerWithoutCloudInitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osReinstallIsSet_) {
        val[utility::conversions::to_string_t("os-reinstall")] = ModelBase::toJson(osReinstall_);
    }

    return val;
}
bool ReinstallServerWithoutCloudInitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-reinstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-reinstall"));
        if(!fieldValue.is_null())
        {
            ReinstallServerWithoutCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsReinstall(refVal);
        }
    }
    return ok;
}


ReinstallServerWithoutCloudInitOption ReinstallServerWithoutCloudInitRequestBody::getOsReinstall() const
{
    return osReinstall_;
}

void ReinstallServerWithoutCloudInitRequestBody::setOsReinstall(const ReinstallServerWithoutCloudInitOption& value)
{
    osReinstall_ = value;
    osReinstallIsSet_ = true;
}

bool ReinstallServerWithoutCloudInitRequestBody::osReinstallIsSet() const
{
    return osReinstallIsSet_;
}

void ReinstallServerWithoutCloudInitRequestBody::unsetosReinstall()
{
    osReinstallIsSet_ = false;
}

}
}
}
}
}


