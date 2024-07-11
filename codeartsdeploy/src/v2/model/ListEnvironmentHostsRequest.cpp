

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentHostsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentHostsRequest::ListEnvironmentHostsRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    keyField_ = "";
    keyFieldIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListEnvironmentHostsRequest::~ListEnvironmentHostsRequest() = default;

void ListEnvironmentHostsRequest::validate()
{
}

web::json::value ListEnvironmentHostsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(keyFieldIsSet_) {
        val[utility::conversions::to_string_t("key_field")] = ModelBase::toJson(keyField_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListEnvironmentHostsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("as_proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("as_proxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsProxy(refVal);
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


std::string ListEnvironmentHostsRequest::getApplicationId() const
{
    return applicationId_;
}

void ListEnvironmentHostsRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListEnvironmentHostsRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListEnvironmentHostsRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ListEnvironmentHostsRequest::getEnvironmentId() const
{
    return environmentId_;
}

void ListEnvironmentHostsRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool ListEnvironmentHostsRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void ListEnvironmentHostsRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::string ListEnvironmentHostsRequest::getKeyField() const
{
    return keyField_;
}

void ListEnvironmentHostsRequest::setKeyField(const std::string& value)
{
    keyField_ = value;
    keyFieldIsSet_ = true;
}

bool ListEnvironmentHostsRequest::keyFieldIsSet() const
{
    return keyFieldIsSet_;
}

void ListEnvironmentHostsRequest::unsetkeyField()
{
    keyFieldIsSet_ = false;
}

bool ListEnvironmentHostsRequest::isAsProxy() const
{
    return asProxy_;
}

void ListEnvironmentHostsRequest::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool ListEnvironmentHostsRequest::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void ListEnvironmentHostsRequest::unsetasProxy()
{
    asProxyIsSet_ = false;
}

int32_t ListEnvironmentHostsRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListEnvironmentHostsRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListEnvironmentHostsRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListEnvironmentHostsRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListEnvironmentHostsRequest::getPageSize() const
{
    return pageSize_;
}

void ListEnvironmentHostsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListEnvironmentHostsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListEnvironmentHostsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


