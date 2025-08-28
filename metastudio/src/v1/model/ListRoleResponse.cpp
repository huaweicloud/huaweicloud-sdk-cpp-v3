

#include "huaweicloud/metastudio/v1/model/ListRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListRoleResponse::ListRoleResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListRoleResponse::~ListRoleResponse() = default;

void ListRoleResponse::validate()
{
}

web::json::value ListRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListRoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListRoleResponse::getOffset() const
{
    return offset_;
}

void ListRoleResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRoleResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRoleResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRoleResponse::getLimit() const
{
    return limit_;
}

void ListRoleResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRoleResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListRoleResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListRoleResponse::getCount() const
{
    return count_;
}

void ListRoleResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRoleResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRoleResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RoleInfo>& ListRoleResponse::getData()
{
    return data_;
}

void ListRoleResponse::setData(const std::vector<RoleInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRoleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRoleResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListRoleResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListRoleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListRoleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListRoleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


