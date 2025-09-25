

#include "huaweicloud/codeartspipeline/v2/model/ListBasePluginsNewPostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListBasePluginsNewPostResponse::ListBasePluginsNewPostResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListBasePluginsNewPostResponse::~ListBasePluginsNewPostResponse() = default;

void ListBasePluginsNewPostResponse::validate()
{
}

web::json::value ListBasePluginsNewPostResponse::toJson() const
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
bool ListBasePluginsNewPostResponse::fromJson(const web::json::value& val)
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
            std::vector<PageInfoBusinessTypeDefinitionVO_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListBasePluginsNewPostResponse::getOffset() const
{
    return offset_;
}

void ListBasePluginsNewPostResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBasePluginsNewPostResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBasePluginsNewPostResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBasePluginsNewPostResponse::getLimit() const
{
    return limit_;
}

void ListBasePluginsNewPostResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBasePluginsNewPostResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListBasePluginsNewPostResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBasePluginsNewPostResponse::getTotal() const
{
    return total_;
}

void ListBasePluginsNewPostResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBasePluginsNewPostResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBasePluginsNewPostResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PageInfoBusinessTypeDefinitionVO_data>& ListBasePluginsNewPostResponse::getData()
{
    return data_;
}

void ListBasePluginsNewPostResponse::setData(const std::vector<PageInfoBusinessTypeDefinitionVO_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListBasePluginsNewPostResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListBasePluginsNewPostResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


