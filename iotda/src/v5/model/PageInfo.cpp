

#include "huaweicloud/iotda/v5/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




PageInfo::PageInfo()
{
    count_ = 0L;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

PageInfo::~PageInfo() = default;

void PageInfo::validate()
{
}

web::json::value PageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool PageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


int64_t PageInfo::getCount() const
{
    return count_;
}

void PageInfo::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PageInfo::countIsSet() const
{
    return countIsSet_;
}

void PageInfo::unsetcount()
{
    countIsSet_ = false;
}

std::string PageInfo::getMarker() const
{
    return marker_;
}

void PageInfo::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool PageInfo::markerIsSet() const
{
    return markerIsSet_;
}

void PageInfo::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


