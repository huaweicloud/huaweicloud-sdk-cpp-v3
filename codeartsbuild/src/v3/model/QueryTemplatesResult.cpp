

#include "huaweicloud/codeartsbuild/v3/model/QueryTemplatesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




QueryTemplatesResult::QueryTemplatesResult()
{
    totalSize_ = 0;
    totalSizeIsSet_ = false;
    itemsIsSet_ = false;
}

QueryTemplatesResult::~QueryTemplatesResult() = default;

void QueryTemplatesResult::validate()
{
}

web::json::value QueryTemplatesResult::toJson() const
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
bool QueryTemplatesResult::fromJson(const web::json::value& val)
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


int32_t QueryTemplatesResult::getTotalSize() const
{
    return totalSize_;
}

void QueryTemplatesResult::setTotalSize(int32_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool QueryTemplatesResult::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void QueryTemplatesResult::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::vector<QueryTemplatesItems>& QueryTemplatesResult::getItems()
{
    return items_;
}

void QueryTemplatesResult::setItems(const std::vector<QueryTemplatesItems>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool QueryTemplatesResult::itemsIsSet() const
{
    return itemsIsSet_;
}

void QueryTemplatesResult::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


