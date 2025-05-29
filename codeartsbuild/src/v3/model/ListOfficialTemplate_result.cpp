

#include "huaweicloud/codeartsbuild/v3/model/ListOfficialTemplate_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListOfficialTemplate_result::ListOfficialTemplate_result()
{
    totalSize_ = 0.0;
    totalSizeIsSet_ = false;
    itemsIsSet_ = false;
}

ListOfficialTemplate_result::~ListOfficialTemplate_result() = default;

void ListOfficialTemplate_result::validate()
{
}

web::json::value ListOfficialTemplate_result::toJson() const
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
bool ListOfficialTemplate_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


double ListOfficialTemplate_result::getTotalSize() const
{
    return totalSize_;
}

void ListOfficialTemplate_result::setTotalSize(double value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool ListOfficialTemplate_result::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void ListOfficialTemplate_result::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::vector<TemplateList>& ListOfficialTemplate_result::getItems()
{
    return items_;
}

void ListOfficialTemplate_result::setItems(const std::vector<TemplateList>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListOfficialTemplate_result::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListOfficialTemplate_result::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


