

#include "huaweicloud/organizations/v1/model/ListDelegatedAdministratorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDelegatedAdministratorsResponse::ListDelegatedAdministratorsResponse()
{
    delegatedAdministratorsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListDelegatedAdministratorsResponse::~ListDelegatedAdministratorsResponse() = default;

void ListDelegatedAdministratorsResponse::validate()
{
}

web::json::value ListDelegatedAdministratorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delegatedAdministratorsIsSet_) {
        val[utility::conversions::to_string_t("delegated_administrators")] = ModelBase::toJson(delegatedAdministrators_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListDelegatedAdministratorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delegated_administrators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegated_administrators"));
        if(!fieldValue.is_null())
        {
            std::vector<DelegatedAdministratorDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegatedAdministrators(refVal);
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


std::vector<DelegatedAdministratorDto>& ListDelegatedAdministratorsResponse::getDelegatedAdministrators()
{
    return delegatedAdministrators_;
}

void ListDelegatedAdministratorsResponse::setDelegatedAdministrators(const std::vector<DelegatedAdministratorDto>& value)
{
    delegatedAdministrators_ = value;
    delegatedAdministratorsIsSet_ = true;
}

bool ListDelegatedAdministratorsResponse::delegatedAdministratorsIsSet() const
{
    return delegatedAdministratorsIsSet_;
}

void ListDelegatedAdministratorsResponse::unsetdelegatedAdministrators()
{
    delegatedAdministratorsIsSet_ = false;
}

PageInfoDto ListDelegatedAdministratorsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListDelegatedAdministratorsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListDelegatedAdministratorsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListDelegatedAdministratorsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


