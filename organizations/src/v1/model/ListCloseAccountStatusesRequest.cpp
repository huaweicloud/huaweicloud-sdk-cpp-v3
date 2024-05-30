

#include "huaweicloud/organizations/v1/model/ListCloseAccountStatusesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListCloseAccountStatusesRequest::ListCloseAccountStatusesRequest()
{
    statesIsSet_ = false;
}

ListCloseAccountStatusesRequest::~ListCloseAccountStatusesRequest() = default;

void ListCloseAccountStatusesRequest::validate()
{
}

web::json::value ListCloseAccountStatusesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }

    return val;
}
bool ListCloseAccountStatusesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListCloseAccountStatusesRequest::getStates()
{
    return states_;
}

void ListCloseAccountStatusesRequest::setStates(const std::vector<std::string>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool ListCloseAccountStatusesRequest::statesIsSet() const
{
    return statesIsSet_;
}

void ListCloseAccountStatusesRequest::unsetstates()
{
    statesIsSet_ = false;
}

}
}
}
}
}


