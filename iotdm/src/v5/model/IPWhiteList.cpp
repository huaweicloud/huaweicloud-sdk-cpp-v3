

#include "huaweicloud/iotdm/v5/model/IPWhiteList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




IPWhiteList::IPWhiteList()
{
    enable_ = false;
    enableIsSet_ = false;
    allowListIsSet_ = false;
}

IPWhiteList::~IPWhiteList() = default;

void IPWhiteList::validate()
{
}

web::json::value IPWhiteList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(allowListIsSet_) {
        val[utility::conversions::to_string_t("allow_list")] = ModelBase::toJson(allowList_);
    }

    return val;
}
bool IPWhiteList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IpAllowList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowList(refVal);
        }
    }
    return ok;
}


bool IPWhiteList::isEnable() const
{
    return enable_;
}

void IPWhiteList::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool IPWhiteList::enableIsSet() const
{
    return enableIsSet_;
}

void IPWhiteList::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<IpAllowList>& IPWhiteList::getAllowList()
{
    return allowList_;
}

void IPWhiteList::setAllowList(const std::vector<IpAllowList>& value)
{
    allowList_ = value;
    allowListIsSet_ = true;
}

bool IPWhiteList::allowListIsSet() const
{
    return allowListIsSet_;
}

void IPWhiteList::unsetallowList()
{
    allowListIsSet_ = false;
}

}
}
}
}
}


