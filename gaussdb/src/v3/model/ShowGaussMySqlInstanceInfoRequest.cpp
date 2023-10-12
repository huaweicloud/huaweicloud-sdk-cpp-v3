

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlInstanceInfoRequest::ShowGaussMySqlInstanceInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowGaussMySqlInstanceInfoRequest::~ShowGaussMySqlInstanceInfoRequest() = default;

void ShowGaussMySqlInstanceInfoRequest::validate()
{
}

web::json::value ShowGaussMySqlInstanceInfoRequest::toJson() const
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
bool ShowGaussMySqlInstanceInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowGaussMySqlInstanceInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlInstanceInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlInstanceInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlInstanceInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowGaussMySqlInstanceInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGaussMySqlInstanceInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


