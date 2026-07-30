

#include "huaweicloud/modelarts/v1/model/SyncDevServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SyncDevServersResponse::SyncDevServersResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    dataIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

SyncDevServersResponse::~SyncDevServersResponse() = default;

void SyncDevServersResponse::validate()
{
}

web::json::value SyncDevServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentIsSet_) {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(current_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool SyncDevServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t SyncDevServersResponse::getCurrent() const
{
    return current_;
}

void SyncDevServersResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool SyncDevServersResponse::currentIsSet() const
{
    return currentIsSet_;
}

void SyncDevServersResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerResponse>& SyncDevServersResponse::getData()
{
    return data_;
}

void SyncDevServersResponse::setData(const std::vector<ServerResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SyncDevServersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SyncDevServersResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t SyncDevServersResponse::getPages() const
{
    return pages_;
}

void SyncDevServersResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool SyncDevServersResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void SyncDevServersResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t SyncDevServersResponse::getSize() const
{
    return size_;
}

void SyncDevServersResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SyncDevServersResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void SyncDevServersResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t SyncDevServersResponse::getTotal() const
{
    return total_;
}

void SyncDevServersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool SyncDevServersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void SyncDevServersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


