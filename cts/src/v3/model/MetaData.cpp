

#include "huaweicloud/cts/v3/model/MetaData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




MetaData::MetaData()
{
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

MetaData::~MetaData() = default;

void MetaData::validate()
{
}

web::json::value MetaData::toJson() const
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

bool MetaData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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

int32_t MetaData::getCount() const
{
    return count_;
}

void MetaData::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool MetaData::countIsSet() const
{
    return countIsSet_;
}

void MetaData::unsetcount()
{
    countIsSet_ = false;
}

std::string MetaData::getMarker() const
{
    return marker_;
}

void MetaData::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool MetaData::markerIsSet() const
{
    return markerIsSet_;
}

void MetaData::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


