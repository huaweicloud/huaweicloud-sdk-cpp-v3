

#include "huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowKeystorePermissionRequest::ShowKeystorePermissionRequest()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
}

ShowKeystorePermissionRequest::~ShowKeystorePermissionRequest() = default;

void ShowKeystorePermissionRequest::validate()
{
}

web::json::value ShowKeystorePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ShowKeystorePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::string ShowKeystorePermissionRequest::getKeystoreId() const
{
    return keystoreId_;
}

void ShowKeystorePermissionRequest::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool ShowKeystorePermissionRequest::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void ShowKeystorePermissionRequest::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

int32_t ShowKeystorePermissionRequest::getPageSize() const
{
    return pageSize_;
}

void ShowKeystorePermissionRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowKeystorePermissionRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowKeystorePermissionRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ShowKeystorePermissionRequest::getPage() const
{
    return page_;
}

void ShowKeystorePermissionRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowKeystorePermissionRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ShowKeystorePermissionRequest::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


