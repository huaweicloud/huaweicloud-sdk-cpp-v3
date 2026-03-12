

#include "huaweicloud/organizations/v1/model/UpdateDryRunConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateDryRunConfigResponse::UpdateDryRunConfigResponse()
{
    rootIsSet_ = false;
}

UpdateDryRunConfigResponse::~UpdateDryRunConfigResponse() = default;

void UpdateDryRunConfigResponse::validate()
{
}

web::json::value UpdateDryRunConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }

    return val;
}
bool UpdateDryRunConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("root"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root"));
        if(!fieldValue.is_null())
        {
            DryRunConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoot(refVal);
        }
    }
    return ok;
}


DryRunConfigDto UpdateDryRunConfigResponse::getRoot() const
{
    return root_;
}

void UpdateDryRunConfigResponse::setRoot(const DryRunConfigDto& value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool UpdateDryRunConfigResponse::rootIsSet() const
{
    return rootIsSet_;
}

void UpdateDryRunConfigResponse::unsetroot()
{
    rootIsSet_ = false;
}

}
}
}
}
}


