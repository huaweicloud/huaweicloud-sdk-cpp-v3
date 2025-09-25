

#include "huaweicloud/codeartspipeline/v2/model/ListPluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPluginsResponse::ListPluginsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListPluginsResponse::~ListPluginsResponse() = default;

void ListPluginsResponse::validate()
{
}

web::json::value ListPluginsResponse::toJson() const
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
bool ListPluginsResponse::fromJson(const web::json::value& val)
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
            std::vector<PluginBasicVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListPluginsResponse::getOffset() const
{
    return offset_;
}

void ListPluginsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPluginsResponse::getLimit() const
{
    return limit_;
}

void ListPluginsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPluginsResponse::getTotal() const
{
    return total_;
}

void ListPluginsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPluginsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPluginsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PluginBasicVO>& ListPluginsResponse::getData()
{
    return data_;
}

void ListPluginsResponse::setData(const std::vector<PluginBasicVO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListPluginsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListPluginsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


