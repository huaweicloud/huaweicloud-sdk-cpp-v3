

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussDatastoreOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussDatastoreOption::OpenGaussDatastoreOption()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

OpenGaussDatastoreOption::~OpenGaussDatastoreOption() = default;

void OpenGaussDatastoreOption::validate()
{
}

web::json::value OpenGaussDatastoreOption::toJson() const
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
bool OpenGaussDatastoreOption::fromJson(const web::json::value& val)
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


std::string OpenGaussDatastoreOption::getType() const
{
    return type_;
}

void OpenGaussDatastoreOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussDatastoreOption::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussDatastoreOption::unsettype()
{
    typeIsSet_ = false;
}

std::string OpenGaussDatastoreOption::getVersion() const
{
    return version_;
}

void OpenGaussDatastoreOption::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OpenGaussDatastoreOption::versionIsSet() const
{
    return versionIsSet_;
}

void OpenGaussDatastoreOption::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


