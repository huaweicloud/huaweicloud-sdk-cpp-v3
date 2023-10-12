

#include "huaweicloud/drs/v3/model/DefaultRootDb.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DefaultRootDb::DefaultRootDb()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    dbEncoding_ = "";
    dbEncodingIsSet_ = false;
}

DefaultRootDb::~DefaultRootDb() = default;

void DefaultRootDb::validate()
{
}

web::json::value DefaultRootDb::toJson() const
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
bool DefaultRootDb::fromJson(const web::json::value& val)
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


std::string DefaultRootDb::getDbName() const
{
    return dbName_;
}

void DefaultRootDb::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DefaultRootDb::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DefaultRootDb::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DefaultRootDb::getDbEncoding() const
{
    return dbEncoding_;
}

void DefaultRootDb::setDbEncoding(const std::string& value)
{
    dbEncoding_ = value;
    dbEncodingIsSet_ = true;
}

bool DefaultRootDb::dbEncodingIsSet() const
{
    return dbEncodingIsSet_;
}

void DefaultRootDb::unsetdbEncoding()
{
    dbEncodingIsSet_ = false;
}

}
}
}
}
}


