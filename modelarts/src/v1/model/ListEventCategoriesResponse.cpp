

#include "huaweicloud/modelarts/v1/model/ListEventCategoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEventCategoriesResponse::ListEventCategoriesResponse()
{
    eventCategoriesIsSet_ = false;
}

ListEventCategoriesResponse::~ListEventCategoriesResponse() = default;

void ListEventCategoriesResponse::validate()
{
}

web::json::value ListEventCategoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventCategoriesIsSet_) {
        val[utility::conversions::to_string_t("event-categories")] = ModelBase::toJson(eventCategories_);
    }

    return val;
}
bool ListEventCategoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event-categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event-categories"));
        if(!fieldValue.is_null())
        {
            std::vector<EventCategoriesResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventCategories(refVal);
        }
    }
    return ok;
}


std::vector<EventCategoriesResp>& ListEventCategoriesResponse::getEventCategories()
{
    return eventCategories_;
}

void ListEventCategoriesResponse::setEventCategories(const std::vector<EventCategoriesResp>& value)
{
    eventCategories_ = value;
    eventCategoriesIsSet_ = true;
}

bool ListEventCategoriesResponse::eventCategoriesIsSet() const
{
    return eventCategoriesIsSet_;
}

void ListEventCategoriesResponse::unseteventCategories()
{
    eventCategoriesIsSet_ = false;
}

}
}
}
}
}


