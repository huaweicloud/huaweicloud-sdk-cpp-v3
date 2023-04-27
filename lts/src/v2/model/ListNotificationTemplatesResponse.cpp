

#include "huaweicloud/lts/v2/model/ListNotificationTemplatesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTemplatesResponse::ListNotificationTemplatesResponse()
{
    resultsIsSet_ = false;
}

ListNotificationTemplatesResponse::~ListNotificationTemplatesResponse() = default;

void ListNotificationTemplatesResponse::validate()
{
}

web::json::value ListNotificationTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ListNotificationTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<NotificationTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<NotificationTemplate>& ListNotificationTemplatesResponse::getResults()
{
    return results_;
}

void ListNotificationTemplatesResponse::setResults(const std::vector<NotificationTemplate>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListNotificationTemplatesResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListNotificationTemplatesResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


