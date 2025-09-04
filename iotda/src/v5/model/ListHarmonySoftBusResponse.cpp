

#include "huaweicloud/iotda/v5/model/ListHarmonySoftBusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListHarmonySoftBusResponse::ListHarmonySoftBusResponse()
{
    harmonySoftBusesIsSet_ = false;
    pageIsSet_ = false;
}

ListHarmonySoftBusResponse::~ListHarmonySoftBusResponse() = default;

void ListHarmonySoftBusResponse::validate()
{
}

web::json::value ListHarmonySoftBusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(harmonySoftBusesIsSet_) {
        val[utility::conversions::to_string_t("harmony_soft_buses")] = ModelBase::toJson(harmonySoftBuses_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListHarmonySoftBusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("harmony_soft_buses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("harmony_soft_buses"));
        if(!fieldValue.is_null())
        {
            std::vector<HarmonySoftBusResponseDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHarmonySoftBuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<HarmonySoftBusResponseDTO>& ListHarmonySoftBusResponse::getHarmonySoftBuses()
{
    return harmonySoftBuses_;
}

void ListHarmonySoftBusResponse::setHarmonySoftBuses(const std::vector<HarmonySoftBusResponseDTO>& value)
{
    harmonySoftBuses_ = value;
    harmonySoftBusesIsSet_ = true;
}

bool ListHarmonySoftBusResponse::harmonySoftBusesIsSet() const
{
    return harmonySoftBusesIsSet_;
}

void ListHarmonySoftBusResponse::unsetharmonySoftBuses()
{
    harmonySoftBusesIsSet_ = false;
}

Page ListHarmonySoftBusResponse::getPage() const
{
    return page_;
}

void ListHarmonySoftBusResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListHarmonySoftBusResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListHarmonySoftBusResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


