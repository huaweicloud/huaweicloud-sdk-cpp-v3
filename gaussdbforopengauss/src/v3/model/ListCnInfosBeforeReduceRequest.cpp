

#include "huaweicloud/gaussdbforopengauss/v3/model/ListCnInfosBeforeReduceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListCnInfosBeforeReduceRequest::ListCnInfosBeforeReduceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListCnInfosBeforeReduceRequest::~ListCnInfosBeforeReduceRequest() = default;

void ListCnInfosBeforeReduceRequest::validate()
{
}

web::json::value ListCnInfosBeforeReduceRequest::toJson() const
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
bool ListCnInfosBeforeReduceRequest::fromJson(const web::json::value& val)
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


std::string ListCnInfosBeforeReduceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListCnInfosBeforeReduceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListCnInfosBeforeReduceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListCnInfosBeforeReduceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListCnInfosBeforeReduceRequest::getInstanceId() const
{
    return instanceId_;
}

void ListCnInfosBeforeReduceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListCnInfosBeforeReduceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListCnInfosBeforeReduceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


