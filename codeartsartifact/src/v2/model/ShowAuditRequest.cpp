

#include "huaweicloud/codeartsartifact/v2/model/ShowAuditRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowAuditRequest::ShowAuditRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    module_ = "";
    moduleIsSet_ = false;
    repo_ = "";
    repoIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ShowAuditRequest::~ShowAuditRequest() = default;

void ShowAuditRequest::validate()
{
}

web::json::value ShowAuditRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(moduleIsSet_) {
        val[utility::conversions::to_string_t("module")] = ModelBase::toJson(module_);
    }
    if(repoIsSet_) {
        val[utility::conversions::to_string_t("repo")] = ModelBase::toJson(repo_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ShowAuditRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string ShowAuditRequest::getTenantId() const
{
    return tenantId_;
}

void ShowAuditRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowAuditRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowAuditRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowAuditRequest::getModule() const
{
    return module_;
}

void ShowAuditRequest::setModule(const std::string& value)
{
    module_ = value;
    moduleIsSet_ = true;
}

bool ShowAuditRequest::moduleIsSet() const
{
    return moduleIsSet_;
}

void ShowAuditRequest::unsetmodule()
{
    moduleIsSet_ = false;
}

std::string ShowAuditRequest::getRepo() const
{
    return repo_;
}

void ShowAuditRequest::setRepo(const std::string& value)
{
    repo_ = value;
    repoIsSet_ = true;
}

bool ShowAuditRequest::repoIsSet() const
{
    return repoIsSet_;
}

void ShowAuditRequest::unsetrepo()
{
    repoIsSet_ = false;
}

std::string ShowAuditRequest::getUserId() const
{
    return userId_;
}

void ShowAuditRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowAuditRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowAuditRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowAuditRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ShowAuditRequest::getPageNum() const
{
    return pageNum_;
}

void ShowAuditRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowAuditRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowAuditRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ShowAuditRequest::getPageSize() const
{
    return pageSize_;
}

void ShowAuditRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowAuditRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowAuditRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


