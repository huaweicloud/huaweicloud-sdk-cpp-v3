

#include "huaweicloud/ecs/v2/model/ListServerGroupsPageInfoResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerGroupsPageInfoResult::ListServerGroupsPageInfoResult()
{
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

ListServerGroupsPageInfoResult::~ListServerGroupsPageInfoResult() = default;

void ListServerGroupsPageInfoResult::validate()
{
}

web::json::value ListServerGroupsPageInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}

bool ListServerGroupsPageInfoResult::fromJson(const web::json::value& val)
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

std::string ListServerGroupsPageInfoResult::getNextMarker() const
{
    return nextMarker_;
}

void ListServerGroupsPageInfoResult::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListServerGroupsPageInfoResult::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListServerGroupsPageInfoResult::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


