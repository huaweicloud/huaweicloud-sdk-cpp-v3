

#include "huaweicloud/gaussdb/v3/model/DeleteDynamicServerlessPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDynamicServerlessPolicyRequest::DeleteDynamicServerlessPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteDynamicServerlessPolicyRequest::~DeleteDynamicServerlessPolicyRequest() = default;

void DeleteDynamicServerlessPolicyRequest::validate()
{
}

web::json::value DeleteDynamicServerlessPolicyRequest::toJson() const
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
bool DeleteDynamicServerlessPolicyRequest::fromJson(const web::json::value& val)
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


std::string DeleteDynamicServerlessPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDynamicServerlessPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDynamicServerlessPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDynamicServerlessPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteDynamicServerlessPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDynamicServerlessPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDynamicServerlessPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDynamicServerlessPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


