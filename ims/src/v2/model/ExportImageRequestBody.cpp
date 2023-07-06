

#include "huaweicloud/ims/v2/model/ExportImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ExportImageRequestBody::ExportImageRequestBody()
{
    bucketUrl_ = "";
    bucketUrlIsSet_ = false;
    fileFormat_ = "";
    fileFormatIsSet_ = false;
    isQuickExport_ = false;
    isQuickExportIsSet_ = false;
}

ExportImageRequestBody::~ExportImageRequestBody() = default;

void ExportImageRequestBody::validate()
{
}

web::json::value ExportImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketUrlIsSet_) {
        val[utility::conversions::to_string_t("bucket_url")] = ModelBase::toJson(bucketUrl_);
    }
    if(fileFormatIsSet_) {
        val[utility::conversions::to_string_t("file_format")] = ModelBase::toJson(fileFormat_);
    }
    if(isQuickExportIsSet_) {
        val[utility::conversions::to_string_t("is_quick_export")] = ModelBase::toJson(isQuickExport_);
    }

    return val;
}

bool ExportImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_quick_export"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_quick_export"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQuickExport(refVal);
        }
    }
    return ok;
}

std::string ExportImageRequestBody::getBucketUrl() const
{
    return bucketUrl_;
}

void ExportImageRequestBody::setBucketUrl(const std::string& value)
{
    bucketUrl_ = value;
    bucketUrlIsSet_ = true;
}

bool ExportImageRequestBody::bucketUrlIsSet() const
{
    return bucketUrlIsSet_;
}

void ExportImageRequestBody::unsetbucketUrl()
{
    bucketUrlIsSet_ = false;
}

std::string ExportImageRequestBody::getFileFormat() const
{
    return fileFormat_;
}

void ExportImageRequestBody::setFileFormat(const std::string& value)
{
    fileFormat_ = value;
    fileFormatIsSet_ = true;
}

bool ExportImageRequestBody::fileFormatIsSet() const
{
    return fileFormatIsSet_;
}

void ExportImageRequestBody::unsetfileFormat()
{
    fileFormatIsSet_ = false;
}

bool ExportImageRequestBody::isIsQuickExport() const
{
    return isQuickExport_;
}

void ExportImageRequestBody::setIsQuickExport(bool value)
{
    isQuickExport_ = value;
    isQuickExportIsSet_ = true;
}

bool ExportImageRequestBody::isQuickExportIsSet() const
{
    return isQuickExportIsSet_;
}

void ExportImageRequestBody::unsetisQuickExport()
{
    isQuickExportIsSet_ = false;
}

}
}
}
}
}


