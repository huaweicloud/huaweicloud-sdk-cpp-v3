

#include "huaweicloud/meeting/v1/model/SearchDevicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchDevicesRequest::SearchDevicesRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    model_ = "";
    modelIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    enableSubDept_ = false;
    enableSubDeptIsSet_ = false;
}

SearchDevicesRequest::~SearchDevicesRequest() = default;

void SearchDevicesRequest::validate()
{
}

web::json::value SearchDevicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(enableSubDeptIsSet_) {
        val[utility::conversions::to_string_t("enableSubDept")] = ModelBase::toJson(enableSubDept_);
    }

    return val;
}
bool SearchDevicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSubDept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSubDept"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSubDept(refVal);
        }
    }
    return ok;
}


std::string SearchDevicesRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchDevicesRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchDevicesRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchDevicesRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchDevicesRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchDevicesRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchDevicesRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchDevicesRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchDevicesRequest::getOffset() const
{
    return offset_;
}

void SearchDevicesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchDevicesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchDevicesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchDevicesRequest::getLimit() const
{
    return limit_;
}

void SearchDevicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchDevicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchDevicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchDevicesRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchDevicesRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchDevicesRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchDevicesRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchDevicesRequest::getModel() const
{
    return model_;
}

void SearchDevicesRequest::setModel(const std::string& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool SearchDevicesRequest::modelIsSet() const
{
    return modelIsSet_;
}

void SearchDevicesRequest::unsetmodel()
{
    modelIsSet_ = false;
}

std::string SearchDevicesRequest::getDeptCode() const
{
    return deptCode_;
}

void SearchDevicesRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool SearchDevicesRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void SearchDevicesRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

bool SearchDevicesRequest::isEnableSubDept() const
{
    return enableSubDept_;
}

void SearchDevicesRequest::setEnableSubDept(bool value)
{
    enableSubDept_ = value;
    enableSubDeptIsSet_ = true;
}

bool SearchDevicesRequest::enableSubDeptIsSet() const
{
    return enableSubDeptIsSet_;
}

void SearchDevicesRequest::unsetenableSubDept()
{
    enableSubDeptIsSet_ = false;
}

}
}
}
}
}


