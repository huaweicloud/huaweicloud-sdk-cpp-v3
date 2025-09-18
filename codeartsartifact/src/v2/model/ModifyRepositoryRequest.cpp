

#include "huaweicloud/codeartsartifact/v2/model/ModifyRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ModifyRepositoryRequest::ModifyRepositoryRequest()
{
    tabId_ = "";
    tabIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyRepositoryRequest::~ModifyRepositoryRequest() = default;

void ModifyRepositoryRequest::validate()
{
}

web::json::value ModifyRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tabIdIsSet_) {
        val[utility::conversions::to_string_t("tab_id")] = ModelBase::toJson(tabId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tab_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tab_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTabId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IDERepositoryPair refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyRepositoryRequest::getTabId() const
{
    return tabId_;
}

void ModifyRepositoryRequest::setTabId(const std::string& value)
{
    tabId_ = value;
    tabIdIsSet_ = true;
}

bool ModifyRepositoryRequest::tabIdIsSet() const
{
    return tabIdIsSet_;
}

void ModifyRepositoryRequest::unsettabId()
{
    tabIdIsSet_ = false;
}

IDERepositoryPair ModifyRepositoryRequest::getBody() const
{
    return body_;
}

void ModifyRepositoryRequest::setBody(const IDERepositoryPair& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyRepositoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyRepositoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


