

#include "huaweicloud/rds/v3/model/ShowBinlogClearPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBinlogClearPolicyRequest::ShowBinlogClearPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBinlogClearPolicyRequest::~ShowBinlogClearPolicyRequest() = default;

void ShowBinlogClearPolicyRequest::validate()
{
}

web::json::value ShowBinlogClearPolicyRequest::toJson() const
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
bool ShowBinlogClearPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowBinlogClearPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBinlogClearPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBinlogClearPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBinlogClearPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBinlogClearPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBinlogClearPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBinlogClearPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBinlogClearPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


