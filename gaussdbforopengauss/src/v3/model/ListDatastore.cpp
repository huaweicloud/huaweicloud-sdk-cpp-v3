

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatastore::ListDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ListDatastore::~ListDatastore() = default;

void ListDatastore::validate()
{
}

web::json::value ListDatastore::toJson() const
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

bool ListDatastore::fromJson(const web::json::value& val)
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

std::string ListDatastore::getType() const
{
    return type_;
}

void ListDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void ListDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ListDatastore::getVersion() const
{
    return version_;
}

void ListDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void ListDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


