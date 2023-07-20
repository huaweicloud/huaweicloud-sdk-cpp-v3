

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussDatastoreResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussDatastoreResponse::OpenGaussDatastoreResponse()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

OpenGaussDatastoreResponse::~OpenGaussDatastoreResponse() = default;

void OpenGaussDatastoreResponse::validate()
{
}

web::json::value OpenGaussDatastoreResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool OpenGaussDatastoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}

std::string OpenGaussDatastoreResponse::getType() const
{
    return type_;
}

void OpenGaussDatastoreResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussDatastoreResponse::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussDatastoreResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string OpenGaussDatastoreResponse::getVersion() const
{
    return version_;
}

void OpenGaussDatastoreResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OpenGaussDatastoreResponse::versionIsSet() const
{
    return versionIsSet_;
}

void OpenGaussDatastoreResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


