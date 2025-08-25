

#include "huaweicloud/cce/v3/model/SnapshotSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotSpec::SnapshotSpec()
{
    itemsIsSet_ = false;
}

SnapshotSpec::~SnapshotSpec() = default;

void SnapshotSpec::validate()
{
}

web::json::value SnapshotSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool SnapshotSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotSpecItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::vector<SnapshotSpecItems>& SnapshotSpec::getItems()
{
    return items_;
}

void SnapshotSpec::setItems(const std::vector<SnapshotSpecItems>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool SnapshotSpec::itemsIsSet() const
{
    return itemsIsSet_;
}

void SnapshotSpec::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


