

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryNavigationSchemaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryNavigationSchemaResponse::ShowRepositoryNavigationSchemaResponse()
{
    result_ = "";
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    schemaIsSet_ = false;
}

ShowRepositoryNavigationSchemaResponse::~ShowRepositoryNavigationSchemaResponse() = default;

void ShowRepositoryNavigationSchemaResponse::validate()
{
}

web::json::value ShowRepositoryNavigationSchemaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }

    return val;
}
bool ShowRepositoryNavigationSchemaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            SchemaDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryNavigationSchemaResponse::getResult() const
{
    return result_;
}

void ShowRepositoryNavigationSchemaResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryNavigationSchemaResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryNavigationSchemaResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryNavigationSchemaResponse::getMessage() const
{
    return message_;
}

void ShowRepositoryNavigationSchemaResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowRepositoryNavigationSchemaResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowRepositoryNavigationSchemaResponse::unsetmessage()
{
    messageIsSet_ = false;
}

SchemaDto ShowRepositoryNavigationSchemaResponse::getSchema() const
{
    return schema_;
}

void ShowRepositoryNavigationSchemaResponse::setSchema(const SchemaDto& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool ShowRepositoryNavigationSchemaResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void ShowRepositoryNavigationSchemaResponse::unsetschema()
{
    schemaIsSet_ = false;
}

}
}
}
}
}


