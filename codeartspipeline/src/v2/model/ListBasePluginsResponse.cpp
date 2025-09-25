

#include "huaweicloud/codeartspipeline/v2/model/ListBasePluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListBasePluginsResponse::ListBasePluginsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListBasePluginsResponse::~ListBasePluginsResponse() = default;

void ListBasePluginsResponse::validate()
{
}

web::json::value ListBasePluginsResponse::toJson() const
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
bool ListBasePluginsResponse::fromJson(const web::json::value& val)
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
            std::vector<PageInfoOptionalSinglePluginVO_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListBasePluginsResponse::getOffset() const
{
    return offset_;
}

void ListBasePluginsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBasePluginsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBasePluginsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBasePluginsResponse::getLimit() const
{
    return limit_;
}

void ListBasePluginsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBasePluginsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListBasePluginsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBasePluginsResponse::getTotal() const
{
    return total_;
}

void ListBasePluginsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBasePluginsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBasePluginsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PageInfoOptionalSinglePluginVO_data>& ListBasePluginsResponse::getData()
{
    return data_;
}

void ListBasePluginsResponse::setData(const std::vector<PageInfoOptionalSinglePluginVO_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListBasePluginsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListBasePluginsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


