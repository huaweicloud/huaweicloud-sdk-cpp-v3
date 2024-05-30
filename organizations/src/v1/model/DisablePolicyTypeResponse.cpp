

#include "huaweicloud/organizations/v1/model/DisablePolicyTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DisablePolicyTypeResponse::DisablePolicyTypeResponse()
{
    rootIsSet_ = false;
}

DisablePolicyTypeResponse::~DisablePolicyTypeResponse() = default;

void DisablePolicyTypeResponse::validate()
{
}

web::json::value DisablePolicyTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }

    return val;
}
bool DisablePolicyTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("root"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root"));
        if(!fieldValue.is_null())
        {
            RootDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoot(refVal);
        }
    }
    return ok;
}


RootDto DisablePolicyTypeResponse::getRoot() const
{
    return root_;
}

void DisablePolicyTypeResponse::setRoot(const RootDto& value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool DisablePolicyTypeResponse::rootIsSet() const
{
    return rootIsSet_;
}

void DisablePolicyTypeResponse::unsetroot()
{
    rootIsSet_ = false;
}

}
}
}
}
}


