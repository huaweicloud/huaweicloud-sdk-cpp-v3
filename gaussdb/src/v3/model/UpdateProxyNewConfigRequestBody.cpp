

#include "huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyNewConfigRequestBody::UpdateProxyNewConfigRequestBody()
{
    configurationsIsSet_ = false;
}

UpdateProxyNewConfigRequestBody::~UpdateProxyNewConfigRequestBody() = default;

void UpdateProxyNewConfigRequestBody::validate()
{
}

web::json::value UpdateProxyNewConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool UpdateProxyNewConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateProxyConfigurationItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


std::vector<UpdateProxyConfigurationItem>& UpdateProxyNewConfigRequestBody::getConfigurations()
{
    return configurations_;
}

void UpdateProxyNewConfigRequestBody::setConfigurations(const std::vector<UpdateProxyConfigurationItem>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool UpdateProxyNewConfigRequestBody::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void UpdateProxyNewConfigRequestBody::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


