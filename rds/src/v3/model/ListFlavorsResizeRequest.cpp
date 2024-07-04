

#include "huaweicloud/rds/v3/model/ListFlavorsResizeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListFlavorsResizeRequest::ListFlavorsResizeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListFlavorsResizeRequest::~ListFlavorsResizeRequest() = default;

void ListFlavorsResizeRequest::validate()
{
}

web::json::value ListFlavorsResizeRequest::toJson() const
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
bool ListFlavorsResizeRequest::fromJson(const web::json::value& val)
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


std::string ListFlavorsResizeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListFlavorsResizeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListFlavorsResizeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListFlavorsResizeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListFlavorsResizeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListFlavorsResizeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListFlavorsResizeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListFlavorsResizeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


