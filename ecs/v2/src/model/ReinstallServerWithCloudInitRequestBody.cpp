

#include "huaweicloud/ecs/model/ReinstallServerWithCloudInitRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallServerWithCloudInitRequestBody::ReinstallServerWithCloudInitRequestBody()
{
    osReinstallIsSet_ = false;
}

ReinstallServerWithCloudInitRequestBody::~ReinstallServerWithCloudInitRequestBody() = default;

void ReinstallServerWithCloudInitRequestBody::validate()
{
}

web::json::value ReinstallServerWithCloudInitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osReinstallIsSet_) {
        val[utility::conversions::to_string_t("os-reinstall")] = ModelBase::toJson(osReinstall_);
    }

    return val;
}

bool ReinstallServerWithCloudInitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-reinstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-reinstall"));
        if(!fieldValue.is_null())
        {
            ReinstallServerWithCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsReinstall(refVal);
        }
    }
    return ok;
}


ReinstallServerWithCloudInitOption ReinstallServerWithCloudInitRequestBody::getOsReinstall() const
{
    return osReinstall_;
}

void ReinstallServerWithCloudInitRequestBody::setOsReinstall(const ReinstallServerWithCloudInitOption& value)
{
    osReinstall_ = value;
    osReinstallIsSet_ = true;
}

bool ReinstallServerWithCloudInitRequestBody::osReinstallIsSet() const
{
    return osReinstallIsSet_;
}

void ReinstallServerWithCloudInitRequestBody::unsetosReinstall()
{
    osReinstallIsSet_ = false;
}

}
}
}
}
}


