

#include "huaweicloud/gaussdbfornosql/v3/model/QueryInstanceBackupResponseBody_datastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryInstanceBackupResponseBody_datastore::QueryInstanceBackupResponseBody_datastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

QueryInstanceBackupResponseBody_datastore::~QueryInstanceBackupResponseBody_datastore() = default;

void QueryInstanceBackupResponseBody_datastore::validate()
{
}

web::json::value QueryInstanceBackupResponseBody_datastore::toJson() const
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

bool QueryInstanceBackupResponseBody_datastore::fromJson(const web::json::value& val)
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

std::string QueryInstanceBackupResponseBody_datastore::getType() const
{
    return type_;
}

void QueryInstanceBackupResponseBody_datastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_datastore::typeIsSet() const
{
    return typeIsSet_;
}

void QueryInstanceBackupResponseBody_datastore::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryInstanceBackupResponseBody_datastore::getVersion() const
{
    return version_;
}

void QueryInstanceBackupResponseBody_datastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool QueryInstanceBackupResponseBody_datastore::versionIsSet() const
{
    return versionIsSet_;
}

void QueryInstanceBackupResponseBody_datastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


