

#include "huaweicloud/cce/v3/model/NodePageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePageInfo::NodePageInfo()
{
    currentCount_ = 0;
    currentCountIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

NodePageInfo::~NodePageInfo() = default;

void NodePageInfo::validate()
{
}

web::json::value NodePageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("currentCount")] = ModelBase::toJson(currentCount_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("nextMarker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool NodePageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("currentCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nextMarker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nextMarker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


int32_t NodePageInfo::getCurrentCount() const
{
    return currentCount_;
}

void NodePageInfo::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool NodePageInfo::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void NodePageInfo::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

std::string NodePageInfo::getNextMarker() const
{
    return nextMarker_;
}

void NodePageInfo::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool NodePageInfo::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void NodePageInfo::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


