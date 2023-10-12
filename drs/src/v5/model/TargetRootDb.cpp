

#include "huaweicloud/drs/v5/model/TargetRootDb.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TargetRootDb::TargetRootDb()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    dbEncoding_ = "";
    dbEncodingIsSet_ = false;
}

TargetRootDb::~TargetRootDb() = default;

void TargetRootDb::validate()
{
}

web::json::value TargetRootDb::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(dbEncodingIsSet_) {
        val[utility::conversions::to_string_t("db_encoding")] = ModelBase::toJson(dbEncoding_);
    }

    return val;
}
bool TargetRootDb::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbEncoding(refVal);
        }
    }
    return ok;
}


std::string TargetRootDb::getDbName() const
{
    return dbName_;
}

void TargetRootDb::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TargetRootDb::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TargetRootDb::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TargetRootDb::getDbEncoding() const
{
    return dbEncoding_;
}

void TargetRootDb::setDbEncoding(const std::string& value)
{
    dbEncoding_ = value;
    dbEncodingIsSet_ = true;
}

bool TargetRootDb::dbEncodingIsSet() const
{
    return dbEncodingIsSet_;
}

void TargetRootDb::unsetdbEncoding()
{
    dbEncodingIsSet_ = false;
}

}
}
}
}
}


