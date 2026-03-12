

#include "huaweicloud/organizations/v1/model/ShowDryRunConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowDryRunConfigResponse::ShowDryRunConfigResponse()
{
    rootIsSet_ = false;
}

ShowDryRunConfigResponse::~ShowDryRunConfigResponse() = default;

void ShowDryRunConfigResponse::validate()
{
}

web::json::value ShowDryRunConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }

    return val;
}
bool ShowDryRunConfigResponse::fromJson(const web::json::value& val)
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


DryRunConfigDto ShowDryRunConfigResponse::getRoot() const
{
    return root_;
}

void ShowDryRunConfigResponse::setRoot(const DryRunConfigDto& value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool ShowDryRunConfigResponse::rootIsSet() const
{
    return rootIsSet_;
}

void ShowDryRunConfigResponse::unsetroot()
{
    rootIsSet_ = false;
}

}
}
}
}
}


