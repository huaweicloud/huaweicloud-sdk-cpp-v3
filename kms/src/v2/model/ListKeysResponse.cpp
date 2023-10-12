

#include "huaweicloud/kms/v2/model/ListKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeysResponse::ListKeysResponse()
{
    keysIsSet_ = false;
    keyDetailsIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    truncated_ = "";
    truncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListKeysResponse::~ListKeysResponse() = default;

void ListKeysResponse::validate()
{
}

web::json::value ListKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }
    if(keyDetailsIsSet_) {
        val[utility::conversions::to_string_t("key_details")] = ModelBase::toJson(keyDetails_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(truncatedIsSet_) {
        val[utility::conversions::to_string_t("truncated")] = ModelBase::toJson(truncated_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_details"));
        if(!fieldValue.is_null())
        {
            std::vector<KeyDetails> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("truncated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTruncated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListKeysResponse::getKeys()
{
    return keys_;
}

void ListKeysResponse::setKeys(const std::vector<std::string>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool ListKeysResponse::keysIsSet() const
{
    return keysIsSet_;
}

void ListKeysResponse::unsetkeys()
{
    keysIsSet_ = false;
}

std::vector<KeyDetails>& ListKeysResponse::getKeyDetails()
{
    return keyDetails_;
}

void ListKeysResponse::setKeyDetails(const std::vector<KeyDetails>& value)
{
    keyDetails_ = value;
    keyDetailsIsSet_ = true;
}

bool ListKeysResponse::keyDetailsIsSet() const
{
    return keyDetailsIsSet_;
}

void ListKeysResponse::unsetkeyDetails()
{
    keyDetailsIsSet_ = false;
}

std::string ListKeysResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListKeysResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListKeysResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListKeysResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

std::string ListKeysResponse::getTruncated() const
{
    return truncated_;
}

void ListKeysResponse::setTruncated(const std::string& value)
{
    truncated_ = value;
    truncatedIsSet_ = true;
}

bool ListKeysResponse::truncatedIsSet() const
{
    return truncatedIsSet_;
}

void ListKeysResponse::unsettruncated()
{
    truncatedIsSet_ = false;
}

int32_t ListKeysResponse::getTotal() const
{
    return total_;
}

void ListKeysResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListKeysResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListKeysResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


