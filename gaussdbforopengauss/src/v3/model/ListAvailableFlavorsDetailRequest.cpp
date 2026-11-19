

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAvailableFlavorsDetailRequest::ListAvailableFlavorsDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAvailableFlavorsDetailRequest::~ListAvailableFlavorsDetailRequest() = default;

void ListAvailableFlavorsDetailRequest::validate()
{
}

web::json::value ListAvailableFlavorsDetailRequest::toJson() const
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
bool ListAvailableFlavorsDetailRequest::fromJson(const web::json::value& val)
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


std::string ListAvailableFlavorsDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAvailableFlavorsDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAvailableFlavorsDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAvailableFlavorsDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAvailableFlavorsDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAvailableFlavorsDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAvailableFlavorsDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAvailableFlavorsDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


