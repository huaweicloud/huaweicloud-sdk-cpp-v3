

#include "huaweicloud/projectman/v4/model/UpdateThirdPartyAssociateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateThirdPartyAssociateVO::UpdateThirdPartyAssociateVO()
{
    title_ = "";
    titleIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateThirdPartyAssociateVO::~UpdateThirdPartyAssociateVO() = default;

void UpdateThirdPartyAssociateVO::validate()
{
}

web::json::value UpdateThirdPartyAssociateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateThirdPartyAssociateVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string UpdateThirdPartyAssociateVO::getTitle() const
{
    return title_;
}

void UpdateThirdPartyAssociateVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UpdateThirdPartyAssociateVO::titleIsSet() const
{
    return titleIsSet_;
}

void UpdateThirdPartyAssociateVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string UpdateThirdPartyAssociateVO::getUrl() const
{
    return url_;
}

void UpdateThirdPartyAssociateVO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateThirdPartyAssociateVO::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateThirdPartyAssociateVO::unseturl()
{
    urlIsSet_ = false;
}

std::string UpdateThirdPartyAssociateVO::getId() const
{
    return id_;
}

void UpdateThirdPartyAssociateVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateThirdPartyAssociateVO::idIsSet() const
{
    return idIsSet_;
}

void UpdateThirdPartyAssociateVO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


