

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithCloudInitRequestBody::ChangeServerOsWithCloudInitRequestBody()
{
    osChangeIsSet_ = false;
}

ChangeServerOsWithCloudInitRequestBody::~ChangeServerOsWithCloudInitRequestBody() = default;

void ChangeServerOsWithCloudInitRequestBody::validate()
{
}

web::json::value ChangeServerOsWithCloudInitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osChangeIsSet_) {
        val[utility::conversions::to_string_t("os-change")] = ModelBase::toJson(osChange_);
    }

    return val;
}

bool ChangeServerOsWithCloudInitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-change"));
        if(!fieldValue.is_null())
        {
            ChangeServerOsWithCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsChange(refVal);
        }
    }
    return ok;
}

ChangeServerOsWithCloudInitOption ChangeServerOsWithCloudInitRequestBody::getOsChange() const
{
    return osChange_;
}

void ChangeServerOsWithCloudInitRequestBody::setOsChange(const ChangeServerOsWithCloudInitOption& value)
{
    osChange_ = value;
    osChangeIsSet_ = true;
}

bool ChangeServerOsWithCloudInitRequestBody::osChangeIsSet() const
{
    return osChangeIsSet_;
}

void ChangeServerOsWithCloudInitRequestBody::unsetosChange()
{
    osChangeIsSet_ = false;
}

}
}
}
}
}


