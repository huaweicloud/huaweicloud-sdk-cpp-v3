

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSchemaAndTableRequestBody::ListSchemaAndTableRequestBody()
{
    sqlText_ = "";
    sqlTextIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListSchemaAndTableRequestBody::~ListSchemaAndTableRequestBody() = default;

void ListSchemaAndTableRequestBody::validate()
{
}

web::json::value ListSchemaAndTableRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListSchemaAndTableRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListSchemaAndTableRequestBody::getSqlText() const
{
    return sqlText_;
}

void ListSchemaAndTableRequestBody::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool ListSchemaAndTableRequestBody::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void ListSchemaAndTableRequestBody::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string ListSchemaAndTableRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ListSchemaAndTableRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSchemaAndTableRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSchemaAndTableRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


