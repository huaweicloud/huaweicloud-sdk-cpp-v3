

#include "huaweicloud/codeartsartifact/v2/model/ListMavenUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListMavenUserRequest::ListMavenUserRequest()
{
    userName_ = "";
    userNameIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListMavenUserRequest::~ListMavenUserRequest() = default;

void ListMavenUserRequest::validate()
{
}

web::json::value ListMavenUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListMavenUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    return ok;
}


std::string ListMavenUserRequest::getUserName() const
{
    return userName_;
}

void ListMavenUserRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListMavenUserRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListMavenUserRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ListMavenUserRequest::getPageNo() const
{
    return pageNo_;
}

void ListMavenUserRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListMavenUserRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListMavenUserRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListMavenUserRequest::getPageSize() const
{
    return pageSize_;
}

void ListMavenUserRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListMavenUserRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListMavenUserRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


