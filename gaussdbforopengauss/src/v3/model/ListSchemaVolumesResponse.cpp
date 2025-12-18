

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSchemaVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSchemaVolumesResponse::ListSchemaVolumesResponse()
{
    schemaVolumesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSchemaVolumesResponse::~ListSchemaVolumesResponse() = default;

void ListSchemaVolumesResponse::validate()
{
}

web::json::value ListSchemaVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaVolumesIsSet_) {
        val[utility::conversions::to_string_t("schema_volumes")] = ModelBase::toJson(schemaVolumes_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListSchemaVolumesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<SchemaVolumeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<SchemaVolumeResult>& ListSchemaVolumesResponse::getSchemaVolumes()
{
    return schemaVolumes_;
}

void ListSchemaVolumesResponse::setSchemaVolumes(const std::vector<SchemaVolumeResult>& value)
{
    schemaVolumes_ = value;
    schemaVolumesIsSet_ = true;
}

bool ListSchemaVolumesResponse::schemaVolumesIsSet() const
{
    return schemaVolumesIsSet_;
}

void ListSchemaVolumesResponse::unsetschemaVolumes()
{
    schemaVolumesIsSet_ = false;
}

int32_t ListSchemaVolumesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSchemaVolumesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSchemaVolumesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSchemaVolumesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


