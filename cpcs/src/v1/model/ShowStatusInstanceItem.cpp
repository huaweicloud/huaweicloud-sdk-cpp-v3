

#include "huaweicloud/cpcs/v1/model/ShowStatusInstanceItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusInstanceItem::ShowStatusInstanceItem()
{
    instanceListIsSet_ = false;
    timestamp_ = 0;
    timestampIsSet_ = false;
}

ShowStatusInstanceItem::~ShowStatusInstanceItem() = default;

void ShowStatusInstanceItem::validate()
{
}

web::json::value ShowStatusInstanceItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceListIsSet_) {
        val[utility::conversions::to_string_t("instance_list")] = ModelBase::toJson(instanceList_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }

    return val;
}
bool ShowStatusInstanceItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusInstanceItem_instance_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    return ok;
}


std::vector<ShowStatusInstanceItem_instance_list>& ShowStatusInstanceItem::getInstanceList()
{
    return instanceList_;
}

void ShowStatusInstanceItem::setInstanceList(const std::vector<ShowStatusInstanceItem_instance_list>& value)
{
    instanceList_ = value;
    instanceListIsSet_ = true;
}

bool ShowStatusInstanceItem::instanceListIsSet() const
{
    return instanceListIsSet_;
}

void ShowStatusInstanceItem::unsetinstanceList()
{
    instanceListIsSet_ = false;
}

int32_t ShowStatusInstanceItem::getTimestamp() const
{
    return timestamp_;
}

void ShowStatusInstanceItem::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ShowStatusInstanceItem::timestampIsSet() const
{
    return timestampIsSet_;
}

void ShowStatusInstanceItem::unsettimestamp()
{
    timestampIsSet_ = false;
}

}
}
}
}
}


