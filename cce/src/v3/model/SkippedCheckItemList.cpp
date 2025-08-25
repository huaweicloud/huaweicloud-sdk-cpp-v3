

#include "huaweicloud/cce/v3/model/SkippedCheckItemList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SkippedCheckItemList::SkippedCheckItemList()
{
    name_ = "";
    nameIsSet_ = false;
    resourceSelectorIsSet_ = false;
}

SkippedCheckItemList::~SkippedCheckItemList() = default;

void SkippedCheckItemList::validate()
{
}

web::json::value SkippedCheckItemList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(resourceSelectorIsSet_) {
        val[utility::conversions::to_string_t("resourceSelector")] = ModelBase::toJson(resourceSelector_);
    }

    return val;
}
bool SkippedCheckItemList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resourceSelector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceSelector"));
        if(!fieldValue.is_null())
        {
            ResourceSelector refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSelector(refVal);
        }
    }
    return ok;
}


std::string SkippedCheckItemList::getName() const
{
    return name_;
}

void SkippedCheckItemList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SkippedCheckItemList::nameIsSet() const
{
    return nameIsSet_;
}

void SkippedCheckItemList::unsetname()
{
    nameIsSet_ = false;
}

ResourceSelector SkippedCheckItemList::getResourceSelector() const
{
    return resourceSelector_;
}

void SkippedCheckItemList::setResourceSelector(const ResourceSelector& value)
{
    resourceSelector_ = value;
    resourceSelectorIsSet_ = true;
}

bool SkippedCheckItemList::resourceSelectorIsSet() const
{
    return resourceSelectorIsSet_;
}

void SkippedCheckItemList::unsetresourceSelector()
{
    resourceSelectorIsSet_ = false;
}

}
}
}
}
}


