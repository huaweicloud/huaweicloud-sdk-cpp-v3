

#include "huaweicloud/modelarts/v1/model/MetricsItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MetricsItem::MetricsItem()
{
    tableIsSet_ = false;
    metadataIsSet_ = false;
}

MetricsItem::~MetricsItem() = default;

void MetricsItem::validate()
{
}

web::json::value MetricsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool MetricsItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            MetricTableItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ResourceMetricsMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


MetricTableItem MetricsItem::getTable() const
{
    return table_;
}

void MetricsItem::setTable(const MetricTableItem& value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool MetricsItem::tableIsSet() const
{
    return tableIsSet_;
}

void MetricsItem::unsettable()
{
    tableIsSet_ = false;
}

ResourceMetricsMetadata MetricsItem::getMetadata() const
{
    return metadata_;
}

void MetricsItem::setMetadata(const ResourceMetricsMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool MetricsItem::metadataIsSet() const
{
    return metadataIsSet_;
}

void MetricsItem::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


