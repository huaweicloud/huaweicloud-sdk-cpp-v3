

#include "huaweicloud/smn/v2/model/ListCloudServiceResponseItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListCloudServiceResponseItemInfo::ListCloudServiceResponseItemInfo()
{
    name_ = "";
    nameIsSet_ = false;
    showName_ = "";
    showNameIsSet_ = false;
}

ListCloudServiceResponseItemInfo::~ListCloudServiceResponseItemInfo() = default;

void ListCloudServiceResponseItemInfo::validate()
{
}

web::json::value ListCloudServiceResponseItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(showNameIsSet_) {
        val[utility::conversions::to_string_t("show_name")] = ModelBase::toJson(showName_);
    }

    return val;
}
bool ListCloudServiceResponseItemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowName(refVal);
        }
    }
    return ok;
}


std::string ListCloudServiceResponseItemInfo::getName() const
{
    return name_;
}

void ListCloudServiceResponseItemInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCloudServiceResponseItemInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ListCloudServiceResponseItemInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ListCloudServiceResponseItemInfo::getShowName() const
{
    return showName_;
}

void ListCloudServiceResponseItemInfo::setShowName(const std::string& value)
{
    showName_ = value;
    showNameIsSet_ = true;
}

bool ListCloudServiceResponseItemInfo::showNameIsSet() const
{
    return showNameIsSet_;
}

void ListCloudServiceResponseItemInfo::unsetshowName()
{
    showNameIsSet_ = false;
}

}
}
}
}
}


