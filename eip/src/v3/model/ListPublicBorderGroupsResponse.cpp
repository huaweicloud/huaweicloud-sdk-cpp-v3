

#include "huaweicloud/eip/v3/model/ListPublicBorderGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicBorderGroupsResponse::ListPublicBorderGroupsResponse()
{
    publicBorderGroupsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListPublicBorderGroupsResponse::~ListPublicBorderGroupsResponse() = default;

void ListPublicBorderGroupsResponse::validate()
{
}

web::json::value ListPublicBorderGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicBorderGroupsIsSet_) {
        val[utility::conversions::to_string_t("public_border_groups")] = ModelBase::toJson(publicBorderGroups_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListPublicBorderGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_border_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<CommonPoolsWithBorderGroupDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<CommonPoolsWithBorderGroupDict>& ListPublicBorderGroupsResponse::getPublicBorderGroups()
{
    return publicBorderGroups_;
}

void ListPublicBorderGroupsResponse::setPublicBorderGroups(const std::vector<CommonPoolsWithBorderGroupDict>& value)
{
    publicBorderGroups_ = value;
    publicBorderGroupsIsSet_ = true;
}

bool ListPublicBorderGroupsResponse::publicBorderGroupsIsSet() const
{
    return publicBorderGroupsIsSet_;
}

void ListPublicBorderGroupsResponse::unsetpublicBorderGroups()
{
    publicBorderGroupsIsSet_ = false;
}

std::string ListPublicBorderGroupsResponse::getRequestId() const
{
    return requestId_;
}

void ListPublicBorderGroupsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListPublicBorderGroupsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListPublicBorderGroupsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


