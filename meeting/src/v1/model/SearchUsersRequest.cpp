

#include "huaweicloud/meeting/v1/model/SearchUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchUsersRequest::SearchUsersRequest()
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
    sortField_ = "";
    sortFieldIsSet_ = false;
    isAsc_ = false;
    isAscIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    enableSubDept_ = false;
    enableSubDeptIsSet_ = false;
    adminType_ = 0;
    adminTypeIsSet_ = false;
    enableRoom_ = false;
    enableRoomIsSet_ = false;
    userTypeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    containsUnActive_ = false;
    containsUnActiveIsSet_ = false;
}

SearchUsersRequest::~SearchUsersRequest() = default;

void SearchUsersRequest::validate()
{
}

web::json::value SearchUsersRequest::toJson() const
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
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sortField")] = ModelBase::toJson(sortField_);
    }
    if(isAscIsSet_) {
        val[utility::conversions::to_string_t("isAsc")] = ModelBase::toJson(isAsc_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(enableSubDeptIsSet_) {
        val[utility::conversions::to_string_t("enableSubDept")] = ModelBase::toJson(enableSubDept_);
    }
    if(adminTypeIsSet_) {
        val[utility::conversions::to_string_t("adminType")] = ModelBase::toJson(adminType_);
    }
    if(enableRoomIsSet_) {
        val[utility::conversions::to_string_t("enableRoom")] = ModelBase::toJson(enableRoom_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("userType")] = ModelBase::toJson(userType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(containsUnActiveIsSet_) {
        val[utility::conversions::to_string_t("containsUnActive")] = ModelBase::toJson(containsUnActive_);
    }

    return val;
}
bool SearchUsersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sortField"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortField"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAsc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAsc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAsc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("adminType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableRoom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableRoom"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableRoom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userType"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containsUnActive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containsUnActive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainsUnActive(refVal);
        }
    }
    return ok;
}


std::string SearchUsersRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchUsersRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchUsersRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchUsersRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchUsersRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchUsersRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchUsersRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchUsersRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchUsersRequest::getOffset() const
{
    return offset_;
}

void SearchUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchUsersRequest::getLimit() const
{
    return limit_;
}

void SearchUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchUsersRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchUsersRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchUsersRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchUsersRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchUsersRequest::getSortField() const
{
    return sortField_;
}

void SearchUsersRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool SearchUsersRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void SearchUsersRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

bool SearchUsersRequest::isIsAsc() const
{
    return isAsc_;
}

void SearchUsersRequest::setIsAsc(bool value)
{
    isAsc_ = value;
    isAscIsSet_ = true;
}

bool SearchUsersRequest::isAscIsSet() const
{
    return isAscIsSet_;
}

void SearchUsersRequest::unsetisAsc()
{
    isAscIsSet_ = false;
}

std::string SearchUsersRequest::getDeptCode() const
{
    return deptCode_;
}

void SearchUsersRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool SearchUsersRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void SearchUsersRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

bool SearchUsersRequest::isEnableSubDept() const
{
    return enableSubDept_;
}

void SearchUsersRequest::setEnableSubDept(bool value)
{
    enableSubDept_ = value;
    enableSubDeptIsSet_ = true;
}

bool SearchUsersRequest::enableSubDeptIsSet() const
{
    return enableSubDeptIsSet_;
}

void SearchUsersRequest::unsetenableSubDept()
{
    enableSubDeptIsSet_ = false;
}

int32_t SearchUsersRequest::getAdminType() const
{
    return adminType_;
}

void SearchUsersRequest::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool SearchUsersRequest::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void SearchUsersRequest::unsetadminType()
{
    adminTypeIsSet_ = false;
}

bool SearchUsersRequest::isEnableRoom() const
{
    return enableRoom_;
}

void SearchUsersRequest::setEnableRoom(bool value)
{
    enableRoom_ = value;
    enableRoomIsSet_ = true;
}

bool SearchUsersRequest::enableRoomIsSet() const
{
    return enableRoomIsSet_;
}

void SearchUsersRequest::unsetenableRoom()
{
    enableRoomIsSet_ = false;
}

std::vector<int32_t>& SearchUsersRequest::getUserType()
{
    return userType_;
}

void SearchUsersRequest::setUserType(std::vector<int32_t> value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool SearchUsersRequest::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void SearchUsersRequest::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t SearchUsersRequest::getStatus() const
{
    return status_;
}

void SearchUsersRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchUsersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SearchUsersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool SearchUsersRequest::isContainsUnActive() const
{
    return containsUnActive_;
}

void SearchUsersRequest::setContainsUnActive(bool value)
{
    containsUnActive_ = value;
    containsUnActiveIsSet_ = true;
}

bool SearchUsersRequest::containsUnActiveIsSet() const
{
    return containsUnActiveIsSet_;
}

void SearchUsersRequest::unsetcontainsUnActive()
{
    containsUnActiveIsSet_ = false;
}

}
}
}
}
}


