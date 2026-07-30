

#include "huaweicloud/modelarts/v1/model/BatchDevServersActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDevServersActionResponse::BatchDevServersActionResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDevServersActionResponse::~BatchDevServersActionResponse() = default;

void BatchDevServersActionResponse::validate()
{
}

web::json::value BatchDevServersActionResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDevServersActionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t BatchDevServersActionResponse::getCurrent() const
{
    return current_;
}

void BatchDevServersActionResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool BatchDevServersActionResponse::currentIsSet() const
{
    return currentIsSet_;
}

void BatchDevServersActionResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerResponse>& BatchDevServersActionResponse::getData()
{
    return data_;
}

void BatchDevServersActionResponse::setData(const std::vector<ServerResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchDevServersActionResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchDevServersActionResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t BatchDevServersActionResponse::getPages() const
{
    return pages_;
}

void BatchDevServersActionResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BatchDevServersActionResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void BatchDevServersActionResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BatchDevServersActionResponse::getSize() const
{
    return size_;
}

void BatchDevServersActionResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchDevServersActionResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchDevServersActionResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t BatchDevServersActionResponse::getTotal() const
{
    return total_;
}

void BatchDevServersActionResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchDevServersActionResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BatchDevServersActionResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string BatchDevServersActionResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDevServersActionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDevServersActionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDevServersActionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


