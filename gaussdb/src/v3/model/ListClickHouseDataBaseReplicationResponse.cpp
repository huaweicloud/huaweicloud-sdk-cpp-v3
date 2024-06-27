

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseReplicationResponse::ListClickHouseDataBaseReplicationResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    replicationsIsSet_ = false;
    extText_ = "";
    extTextIsSet_ = false;
}

ListClickHouseDataBaseReplicationResponse::~ListClickHouseDataBaseReplicationResponse() = default;

void ListClickHouseDataBaseReplicationResponse::validate()
{
}

web::json::value ListClickHouseDataBaseReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(replicationsIsSet_) {
        val[utility::conversions::to_string_t("replications")] = ModelBase::toJson(replications_);
    }
    if(extTextIsSet_) {
        val[utility::conversions::to_string_t("ext_text")] = ModelBase::toJson(extText_);
    }

    return val;
}
bool ListClickHouseDataBaseReplicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replications"));
        if(!fieldValue.is_null())
        {
            std::vector<ChDatabaseReplicationInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplications(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtText(refVal);
        }
    }
    return ok;
}


int32_t ListClickHouseDataBaseReplicationResponse::getTotalCount() const
{
    return totalCount_;
}

void ListClickHouseDataBaseReplicationResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListClickHouseDataBaseReplicationResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ChDatabaseReplicationInfo>& ListClickHouseDataBaseReplicationResponse::getReplications()
{
    return replications_;
}

void ListClickHouseDataBaseReplicationResponse::setReplications(const std::vector<ChDatabaseReplicationInfo>& value)
{
    replications_ = value;
    replicationsIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationResponse::replicationsIsSet() const
{
    return replicationsIsSet_;
}

void ListClickHouseDataBaseReplicationResponse::unsetreplications()
{
    replicationsIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationResponse::getExtText() const
{
    return extText_;
}

void ListClickHouseDataBaseReplicationResponse::setExtText(const std::string& value)
{
    extText_ = value;
    extTextIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationResponse::extTextIsSet() const
{
    return extTextIsSet_;
}

void ListClickHouseDataBaseReplicationResponse::unsetextText()
{
    extTextIsSet_ = false;
}

}
}
}
}
}


