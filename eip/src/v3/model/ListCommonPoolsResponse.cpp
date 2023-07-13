

#include "huaweicloud/eip/v3/model/ListCommonPoolsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListCommonPoolsResponse::ListCommonPoolsResponse()
{
    commonPoolsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListCommonPoolsResponse::~ListCommonPoolsResponse() = default;

void ListCommonPoolsResponse::validate()
{
}

web::json::value ListCommonPoolsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commonPoolsIsSet_) {
        val[utility::conversions::to_string_t("common_pools")] = ModelBase::toJson(commonPools_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool ListCommonPoolsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("common_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<CommonPoolDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonPools(refVal);
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

std::vector<CommonPoolDict>& ListCommonPoolsResponse::getCommonPools()
{
    return commonPools_;
}

void ListCommonPoolsResponse::setCommonPools(const std::vector<CommonPoolDict>& value)
{
    commonPools_ = value;
    commonPoolsIsSet_ = true;
}

bool ListCommonPoolsResponse::commonPoolsIsSet() const
{
    return commonPoolsIsSet_;
}

void ListCommonPoolsResponse::unsetcommonPools()
{
    commonPoolsIsSet_ = false;
}

std::string ListCommonPoolsResponse::getRequestId() const
{
    return requestId_;
}

void ListCommonPoolsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListCommonPoolsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListCommonPoolsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


