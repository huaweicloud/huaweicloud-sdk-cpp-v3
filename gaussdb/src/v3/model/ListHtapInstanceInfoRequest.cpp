

#include "huaweicloud/gaussdb/v3/model/ListHtapInstanceInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapInstanceInfoRequest::ListHtapInstanceInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListHtapInstanceInfoRequest::~ListHtapInstanceInfoRequest() = default;

void ListHtapInstanceInfoRequest::validate()
{
}

web::json::value ListHtapInstanceInfoRequest::toJson() const
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
bool ListHtapInstanceInfoRequest::fromJson(const web::json::value& val)
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


std::string ListHtapInstanceInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHtapInstanceInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHtapInstanceInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHtapInstanceInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListHtapInstanceInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHtapInstanceInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHtapInstanceInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHtapInstanceInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


