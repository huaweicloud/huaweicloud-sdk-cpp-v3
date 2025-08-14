

#include "huaweicloud/iotda/v5/model/HistoryCommandPage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




HistoryCommandPage::HistoryCommandPage()
{
    marker_ = "";
    markerIsSet_ = false;
}

HistoryCommandPage::~HistoryCommandPage() = default;

void HistoryCommandPage::validate()
{
}

web::json::value HistoryCommandPage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool HistoryCommandPage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string HistoryCommandPage::getMarker() const
{
    return marker_;
}

void HistoryCommandPage::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool HistoryCommandPage::markerIsSet() const
{
    return markerIsSet_;
}

void HistoryCommandPage::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


