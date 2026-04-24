

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDNatInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDNatInfoRequest::ListDNatInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListDNatInfoRequest::~ListDNatInfoRequest() = default;

void ListDNatInfoRequest::validate()
{
}

web::json::value ListDNatInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListDNatInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListDNatInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDNatInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDNatInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDNatInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDNatInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDNatInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDNatInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDNatInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


