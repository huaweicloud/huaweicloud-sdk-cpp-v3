

#include "huaweicloud/organizations/v1/model/ListCloseAccountStatusesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListCloseAccountStatusesResponse::ListCloseAccountStatusesResponse()
{
    closeAccountStatusesIsSet_ = false;
}

ListCloseAccountStatusesResponse::~ListCloseAccountStatusesResponse() = default;

void ListCloseAccountStatusesResponse::validate()
{
}

web::json::value ListCloseAccountStatusesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(closeAccountStatusesIsSet_) {
        val[utility::conversions::to_string_t("close_account_statuses")] = ModelBase::toJson(closeAccountStatuses_);
    }

    return val;
}
bool ListCloseAccountStatusesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("close_account_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_account_statuses"));
        if(!fieldValue.is_null())
        {
            std::vector<CloseAccountStatusDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseAccountStatuses(refVal);
        }
    }
    return ok;
}


std::vector<CloseAccountStatusDto>& ListCloseAccountStatusesResponse::getCloseAccountStatuses()
{
    return closeAccountStatuses_;
}

void ListCloseAccountStatusesResponse::setCloseAccountStatuses(const std::vector<CloseAccountStatusDto>& value)
{
    closeAccountStatuses_ = value;
    closeAccountStatusesIsSet_ = true;
}

bool ListCloseAccountStatusesResponse::closeAccountStatusesIsSet() const
{
    return closeAccountStatusesIsSet_;
}

void ListCloseAccountStatusesResponse::unsetcloseAccountStatuses()
{
    closeAccountStatusesIsSet_ = false;
}

}
}
}
}
}


