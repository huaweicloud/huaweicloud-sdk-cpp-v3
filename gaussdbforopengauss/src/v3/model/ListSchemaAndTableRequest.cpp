

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSchemaAndTableRequest::ListSchemaAndTableRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListSchemaAndTableRequest::~ListSchemaAndTableRequest() = default;

void ListSchemaAndTableRequest::validate()
{
}

web::json::value ListSchemaAndTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListSchemaAndTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListSchemaAndTableRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListSchemaAndTableRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSchemaAndTableRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSchemaAndTableRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSchemaAndTableRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSchemaAndTableRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSchemaAndTableRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSchemaAndTableRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSchemaAndTableRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListSchemaAndTableRequestBody ListSchemaAndTableRequest::getBody() const
{
    return body_;
}

void ListSchemaAndTableRequest::setBody(const ListSchemaAndTableRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListSchemaAndTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListSchemaAndTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


