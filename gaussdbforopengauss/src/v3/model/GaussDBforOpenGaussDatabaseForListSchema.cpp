

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussDatabaseForListSchema.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussDatabaseForListSchema::GaussDBforOpenGaussDatabaseForListSchema()
{
    schemaName_ = "";
    schemaNameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
}

GaussDBforOpenGaussDatabaseForListSchema::~GaussDBforOpenGaussDatabaseForListSchema() = default;

void GaussDBforOpenGaussDatabaseForListSchema::validate()
{
}

web::json::value GaussDBforOpenGaussDatabaseForListSchema::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }

    return val;
}
bool GaussDBforOpenGaussDatabaseForListSchema::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussDatabaseForListSchema::getSchemaName() const
{
    return schemaName_;
}

void GaussDBforOpenGaussDatabaseForListSchema::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool GaussDBforOpenGaussDatabaseForListSchema::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void GaussDBforOpenGaussDatabaseForListSchema::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string GaussDBforOpenGaussDatabaseForListSchema::getOwner() const
{
    return owner_;
}

void GaussDBforOpenGaussDatabaseForListSchema::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GaussDBforOpenGaussDatabaseForListSchema::ownerIsSet() const
{
    return ownerIsSet_;
}

void GaussDBforOpenGaussDatabaseForListSchema::unsetowner()
{
    ownerIsSet_ = false;
}

}
}
}
}
}


