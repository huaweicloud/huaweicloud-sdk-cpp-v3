

#include "huaweicloud/iotda/v5/model/QueueCommandPage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueueCommandPage::QueueCommandPage()
{
    count_ = 0L;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

QueueCommandPage::~QueueCommandPage() = default;

void QueueCommandPage::validate()
{
}

web::json::value QueueCommandPage::toJson() const
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
bool QueueCommandPage::fromJson(const web::json::value& val)
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


int64_t QueueCommandPage::getCount() const
{
    return count_;
}

void QueueCommandPage::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool QueueCommandPage::countIsSet() const
{
    return countIsSet_;
}

void QueueCommandPage::unsetcount()
{
    countIsSet_ = false;
}

std::string QueueCommandPage::getMarker() const
{
    return marker_;
}

void QueueCommandPage::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool QueueCommandPage::markerIsSet() const
{
    return markerIsSet_;
}

void QueueCommandPage::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


