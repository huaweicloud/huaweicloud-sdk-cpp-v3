

#include "huaweicloud/codeartspipeline/v2/model/ListPluginVersionNumberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPluginVersionNumberResponse::ListPluginVersionNumberResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListPluginVersionNumberResponse::~ListPluginVersionNumberResponse() = default;

void ListPluginVersionNumberResponse::validate()
{
}

web::json::value ListPluginVersionNumberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListPluginVersionNumberResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListPluginVersionNumberResponse::getOffset() const
{
    return offset_;
}

void ListPluginVersionNumberResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginVersionNumberResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginVersionNumberResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPluginVersionNumberResponse::getLimit() const
{
    return limit_;
}

void ListPluginVersionNumberResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginVersionNumberResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginVersionNumberResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPluginVersionNumberResponse::getTotal() const
{
    return total_;
}

void ListPluginVersionNumberResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPluginVersionNumberResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPluginVersionNumberResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<std::string>& ListPluginVersionNumberResponse::getData()
{
    return data_;
}

void ListPluginVersionNumberResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListPluginVersionNumberResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListPluginVersionNumberResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


