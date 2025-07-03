

#include "huaweicloud/rds/v3/model/ShowPrecheckResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowPrecheckResultResponse::ShowPrecheckResultResponse()
{
    resultCode_ = 0;
    resultCodeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    display_ = false;
    displayIsSet_ = false;
    instanceStatusCheckListIsSet_ = false;
    dbUpgradePrecheckIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPrecheckResultResponse::~ShowPrecheckResultResponse() = default;

void ShowPrecheckResultResponse::validate()
{
}

web::json::value ShowPrecheckResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(displayIsSet_) {
        val[utility::conversions::to_string_t("display")] = ModelBase::toJson(display_);
    }
    if(instanceStatusCheckListIsSet_) {
        val[utility::conversions::to_string_t("instance_status_check_list")] = ModelBase::toJson(instanceStatusCheckList_);
    }
    if(dbUpgradePrecheckIsSet_) {
        val[utility::conversions::to_string_t("db_upgrade_precheck")] = ModelBase::toJson(dbUpgradePrecheck_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPrecheckResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_status_check_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status_check_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatusCheckList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_upgrade_precheck"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_upgrade_precheck"));
        if(!fieldValue.is_null())
        {
            DBUpgradePrecheck refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUpgradePrecheck(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
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


int32_t ShowPrecheckResultResponse::getResultCode() const
{
    return resultCode_;
}

void ShowPrecheckResultResponse::setResultCode(int32_t value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool ShowPrecheckResultResponse::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void ShowPrecheckResultResponse::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string ShowPrecheckResultResponse::getStatus() const
{
    return status_;
}

void ShowPrecheckResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPrecheckResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPrecheckResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPrecheckResultResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowPrecheckResultResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowPrecheckResultResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowPrecheckResultResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowPrecheckResultResponse::isDisplay() const
{
    return display_;
}

void ShowPrecheckResultResponse::setDisplay(bool value)
{
    display_ = value;
    displayIsSet_ = true;
}

bool ShowPrecheckResultResponse::displayIsSet() const
{
    return displayIsSet_;
}

void ShowPrecheckResultResponse::unsetdisplay()
{
    displayIsSet_ = false;
}

std::vector<std::string>& ShowPrecheckResultResponse::getInstanceStatusCheckList()
{
    return instanceStatusCheckList_;
}

void ShowPrecheckResultResponse::setInstanceStatusCheckList(const std::vector<std::string>& value)
{
    instanceStatusCheckList_ = value;
    instanceStatusCheckListIsSet_ = true;
}

bool ShowPrecheckResultResponse::instanceStatusCheckListIsSet() const
{
    return instanceStatusCheckListIsSet_;
}

void ShowPrecheckResultResponse::unsetinstanceStatusCheckList()
{
    instanceStatusCheckListIsSet_ = false;
}

DBUpgradePrecheck ShowPrecheckResultResponse::getDbUpgradePrecheck() const
{
    return dbUpgradePrecheck_;
}

void ShowPrecheckResultResponse::setDbUpgradePrecheck(const DBUpgradePrecheck& value)
{
    dbUpgradePrecheck_ = value;
    dbUpgradePrecheckIsSet_ = true;
}

bool ShowPrecheckResultResponse::dbUpgradePrecheckIsSet() const
{
    return dbUpgradePrecheckIsSet_;
}

void ShowPrecheckResultResponse::unsetdbUpgradePrecheck()
{
    dbUpgradePrecheckIsSet_ = false;
}

std::string ShowPrecheckResultResponse::getDownloadLink() const
{
    return downloadLink_;
}

void ShowPrecheckResultResponse::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool ShowPrecheckResultResponse::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void ShowPrecheckResultResponse::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

std::string ShowPrecheckResultResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPrecheckResultResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPrecheckResultResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPrecheckResultResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


