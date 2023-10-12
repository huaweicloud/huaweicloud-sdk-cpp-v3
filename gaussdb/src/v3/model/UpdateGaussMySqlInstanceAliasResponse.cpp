

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceAliasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceAliasResponse::UpdateGaussMySqlInstanceAliasResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceAliasResponse::~UpdateGaussMySqlInstanceAliasResponse() = default;

void UpdateGaussMySqlInstanceAliasResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceAliasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGaussMySqlInstanceAliasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGaussMySqlInstanceAliasResponse::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceAliasResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceAliasResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceAliasResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


