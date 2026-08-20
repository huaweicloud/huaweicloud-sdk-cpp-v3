

#include "huaweicloud/projectman/v4/model/CreateThirdPartyAssociateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateThirdPartyAssociateVO::CreateThirdPartyAssociateVO()
{
    title_ = "";
    titleIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

CreateThirdPartyAssociateVO::~CreateThirdPartyAssociateVO() = default;

void CreateThirdPartyAssociateVO::validate()
{
}

web::json::value CreateThirdPartyAssociateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool CreateThirdPartyAssociateVO::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateThirdPartyAssociateVO::getTitle() const
{
    return title_;
}

void CreateThirdPartyAssociateVO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateThirdPartyAssociateVO::titleIsSet() const
{
    return titleIsSet_;
}

void CreateThirdPartyAssociateVO::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateThirdPartyAssociateVO::getUrl() const
{
    return url_;
}

void CreateThirdPartyAssociateVO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CreateThirdPartyAssociateVO::urlIsSet() const
{
    return urlIsSet_;
}

void CreateThirdPartyAssociateVO::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


