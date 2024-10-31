

#include "huaweicloud/cfw/v1/model/ListJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListJobResponse::ListJobResponse()
{
    dataIsSet_ = false;
}

ListJobResponse::~ListJobResponse() = default;

void ListJobResponse::validate()
{
}

web::json::value ListJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            GetCreateFirewallJobResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


GetCreateFirewallJobResponseData ListJobResponse::getData() const
{
    return data_;
}

void ListJobResponse::setData(const GetCreateFirewallJobResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListJobResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListJobResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


