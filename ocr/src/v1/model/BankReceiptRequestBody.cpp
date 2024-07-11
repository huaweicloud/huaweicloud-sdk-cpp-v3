

#include "huaweicloud/ocr/v1/model/BankReceiptRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BankReceiptRequestBody::BankReceiptRequestBody()
{
    data_ = "";
    dataIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
}

BankReceiptRequestBody::~BankReceiptRequestBody() = default;

void BankReceiptRequestBody::validate()
{
}

web::json::value BankReceiptRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }

    return val;
}
bool BankReceiptRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    return ok;
}


std::string BankReceiptRequestBody::getData() const
{
    return data_;
}

void BankReceiptRequestBody::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BankReceiptRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void BankReceiptRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

std::string BankReceiptRequestBody::getUrl() const
{
    return url_;
}

void BankReceiptRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool BankReceiptRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void BankReceiptRequestBody::unseturl()
{
    urlIsSet_ = false;
}

int32_t BankReceiptRequestBody::getPageNum() const
{
    return pageNum_;
}

void BankReceiptRequestBody::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool BankReceiptRequestBody::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void BankReceiptRequestBody::unsetpageNum()
{
    pageNumIsSet_ = false;
}

}
}
}
}
}


