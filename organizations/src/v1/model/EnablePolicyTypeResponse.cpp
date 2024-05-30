

#include "huaweicloud/organizations/v1/model/EnablePolicyTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




EnablePolicyTypeResponse::EnablePolicyTypeResponse()
{
    rootIsSet_ = false;
}

EnablePolicyTypeResponse::~EnablePolicyTypeResponse() = default;

void EnablePolicyTypeResponse::validate()
{
}

web::json::value EnablePolicyTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootIsSet_) {
        val[utility::conversions::to_string_t("root")] = ModelBase::toJson(root_);
    }

    return val;
}
bool EnablePolicyTypeResponse::fromJson(const web::json::value& val)
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


RootDto EnablePolicyTypeResponse::getRoot() const
{
    return root_;
}

void EnablePolicyTypeResponse::setRoot(const RootDto& value)
{
    root_ = value;
    rootIsSet_ = true;
}

bool EnablePolicyTypeResponse::rootIsSet() const
{
    return rootIsSet_;
}

void EnablePolicyTypeResponse::unsetroot()
{
    rootIsSet_ = false;
}

}
}
}
}
}


