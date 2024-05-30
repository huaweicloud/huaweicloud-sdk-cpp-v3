

#include "huaweicloud/organizations/v1/model/ListCreateAccountStatusesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListCreateAccountStatusesResponse::ListCreateAccountStatusesResponse()
{
    createAccountStatusesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListCreateAccountStatusesResponse::~ListCreateAccountStatusesResponse() = default;

void ListCreateAccountStatusesResponse::validate()
{
}

web::json::value ListCreateAccountStatusesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAccountStatusesIsSet_) {
        val[utility::conversions::to_string_t("create_account_statuses")] = ModelBase::toJson(createAccountStatuses_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListCreateAccountStatusesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_account_statuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_account_statuses"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateAccountStatusDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAccountStatuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<CreateAccountStatusDto>& ListCreateAccountStatusesResponse::getCreateAccountStatuses()
{
    return createAccountStatuses_;
}

void ListCreateAccountStatusesResponse::setCreateAccountStatuses(const std::vector<CreateAccountStatusDto>& value)
{
    createAccountStatuses_ = value;
    createAccountStatusesIsSet_ = true;
}

bool ListCreateAccountStatusesResponse::createAccountStatusesIsSet() const
{
    return createAccountStatusesIsSet_;
}

void ListCreateAccountStatusesResponse::unsetcreateAccountStatuses()
{
    createAccountStatusesIsSet_ = false;
}

PageInfoDto ListCreateAccountStatusesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListCreateAccountStatusesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListCreateAccountStatusesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListCreateAccountStatusesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


