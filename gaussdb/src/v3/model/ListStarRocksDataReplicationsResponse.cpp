

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataReplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataReplicationsResponse::ListStarRocksDataReplicationsResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    replicationsIsSet_ = false;
    extText_ = "";
    extTextIsSet_ = false;
}

ListStarRocksDataReplicationsResponse::~ListStarRocksDataReplicationsResponse() = default;

void ListStarRocksDataReplicationsResponse::validate()
{
}

web::json::value ListStarRocksDataReplicationsResponse::toJson() const
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
bool ListStarRocksDataReplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replications"));
        if(!fieldValue.is_null())
        {
            std::vector<StarRocksReplicationInfo> refVal;
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


std::string ListStarRocksDataReplicationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListStarRocksDataReplicationsResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListStarRocksDataReplicationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListStarRocksDataReplicationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<StarRocksReplicationInfo>& ListStarRocksDataReplicationsResponse::getReplications()
{
    return replications_;
}

void ListStarRocksDataReplicationsResponse::setReplications(const std::vector<StarRocksReplicationInfo>& value)
{
    replications_ = value;
    replicationsIsSet_ = true;
}

bool ListStarRocksDataReplicationsResponse::replicationsIsSet() const
{
    return replicationsIsSet_;
}

void ListStarRocksDataReplicationsResponse::unsetreplications()
{
    replicationsIsSet_ = false;
}

std::string ListStarRocksDataReplicationsResponse::getExtText() const
{
    return extText_;
}

void ListStarRocksDataReplicationsResponse::setExtText(const std::string& value)
{
    extText_ = value;
    extTextIsSet_ = true;
}

bool ListStarRocksDataReplicationsResponse::extTextIsSet() const
{
    return extTextIsSet_;
}

void ListStarRocksDataReplicationsResponse::unsetextText()
{
    extTextIsSet_ = false;
}

}
}
}
}
}


