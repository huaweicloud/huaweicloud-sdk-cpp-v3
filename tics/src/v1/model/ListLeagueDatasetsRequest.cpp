

#include "huaweicloud/tics/v1/model/ListLeagueDatasetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListLeagueDatasetsRequest::ListLeagueDatasetsRequest()
{
    leagueId_ = "";
    leagueIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    datasetName_ = "";
    datasetNameIsSet_ = false;
    partnerName_ = "";
    partnerNameIsSet_ = false;
}

ListLeagueDatasetsRequest::~ListLeagueDatasetsRequest() = default;

void ListLeagueDatasetsRequest::validate()
{
}

web::json::value ListLeagueDatasetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(datasetNameIsSet_) {
        val[utility::conversions::to_string_t("dataset_name")] = ModelBase::toJson(datasetName_);
    }
    if(partnerNameIsSet_) {
        val[utility::conversions::to_string_t("partner_name")] = ModelBase::toJson(partnerName_);
    }

    return val;
}
bool ListLeagueDatasetsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("dataset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerName(refVal);
        }
    }
    return ok;
}


std::string ListLeagueDatasetsRequest::getLeagueId() const
{
    return leagueId_;
}

void ListLeagueDatasetsRequest::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool ListLeagueDatasetsRequest::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void ListLeagueDatasetsRequest::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

int32_t ListLeagueDatasetsRequest::getOffset() const
{
    return offset_;
}

void ListLeagueDatasetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLeagueDatasetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLeagueDatasetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLeagueDatasetsRequest::getLimit() const
{
    return limit_;
}

void ListLeagueDatasetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLeagueDatasetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLeagueDatasetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLeagueDatasetsRequest::getDatasetName() const
{
    return datasetName_;
}

void ListLeagueDatasetsRequest::setDatasetName(const std::string& value)
{
    datasetName_ = value;
    datasetNameIsSet_ = true;
}

bool ListLeagueDatasetsRequest::datasetNameIsSet() const
{
    return datasetNameIsSet_;
}

void ListLeagueDatasetsRequest::unsetdatasetName()
{
    datasetNameIsSet_ = false;
}

std::string ListLeagueDatasetsRequest::getPartnerName() const
{
    return partnerName_;
}

void ListLeagueDatasetsRequest::setPartnerName(const std::string& value)
{
    partnerName_ = value;
    partnerNameIsSet_ = true;
}

bool ListLeagueDatasetsRequest::partnerNameIsSet() const
{
    return partnerNameIsSet_;
}

void ListLeagueDatasetsRequest::unsetpartnerName()
{
    partnerNameIsSet_ = false;
}

}
}
}
}
}


