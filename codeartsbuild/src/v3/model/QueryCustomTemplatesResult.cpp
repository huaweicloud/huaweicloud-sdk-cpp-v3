

#include "huaweicloud/codeartsbuild/v3/model/QueryCustomTemplatesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryCustomTemplatesResult::QueryCustomTemplatesResult()
{
    totalSize_ = 0;
    totalSizeIsSet_ = false;
    itemsIsSet_ = false;
}

QueryCustomTemplatesResult::~QueryCustomTemplatesResult() = default;

void QueryCustomTemplatesResult::validate()
{
}

web::json::value QueryCustomTemplatesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalSizeIsSet_) {
        val[utility::conversions::to_string_t("total_size")] = ModelBase::toJson(totalSize_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool QueryCustomTemplatesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryTemplatesItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t QueryCustomTemplatesResult::getTotalSize() const
{
    return totalSize_;
}

void QueryCustomTemplatesResult::setTotalSize(int32_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool QueryCustomTemplatesResult::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void QueryCustomTemplatesResult::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::vector<QueryTemplatesItems>& QueryCustomTemplatesResult::getItems()
{
    return items_;
}

void QueryCustomTemplatesResult::setItems(const std::vector<QueryTemplatesItems>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool QueryCustomTemplatesResult::itemsIsSet() const
{
    return itemsIsSet_;
}

void QueryCustomTemplatesResult::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


