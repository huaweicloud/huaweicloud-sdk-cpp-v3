

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussDatabaseSchemaReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussDatabaseSchemaReq::GaussDBforOpenGaussDatabaseSchemaReq()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemasIsSet_ = false;
}

GaussDBforOpenGaussDatabaseSchemaReq::~GaussDBforOpenGaussDatabaseSchemaReq() = default;

void GaussDBforOpenGaussDatabaseSchemaReq::validate()
{
}

web::json::value GaussDBforOpenGaussDatabaseSchemaReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }

    return val;
}
bool GaussDBforOpenGaussDatabaseSchemaReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBforOpenGaussCreateSchemaReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussDatabaseSchemaReq::getDbName() const
{
    return dbName_;
}

void GaussDBforOpenGaussDatabaseSchemaReq::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool GaussDBforOpenGaussDatabaseSchemaReq::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void GaussDBforOpenGaussDatabaseSchemaReq::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<GaussDBforOpenGaussCreateSchemaReq>& GaussDBforOpenGaussDatabaseSchemaReq::getSchemas()
{
    return schemas_;
}

void GaussDBforOpenGaussDatabaseSchemaReq::setSchemas(const std::vector<GaussDBforOpenGaussCreateSchemaReq>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool GaussDBforOpenGaussDatabaseSchemaReq::schemasIsSet() const
{
    return schemasIsSet_;
}

void GaussDBforOpenGaussDatabaseSchemaReq::unsetschemas()
{
    schemasIsSet_ = false;
}

}
}
}
}
}


