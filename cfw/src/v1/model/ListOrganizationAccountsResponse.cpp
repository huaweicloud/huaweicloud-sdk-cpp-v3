

#include "huaweicloud/cfw/v1/model/ListOrganizationAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListOrganizationAccountsResponse::ListOrganizationAccountsResponse()
{
    dataIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListOrganizationAccountsResponse::~ListOrganizationAccountsResponse() = default;

void ListOrganizationAccountsResponse::validate()
{
}

web::json::value ListOrganizationAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListOrganizationAccountsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationAccountInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<OrganizationAccountInfo>& ListOrganizationAccountsResponse::getData()
{
    return data_;
}

void ListOrganizationAccountsResponse::setData(const std::vector<OrganizationAccountInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListOrganizationAccountsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListOrganizationAccountsResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListOrganizationAccountsResponse::getMarker() const
{
    return marker_;
}

void ListOrganizationAccountsResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOrganizationAccountsResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListOrganizationAccountsResponse::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListOrganizationAccountsResponse::getTotal() const
{
    return total_;
}

void ListOrganizationAccountsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListOrganizationAccountsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListOrganizationAccountsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


