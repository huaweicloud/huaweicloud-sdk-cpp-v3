

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussDatastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussDatastore::OpenGaussDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

OpenGaussDatastore::~OpenGaussDatastore() = default;

void OpenGaussDatastore::validate()
{
}

web::json::value OpenGaussDatastore::toJson() const
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

bool OpenGaussDatastore::fromJson(const web::json::value& val)
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

std::string OpenGaussDatastore::getType() const
{
    return type_;
}

void OpenGaussDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string OpenGaussDatastore::getVersion() const
{
    return version_;
}

void OpenGaussDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OpenGaussDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void OpenGaussDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


