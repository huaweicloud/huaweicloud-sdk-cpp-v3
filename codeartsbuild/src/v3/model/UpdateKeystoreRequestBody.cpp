

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystoreRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystoreRequestBody::UpdateKeystoreRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    keystoreName_ = "";
    keystoreNameIsSet_ = false;
    share_ = 0;
    shareIsSet_ = false;
}

UpdateKeystoreRequestBody::~UpdateKeystoreRequestBody() = default;

void UpdateKeystoreRequestBody::validate()
{
}

web::json::value UpdateKeystoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(keystoreNameIsSet_) {
        val[utility::conversions::to_string_t("keystore_name")] = ModelBase::toJson(keystoreName_);
    }
    if(shareIsSet_) {
        val[utility::conversions::to_string_t("share")] = ModelBase::toJson(share_);
    }

    return val;
}
bool UpdateKeystoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("keystore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShare(refVal);
        }
    }
    return ok;
}


std::string UpdateKeystoreRequestBody::getId() const
{
    return id_;
}

void UpdateKeystoreRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateKeystoreRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateKeystoreRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateKeystoreRequestBody::getDescription() const
{
    return description_;
}

void UpdateKeystoreRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateKeystoreRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateKeystoreRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateKeystoreRequestBody::getKeystoreName() const
{
    return keystoreName_;
}

void UpdateKeystoreRequestBody::setKeystoreName(const std::string& value)
{
    keystoreName_ = value;
    keystoreNameIsSet_ = true;
}

bool UpdateKeystoreRequestBody::keystoreNameIsSet() const
{
    return keystoreNameIsSet_;
}

void UpdateKeystoreRequestBody::unsetkeystoreName()
{
    keystoreNameIsSet_ = false;
}

int32_t UpdateKeystoreRequestBody::getShare() const
{
    return share_;
}

void UpdateKeystoreRequestBody::setShare(int32_t value)
{
    share_ = value;
    shareIsSet_ = true;
}

bool UpdateKeystoreRequestBody::shareIsSet() const
{
    return shareIsSet_;
}

void UpdateKeystoreRequestBody::unsetshare()
{
    shareIsSet_ = false;
}

}
}
}
}
}


