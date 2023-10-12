

#include "huaweicloud/drs/v3/model/ObjectCompareResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ObjectCompareResult::ObjectCompareResult()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    objectCompareOverviewIsSet_ = false;
    objectCompareDetailsIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ObjectCompareResult::~ObjectCompareResult() = default;

void ObjectCompareResult::validate()
{
}

web::json::value ObjectCompareResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(objectCompareOverviewIsSet_) {
        val[utility::conversions::to_string_t("object_compare_overview")] = ModelBase::toJson(objectCompareOverview_);
    }
    if(objectCompareDetailsIsSet_) {
        val[utility::conversions::to_string_t("object_compare_details")] = ModelBase::toJson(objectCompareDetails_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ObjectCompareResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_compare_overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_compare_overview"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectCompareResultOverview> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectCompareOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_compare_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_compare_details"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<ObjectCompareResultDetails>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectCompareDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string ObjectCompareResult::getCompareTaskId() const
{
    return compareTaskId_;
}

void ObjectCompareResult::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool ObjectCompareResult::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void ObjectCompareResult::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::vector<ObjectCompareResultOverview>& ObjectCompareResult::getObjectCompareOverview()
{
    return objectCompareOverview_;
}

void ObjectCompareResult::setObjectCompareOverview(const std::vector<ObjectCompareResultOverview>& value)
{
    objectCompareOverview_ = value;
    objectCompareOverviewIsSet_ = true;
}

bool ObjectCompareResult::objectCompareOverviewIsSet() const
{
    return objectCompareOverviewIsSet_;
}

void ObjectCompareResult::unsetobjectCompareOverview()
{
    objectCompareOverviewIsSet_ = false;
}

std::map<std::string, std::vector<ObjectCompareResultDetails>>& ObjectCompareResult::getObjectCompareDetails()
{
    return objectCompareDetails_;
}

void ObjectCompareResult::setObjectCompareDetails(const std::map<std::string, std::vector<ObjectCompareResultDetails>>& value)
{
    objectCompareDetails_ = value;
    objectCompareDetailsIsSet_ = true;
}

bool ObjectCompareResult::objectCompareDetailsIsSet() const
{
    return objectCompareDetailsIsSet_;
}

void ObjectCompareResult::unsetobjectCompareDetails()
{
    objectCompareDetailsIsSet_ = false;
}

std::string ObjectCompareResult::getErrorCode() const
{
    return errorCode_;
}

void ObjectCompareResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ObjectCompareResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ObjectCompareResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ObjectCompareResult::getErrorMsg() const
{
    return errorMsg_;
}

void ObjectCompareResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ObjectCompareResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ObjectCompareResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


