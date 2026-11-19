

#include "huaweicloud/gaussdb/v3/model/SwitchColdTableStorageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchColdTableStorageResponse::SwitchColdTableStorageResponse()
{
    result_ = "";
    resultIsSet_ = false;
    failedItemsIsSet_ = false;
}

SwitchColdTableStorageResponse::~SwitchColdTableStorageResponse() = default;

void SwitchColdTableStorageResponse::validate()
{
}

web::json::value SwitchColdTableStorageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(failedItemsIsSet_) {
        val[utility::conversions::to_string_t("failed_items")] = ModelBase::toJson(failedItems_);
    }

    return val;
}
bool SwitchColdTableStorageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_items"));
        if(!fieldValue.is_null())
        {
            std::vector<FailedItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedItems(refVal);
        }
    }
    return ok;
}


std::string SwitchColdTableStorageResponse::getResult() const
{
    return result_;
}

void SwitchColdTableStorageResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SwitchColdTableStorageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SwitchColdTableStorageResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<FailedItem>& SwitchColdTableStorageResponse::getFailedItems()
{
    return failedItems_;
}

void SwitchColdTableStorageResponse::setFailedItems(const std::vector<FailedItem>& value)
{
    failedItems_ = value;
    failedItemsIsSet_ = true;
}

bool SwitchColdTableStorageResponse::failedItemsIsSet() const
{
    return failedItemsIsSet_;
}

void SwitchColdTableStorageResponse::unsetfailedItems()
{
    failedItemsIsSet_ = false;
}

}
}
}
}
}


