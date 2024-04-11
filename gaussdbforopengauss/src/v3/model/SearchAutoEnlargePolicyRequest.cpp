

#include "huaweicloud/gaussdbforopengauss/v3/model/SearchAutoEnlargePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SearchAutoEnlargePolicyRequest::SearchAutoEnlargePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SearchAutoEnlargePolicyRequest::~SearchAutoEnlargePolicyRequest() = default;

void SearchAutoEnlargePolicyRequest::validate()
{
}

web::json::value SearchAutoEnlargePolicyRequest::toJson() const
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
bool SearchAutoEnlargePolicyRequest::fromJson(const web::json::value& val)
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


std::string SearchAutoEnlargePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SearchAutoEnlargePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SearchAutoEnlargePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SearchAutoEnlargePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SearchAutoEnlargePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SearchAutoEnlargePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SearchAutoEnlargePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SearchAutoEnlargePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


