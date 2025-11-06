

#include "huaweicloud/codeartsrepo/v4/model/ShowBlobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowBlobsResponse::ShowBlobsResponse()
{
    size_ = 0L;
    sizeIsSet_ = false;
    encoding_ = "";
    encodingIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowBlobsResponse::~ShowBlobsResponse() = default;

void ShowBlobsResponse::validate()
{
}

web::json::value ShowBlobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(encodingIsSet_) {
        val[utility::conversions::to_string_t("encoding")] = ModelBase::toJson(encoding_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowBlobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


int64_t ShowBlobsResponse::getSize() const
{
    return size_;
}

void ShowBlobsResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowBlobsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowBlobsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowBlobsResponse::getEncoding() const
{
    return encoding_;
}

void ShowBlobsResponse::setEncoding(const std::string& value)
{
    encoding_ = value;
    encodingIsSet_ = true;
}

bool ShowBlobsResponse::encodingIsSet() const
{
    return encodingIsSet_;
}

void ShowBlobsResponse::unsetencoding()
{
    encodingIsSet_ = false;
}

std::string ShowBlobsResponse::getContent() const
{
    return content_;
}

void ShowBlobsResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowBlobsResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowBlobsResponse::unsetcontent()
{
    contentIsSet_ = false;
}

std::string ShowBlobsResponse::getBlobId() const
{
    return blobId_;
}

void ShowBlobsResponse::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool ShowBlobsResponse::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void ShowBlobsResponse::unsetblobId()
{
    blobIdIsSet_ = false;
}

std::string ShowBlobsResponse::getXTotal() const
{
    return xTotal_;
}

void ShowBlobsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowBlobsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowBlobsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


