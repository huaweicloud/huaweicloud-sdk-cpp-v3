

#include "huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance_datastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsLogPolicyRespondBody_instance_datastore::ListLtsLogPolicyRespondBody_instance_datastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ListLtsLogPolicyRespondBody_instance_datastore::~ListLtsLogPolicyRespondBody_instance_datastore() = default;

void ListLtsLogPolicyRespondBody_instance_datastore::validate()
{
}

web::json::value ListLtsLogPolicyRespondBody_instance_datastore::toJson() const
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
bool ListLtsLogPolicyRespondBody_instance_datastore::fromJson(const web::json::value& val)
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


std::string ListLtsLogPolicyRespondBody_instance_datastore::getType() const
{
    return type_;
}

void ListLtsLogPolicyRespondBody_instance_datastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance_datastore::typeIsSet() const
{
    return typeIsSet_;
}

void ListLtsLogPolicyRespondBody_instance_datastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ListLtsLogPolicyRespondBody_instance_datastore::getVersion() const
{
    return version_;
}

void ListLtsLogPolicyRespondBody_instance_datastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListLtsLogPolicyRespondBody_instance_datastore::versionIsSet() const
{
    return versionIsSet_;
}

void ListLtsLogPolicyRespondBody_instance_datastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


