

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussDatastoreResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussDatastoreResult::OpenGaussDatastoreResult()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

OpenGaussDatastoreResult::~OpenGaussDatastoreResult() = default;

void OpenGaussDatastoreResult::validate()
{
}

web::json::value OpenGaussDatastoreResult::toJson() const
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

bool OpenGaussDatastoreResult::fromJson(const web::json::value& val)
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

std::string OpenGaussDatastoreResult::getType() const
{
    return type_;
}

void OpenGaussDatastoreResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OpenGaussDatastoreResult::typeIsSet() const
{
    return typeIsSet_;
}

void OpenGaussDatastoreResult::unsettype()
{
    typeIsSet_ = false;
}

std::string OpenGaussDatastoreResult::getVersion() const
{
    return version_;
}

void OpenGaussDatastoreResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool OpenGaussDatastoreResult::versionIsSet() const
{
    return versionIsSet_;
}

void OpenGaussDatastoreResult::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


