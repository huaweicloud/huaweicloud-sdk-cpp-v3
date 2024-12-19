

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceDatastoreOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateInstanceDatastoreOption::CreateInstanceDatastoreOption()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

CreateInstanceDatastoreOption::~CreateInstanceDatastoreOption() = default;

void CreateInstanceDatastoreOption::validate()
{
}

web::json::value CreateInstanceDatastoreOption::toJson() const
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
bool CreateInstanceDatastoreOption::fromJson(const web::json::value& val)
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


std::string CreateInstanceDatastoreOption::getType() const
{
    return type_;
}

void CreateInstanceDatastoreOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateInstanceDatastoreOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreateInstanceDatastoreOption::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateInstanceDatastoreOption::getVersion() const
{
    return version_;
}

void CreateInstanceDatastoreOption::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateInstanceDatastoreOption::versionIsSet() const
{
    return versionIsSet_;
}

void CreateInstanceDatastoreOption::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


