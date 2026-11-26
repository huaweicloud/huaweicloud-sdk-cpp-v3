

#include "huaweicloud/modelarts/v1/model/ListAssetFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetFileResponse::ListAssetFileResponse()
{
    contentsIsSet_ = false;
    isTruncated_ = false;
    isTruncatedIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    maxKeys_ = 0;
    maxKeysIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    commonPrefixesIsSet_ = false;
}

ListAssetFileResponse::~ListAssetFileResponse() = default;

void ListAssetFileResponse::validate()
{
}

web::json::value ListAssetFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }
    if(isTruncatedIsSet_) {
        val[utility::conversions::to_string_t("is_truncated")] = ModelBase::toJson(isTruncated_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(maxKeysIsSet_) {
        val[utility::conversions::to_string_t("max_keys")] = ModelBase::toJson(maxKeys_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(commonPrefixesIsSet_) {
        val[utility::conversions::to_string_t("common_prefixes")] = ModelBase::toJson(commonPrefixes_);
    }

    return val;
}
bool ListAssetFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<Content> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_truncated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTruncated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("max_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_keys"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common_prefixes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_prefixes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonPrefixes(refVal);
        }
    }
    return ok;
}


std::vector<Content>& ListAssetFileResponse::getContents()
{
    return contents_;
}

void ListAssetFileResponse::setContents(const std::vector<Content>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool ListAssetFileResponse::contentsIsSet() const
{
    return contentsIsSet_;
}

void ListAssetFileResponse::unsetcontents()
{
    contentsIsSet_ = false;
}

bool ListAssetFileResponse::isIsTruncated() const
{
    return isTruncated_;
}

void ListAssetFileResponse::setIsTruncated(bool value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ListAssetFileResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ListAssetFileResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

std::string ListAssetFileResponse::getMarker() const
{
    return marker_;
}

void ListAssetFileResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAssetFileResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListAssetFileResponse::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAssetFileResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListAssetFileResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListAssetFileResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListAssetFileResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t ListAssetFileResponse::getMaxKeys() const
{
    return maxKeys_;
}

void ListAssetFileResponse::setMaxKeys(int32_t value)
{
    maxKeys_ = value;
    maxKeysIsSet_ = true;
}

bool ListAssetFileResponse::maxKeysIsSet() const
{
    return maxKeysIsSet_;
}

void ListAssetFileResponse::unsetmaxKeys()
{
    maxKeysIsSet_ = false;
}

std::string ListAssetFileResponse::getBucketName() const
{
    return bucketName_;
}

void ListAssetFileResponse::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ListAssetFileResponse::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ListAssetFileResponse::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ListAssetFileResponse::getPrefix() const
{
    return prefix_;
}

void ListAssetFileResponse::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool ListAssetFileResponse::prefixIsSet() const
{
    return prefixIsSet_;
}

void ListAssetFileResponse::unsetprefix()
{
    prefixIsSet_ = false;
}

std::vector<std::string>& ListAssetFileResponse::getCommonPrefixes()
{
    return commonPrefixes_;
}

void ListAssetFileResponse::setCommonPrefixes(const std::vector<std::string>& value)
{
    commonPrefixes_ = value;
    commonPrefixesIsSet_ = true;
}

bool ListAssetFileResponse::commonPrefixesIsSet() const
{
    return commonPrefixesIsSet_;
}

void ListAssetFileResponse::unsetcommonPrefixes()
{
    commonPrefixesIsSet_ = false;
}

}
}
}
}
}


