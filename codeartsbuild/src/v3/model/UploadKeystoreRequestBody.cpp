

#include "huaweicloud/codeartsbuild/v3/model/UploadKeystoreRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UploadKeystoreRequestBody::UploadKeystoreRequestBody()
{
    fileIsSet_ = false;
    privacy_ = "";
    privacyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UploadKeystoreRequestBody::~UploadKeystoreRequestBody() = default;

void UploadKeystoreRequestBody::validate()
{
}

web::json::value UploadKeystoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privacyIsSet_) {
        val[utility::conversions::to_string_t("privacy")] = ModelBase::toJson(privacy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UploadKeystoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privacy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacy(refVal);
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


HttpContent UploadKeystoreRequestBody::getFile() const
{
    return file_;
}

void UploadKeystoreRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadKeystoreRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadKeystoreRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

std::string UploadKeystoreRequestBody::getPrivacy() const
{
    return privacy_;
}

void UploadKeystoreRequestBody::setPrivacy(const std::string& value)
{
    privacy_ = value;
    privacyIsSet_ = true;
}

bool UploadKeystoreRequestBody::privacyIsSet() const
{
    return privacyIsSet_;
}

void UploadKeystoreRequestBody::unsetprivacy()
{
    privacyIsSet_ = false;
}

std::string UploadKeystoreRequestBody::getDescription() const
{
    return description_;
}

void UploadKeystoreRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UploadKeystoreRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UploadKeystoreRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


