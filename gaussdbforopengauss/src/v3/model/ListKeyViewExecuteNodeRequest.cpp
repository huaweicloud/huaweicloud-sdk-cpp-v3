

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKeyViewExecuteNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKeyViewExecuteNodeRequest::ListKeyViewExecuteNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListKeyViewExecuteNodeRequest::~ListKeyViewExecuteNodeRequest() = default;

void ListKeyViewExecuteNodeRequest::validate()
{
}

web::json::value ListKeyViewExecuteNodeRequest::toJson() const
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
bool ListKeyViewExecuteNodeRequest::fromJson(const web::json::value& val)
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


std::string ListKeyViewExecuteNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListKeyViewExecuteNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListKeyViewExecuteNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListKeyViewExecuteNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListKeyViewExecuteNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void ListKeyViewExecuteNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListKeyViewExecuteNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListKeyViewExecuteNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


