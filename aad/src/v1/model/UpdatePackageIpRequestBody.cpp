

#include "huaweicloud/aad/v1/model/UpdatePackageIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdatePackageIpRequestBody::UpdatePackageIpRequestBody()
{
    protectedIpListIsSet_ = false;
}

UpdatePackageIpRequestBody::~UpdatePackageIpRequestBody() = default;

void UpdatePackageIpRequestBody::validate()
{
}

web::json::value UpdatePackageIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedIpListIsSet_) {
        val[utility::conversions::to_string_t("protected_ip_list")] = ModelBase::toJson(protectedIpList_);
    }

    return val;
}
bool UpdatePackageIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateProtectedIpInPolicyBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedIpList(refVal);
        }
    }
    return ok;
}


std::vector<UpdateProtectedIpInPolicyBody>& UpdatePackageIpRequestBody::getProtectedIpList()
{
    return protectedIpList_;
}

void UpdatePackageIpRequestBody::setProtectedIpList(const std::vector<UpdateProtectedIpInPolicyBody>& value)
{
    protectedIpList_ = value;
    protectedIpListIsSet_ = true;
}

bool UpdatePackageIpRequestBody::protectedIpListIsSet() const
{
    return protectedIpListIsSet_;
}

void UpdatePackageIpRequestBody::unsetprotectedIpList()
{
    protectedIpListIsSet_ = false;
}

}
}
}
}
}


