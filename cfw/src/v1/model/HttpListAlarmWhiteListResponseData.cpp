

#include "huaweicloud/cfw/v1/model/HttpListAlarmWhiteListResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpListAlarmWhiteListResponseData::HttpListAlarmWhiteListResponseData()
{
    listIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

HttpListAlarmWhiteListResponseData::~HttpListAlarmWhiteListResponseData() = default;

void HttpListAlarmWhiteListResponseData::validate()
{
}

web::json::value HttpListAlarmWhiteListResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool HttpListAlarmWhiteListResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<EipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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
    return ok;
}


std::vector<EipInfo>& HttpListAlarmWhiteListResponseData::getList()
{
    return list_;
}

void HttpListAlarmWhiteListResponseData::setList(const std::vector<EipInfo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool HttpListAlarmWhiteListResponseData::listIsSet() const
{
    return listIsSet_;
}

void HttpListAlarmWhiteListResponseData::unsetlist()
{
    listIsSet_ = false;
}

int32_t HttpListAlarmWhiteListResponseData::getPages() const
{
    return pages_;
}

void HttpListAlarmWhiteListResponseData::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool HttpListAlarmWhiteListResponseData::pagesIsSet() const
{
    return pagesIsSet_;
}

void HttpListAlarmWhiteListResponseData::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t HttpListAlarmWhiteListResponseData::getSize() const
{
    return size_;
}

void HttpListAlarmWhiteListResponseData::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool HttpListAlarmWhiteListResponseData::sizeIsSet() const
{
    return sizeIsSet_;
}

void HttpListAlarmWhiteListResponseData::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


