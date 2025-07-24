

#include "huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlertGroupsByConditionRequestBody::ListAlertGroupsByConditionRequestBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupIdsIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    userIdsIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ListAlertGroupsByConditionRequestBody::~ListAlertGroupsByConditionRequestBody() = default;

void ListAlertGroupsByConditionRequestBody::validate()
{
}

web::json::value ListAlertGroupsByConditionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupIdsIsSet_) {
        val[utility::conversions::to_string_t("group_ids")] = ModelBase::toJson(groupIds_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }
    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("userIds")] = ModelBase::toJson(userIds_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ListAlertGroupsByConditionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ListAlertGroupsByConditionRequestBody::getGroupId() const
{
    return groupId_;
}

void ListAlertGroupsByConditionRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<std::string>& ListAlertGroupsByConditionRequestBody::getGroupIds()
{
    return groupIds_;
}

void ListAlertGroupsByConditionRequestBody::setGroupIds(const std::vector<std::string>& value)
{
    groupIds_ = value;
    groupIdsIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::groupIdsIsSet() const
{
    return groupIdsIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetgroupIds()
{
    groupIdsIsSet_ = false;
}

int32_t ListAlertGroupsByConditionRequestBody::getPageNum() const
{
    return pageNum_;
}

void ListAlertGroupsByConditionRequestBody::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListAlertGroupsByConditionRequestBody::getPageSize() const
{
    return pageSize_;
}

void ListAlertGroupsByConditionRequestBody::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListAlertGroupsByConditionRequestBody::getTestServiceId() const
{
    return testServiceId_;
}

void ListAlertGroupsByConditionRequestBody::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

std::vector<std::string>& ListAlertGroupsByConditionRequestBody::getUserIds()
{
    return userIds_;
}

void ListAlertGroupsByConditionRequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::string ListAlertGroupsByConditionRequestBody::getUserName() const
{
    return userName_;
}

void ListAlertGroupsByConditionRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListAlertGroupsByConditionRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListAlertGroupsByConditionRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


