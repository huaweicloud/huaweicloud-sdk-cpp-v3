

#include "huaweicloud/cce/v3/model/CreateReleaseReqBody_values.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateReleaseReqBody_values::CreateReleaseReqBody_values()
{
    imagePullPolicy_ = "";
    imagePullPolicyIsSet_ = false;
    imageTag_ = "";
    imageTagIsSet_ = false;
}

CreateReleaseReqBody_values::~CreateReleaseReqBody_values() = default;

void CreateReleaseReqBody_values::validate()
{
}

web::json::value CreateReleaseReqBody_values::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagePullPolicyIsSet_) {
        val[utility::conversions::to_string_t("imagePullPolicy")] = ModelBase::toJson(imagePullPolicy_);
    }
    if(imageTagIsSet_) {
        val[utility::conversions::to_string_t("imageTag")] = ModelBase::toJson(imageTag_);
    }

    return val;
}
bool CreateReleaseReqBody_values::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("imagePullPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imagePullPolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagePullPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageTag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageTag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTag(refVal);
        }
    }
    return ok;
}


std::string CreateReleaseReqBody_values::getImagePullPolicy() const
{
    return imagePullPolicy_;
}

void CreateReleaseReqBody_values::setImagePullPolicy(const std::string& value)
{
    imagePullPolicy_ = value;
    imagePullPolicyIsSet_ = true;
}

bool CreateReleaseReqBody_values::imagePullPolicyIsSet() const
{
    return imagePullPolicyIsSet_;
}

void CreateReleaseReqBody_values::unsetimagePullPolicy()
{
    imagePullPolicyIsSet_ = false;
}

std::string CreateReleaseReqBody_values::getImageTag() const
{
    return imageTag_;
}

void CreateReleaseReqBody_values::setImageTag(const std::string& value)
{
    imageTag_ = value;
    imageTagIsSet_ = true;
}

bool CreateReleaseReqBody_values::imageTagIsSet() const
{
    return imageTagIsSet_;
}

void CreateReleaseReqBody_values::unsetimageTag()
{
    imageTagIsSet_ = false;
}

}
}
}
}
}


