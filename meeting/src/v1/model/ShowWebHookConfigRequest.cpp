

#include "huaweicloud/meeting/v1/model/ShowWebHookConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowWebHookConfigRequest::ShowWebHookConfigRequest()
{
    corpId_ = "";
    corpIdIsSet_ = false;
    spId_ = "";
    spIdIsSet_ = false;
}

ShowWebHookConfigRequest::~ShowWebHookConfigRequest() = default;

void ShowWebHookConfigRequest::validate()
{
}

web::json::value ShowWebHookConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
    }
    if(spIdIsSet_) {
        val[utility::conversions::to_string_t("spId")] = ModelBase::toJson(spId_);
    }

    return val;
}
bool ShowWebHookConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpId(refVal);
        }
    }
    return ok;
}


std::string ShowWebHookConfigRequest::getCorpId() const
{
    return corpId_;
}

void ShowWebHookConfigRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool ShowWebHookConfigRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void ShowWebHookConfigRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string ShowWebHookConfigRequest::getSpId() const
{
    return spId_;
}

void ShowWebHookConfigRequest::setSpId(const std::string& value)
{
    spId_ = value;
    spIdIsSet_ = true;
}

bool ShowWebHookConfigRequest::spIdIsSet() const
{
    return spIdIsSet_;
}

void ShowWebHookConfigRequest::unsetspId()
{
    spIdIsSet_ = false;
}

}
}
}
}
}


