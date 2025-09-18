

#include "huaweicloud/projectman/v4/model/ListStatusStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListStatusStatisticResponse::ListStatusStatisticResponse()
{
    bodyIsSet_ = false;
}

ListStatusStatisticResponse::~ListStatusStatisticResponse() = default;

void ListStatusStatisticResponse::validate()
{
}

web::json::value ListStatusStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListStatusStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserStatusStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserStatusStatistic>& ListStatusStatisticResponse::getBody()
{
    return body_;
}

void ListStatusStatisticResponse::setBody(const std::vector<UserStatusStatistic>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListStatusStatisticResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListStatusStatisticResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


