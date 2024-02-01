

#include "huaweicloud/rds/v3/model/ListRdSforMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRdSforMySqlProxyRequest::ListRdSforMySqlProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListRdSforMySqlProxyRequest::~ListRdSforMySqlProxyRequest() = default;

void ListRdSforMySqlProxyRequest::validate()
{
}

web::json::value ListRdSforMySqlProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListRdSforMySqlProxyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListRdSforMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRdSforMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRdSforMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRdSforMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRdSforMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRdSforMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRdSforMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRdSforMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


