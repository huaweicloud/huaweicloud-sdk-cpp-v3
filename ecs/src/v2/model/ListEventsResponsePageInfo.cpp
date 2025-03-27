

#include "huaweicloud/ecs/v2/model/ListEventsResponsePageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListEventsResponsePageInfo::ListEventsResponsePageInfo()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

ListEventsResponsePageInfo::~ListEventsResponsePageInfo() = default;

void ListEventsResponsePageInfo::validate()
{
}

web::json::value ListEventsResponsePageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListEventsResponsePageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


std::string ListEventsResponsePageInfo::getNextMarker() const
{
    return nextMarker_;
}

void ListEventsResponsePageInfo::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListEventsResponsePageInfo::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListEventsResponsePageInfo::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


