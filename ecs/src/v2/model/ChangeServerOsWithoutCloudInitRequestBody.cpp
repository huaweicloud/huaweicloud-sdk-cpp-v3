

#include "huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerOsWithoutCloudInitRequestBody::ChangeServerOsWithoutCloudInitRequestBody()
{
    osChangeIsSet_ = false;
}

ChangeServerOsWithoutCloudInitRequestBody::~ChangeServerOsWithoutCloudInitRequestBody() = default;

void ChangeServerOsWithoutCloudInitRequestBody::validate()
{
}

web::json::value ChangeServerOsWithoutCloudInitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osChangeIsSet_) {
        val[utility::conversions::to_string_t("os-change")] = ModelBase::toJson(osChange_);
    }

    return val;
}

bool ChangeServerOsWithoutCloudInitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-change"));
        if(!fieldValue.is_null())
        {
            ChangeServerOsWithoutCloudInitOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsChange(refVal);
        }
    }
    return ok;
}


ChangeServerOsWithoutCloudInitOption ChangeServerOsWithoutCloudInitRequestBody::getOsChange() const
{
    return osChange_;
}

void ChangeServerOsWithoutCloudInitRequestBody::setOsChange(const ChangeServerOsWithoutCloudInitOption& value)
{
    osChange_ = value;
    osChangeIsSet_ = true;
}

bool ChangeServerOsWithoutCloudInitRequestBody::osChangeIsSet() const
{
    return osChangeIsSet_;
}

void ChangeServerOsWithoutCloudInitRequestBody::unsetosChange()
{
    osChangeIsSet_ = false;
}

}
}
}
}
}


