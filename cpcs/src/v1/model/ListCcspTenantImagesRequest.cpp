

#include "huaweicloud/cpcs/v1/model/ListCcspTenantImagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ListCcspTenantImagesRequest::ListCcspTenantImagesRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListCcspTenantImagesRequest::~ListCcspTenantImagesRequest() = default;

void ListCcspTenantImagesRequest::validate()
{
}

web::json::value ListCcspTenantImagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListCcspTenantImagesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


int32_t ListCcspTenantImagesRequest::getPageSize() const
{
    return pageSize_;
}

void ListCcspTenantImagesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListCcspTenantImagesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListCcspTenantImagesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListCcspTenantImagesRequest::getPageNum() const
{
    return pageNum_;
}

void ListCcspTenantImagesRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListCcspTenantImagesRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListCcspTenantImagesRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

std::string ListCcspTenantImagesRequest::getImageName() const
{
    return imageName_;
}

void ListCcspTenantImagesRequest::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ListCcspTenantImagesRequest::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ListCcspTenantImagesRequest::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ListCcspTenantImagesRequest::getServiceType() const
{
    return serviceType_;
}

void ListCcspTenantImagesRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListCcspTenantImagesRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListCcspTenantImagesRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListCcspTenantImagesRequest::getSortKey() const
{
    return sortKey_;
}

void ListCcspTenantImagesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListCcspTenantImagesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListCcspTenantImagesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListCcspTenantImagesRequest::getSortDir() const
{
    return sortDir_;
}

void ListCcspTenantImagesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListCcspTenantImagesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListCcspTenantImagesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


