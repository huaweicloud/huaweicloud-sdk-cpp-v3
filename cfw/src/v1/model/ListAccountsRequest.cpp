

#include "huaweicloud/cfw/v1/model/ListAccountsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAccountsRequest::ListAccountsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListAccountsRequest::~ListAccountsRequest() = default;

void ListAccountsRequest::validate()
{
}

web::json::value ListAccountsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListAccountsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListAccountsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAccountsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAccountsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAccountsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListAccountsRequest::getLimit() const
{
    return limit_;
}

void ListAccountsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAccountsRequest::getOffset() const
{
    return offset_;
}

void ListAccountsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAccountsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAccountsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


