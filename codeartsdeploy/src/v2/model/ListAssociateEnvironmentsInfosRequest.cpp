

#include "huaweicloud/codeartsdeploy/v2/model/ListAssociateEnvironmentsInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAssociateEnvironmentsInfosRequest::ListAssociateEnvironmentsInfosRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListAssociateEnvironmentsInfosRequest::~ListAssociateEnvironmentsInfosRequest() = default;

void ListAssociateEnvironmentsInfosRequest::validate()
{
}

web::json::value ListAssociateEnvironmentsInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListAssociateEnvironmentsInfosRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
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


std::string ListAssociateEnvironmentsInfosRequest::getGroupId() const
{
    return groupId_;
}

void ListAssociateEnvironmentsInfosRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListAssociateEnvironmentsInfosRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListAssociateEnvironmentsInfosRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListAssociateEnvironmentsInfosRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListAssociateEnvironmentsInfosRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListAssociateEnvironmentsInfosRequest::getPageSize() const
{
    return pageSize_;
}

void ListAssociateEnvironmentsInfosRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListAssociateEnvironmentsInfosRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


