

#include "huaweicloud/cfw/v1/model/ListOrganizationTreeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListOrganizationTreeResponse::ListOrganizationTreeResponse()
{
    dataIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListOrganizationTreeResponse::~ListOrganizationTreeResponse() = default;

void ListOrganizationTreeResponse::validate()
{
}

web::json::value ListOrganizationTreeResponse::toJson() const
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
bool ListOrganizationTreeResponse::fromJson(const web::json::value& val)
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


std::vector<OrganizationAccountInfo>& ListOrganizationTreeResponse::getData()
{
    return data_;
}

void ListOrganizationTreeResponse::setData(const std::vector<OrganizationAccountInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListOrganizationTreeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListOrganizationTreeResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListOrganizationTreeResponse::getMarker() const
{
    return marker_;
}

void ListOrganizationTreeResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOrganizationTreeResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListOrganizationTreeResponse::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListOrganizationTreeResponse::getTotal() const
{
    return total_;
}

void ListOrganizationTreeResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListOrganizationTreeResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListOrganizationTreeResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


