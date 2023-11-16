

#include "huaweicloud/aad/v1/model/CreatePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreatePolicyRequestBody::CreatePolicyRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreatePolicyRequestBody::~CreatePolicyRequestBody() = default;

void CreatePolicyRequestBody::validate()
{
}

web::json::value CreatePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreatePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CreatePolicyRequestBody::getName() const
{
    return name_;
}

void CreatePolicyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePolicyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePolicyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePolicyRequestBody::getPackageId() const
{
    return packageId_;
}

void CreatePolicyRequestBody::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool CreatePolicyRequestBody::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void CreatePolicyRequestBody::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string CreatePolicyRequestBody::getDescription() const
{
    return description_;
}

void CreatePolicyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreatePolicyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreatePolicyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


