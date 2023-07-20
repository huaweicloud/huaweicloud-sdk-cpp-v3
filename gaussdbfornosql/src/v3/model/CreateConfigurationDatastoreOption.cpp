

#include "huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationDatastoreOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateConfigurationDatastoreOption::CreateConfigurationDatastoreOption()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

CreateConfigurationDatastoreOption::~CreateConfigurationDatastoreOption() = default;

void CreateConfigurationDatastoreOption::validate()
{
}

web::json::value CreateConfigurationDatastoreOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool CreateConfigurationDatastoreOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}

std::string CreateConfigurationDatastoreOption::getType() const
{
    return type_;
}

void CreateConfigurationDatastoreOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateConfigurationDatastoreOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreateConfigurationDatastoreOption::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateConfigurationDatastoreOption::getVersion() const
{
    return version_;
}

void CreateConfigurationDatastoreOption::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateConfigurationDatastoreOption::versionIsSet() const
{
    return versionIsSet_;
}

void CreateConfigurationDatastoreOption::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateConfigurationDatastoreOption::getMode() const
{
    return mode_;
}

void CreateConfigurationDatastoreOption::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateConfigurationDatastoreOption::modeIsSet() const
{
    return modeIsSet_;
}

void CreateConfigurationDatastoreOption::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


