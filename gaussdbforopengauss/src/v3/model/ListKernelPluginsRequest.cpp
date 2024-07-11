

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKernelPluginsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKernelPluginsRequest::ListKernelPluginsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListKernelPluginsRequest::~ListKernelPluginsRequest() = default;

void ListKernelPluginsRequest::validate()
{
}

web::json::value ListKernelPluginsRequest::toJson() const
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
bool ListKernelPluginsRequest::fromJson(const web::json::value& val)
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


std::string ListKernelPluginsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListKernelPluginsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListKernelPluginsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListKernelPluginsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListKernelPluginsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListKernelPluginsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListKernelPluginsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListKernelPluginsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


