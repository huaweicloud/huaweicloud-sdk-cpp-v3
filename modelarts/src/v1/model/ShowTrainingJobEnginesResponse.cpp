

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobEnginesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobEnginesResponse::ShowTrainingJobEnginesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ShowTrainingJobEnginesResponse::~ShowTrainingJobEnginesResponse() = default;

void ShowTrainingJobEnginesResponse::validate()
{
}

web::json::value ShowTrainingJobEnginesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ShowTrainingJobEnginesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<ListEngines_items> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ShowTrainingJobEnginesResponse::getTotal() const
{
    return total_;
}

void ShowTrainingJobEnginesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTrainingJobEnginesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTrainingJobEnginesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListEngines_items>& ShowTrainingJobEnginesResponse::getItems()
{
    return items_;
}

void ShowTrainingJobEnginesResponse::setItems(const std::vector<ListEngines_items>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ShowTrainingJobEnginesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ShowTrainingJobEnginesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


