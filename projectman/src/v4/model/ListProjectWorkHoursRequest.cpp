

#include "huaweicloud/projectman/v4/model/ListProjectWorkHoursRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectWorkHoursRequest::ListProjectWorkHoursRequest()
{
    bodyIsSet_ = false;
}

ListProjectWorkHoursRequest::~ListProjectWorkHoursRequest() = default;

void ListProjectWorkHoursRequest::validate()
{
}

web::json::value ListProjectWorkHoursRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectWorkHoursRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListProjectWorkHoursRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListProjectWorkHoursRequestBody ListProjectWorkHoursRequest::getBody() const
{
    return body_;
}

void ListProjectWorkHoursRequest::setBody(const ListProjectWorkHoursRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectWorkHoursRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectWorkHoursRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


