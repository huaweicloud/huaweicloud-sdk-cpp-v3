

#include "huaweicloud/metastudio/v1/model/ListInsertCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInsertCommandsResponse::ListInsertCommandsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    insertCommandsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInsertCommandsResponse::~ListInsertCommandsResponse() = default;

void ListInsertCommandsResponse::validate()
{
}

web::json::value ListInsertCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(insertCommandsIsSet_) {
        val[utility::conversions::to_string_t("insert_commands")] = ModelBase::toJson(insertCommands_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListInsertCommandsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_commands"));
        if(!fieldValue.is_null())
        {
            std::vector<InsertCommandItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertCommands(refVal);
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


int32_t ListInsertCommandsResponse::getCount() const
{
    return count_;
}

void ListInsertCommandsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInsertCommandsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInsertCommandsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InsertCommandItem>& ListInsertCommandsResponse::getInsertCommands()
{
    return insertCommands_;
}

void ListInsertCommandsResponse::setInsertCommands(const std::vector<InsertCommandItem>& value)
{
    insertCommands_ = value;
    insertCommandsIsSet_ = true;
}

bool ListInsertCommandsResponse::insertCommandsIsSet() const
{
    return insertCommandsIsSet_;
}

void ListInsertCommandsResponse::unsetinsertCommands()
{
    insertCommandsIsSet_ = false;
}

std::string ListInsertCommandsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInsertCommandsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInsertCommandsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInsertCommandsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


