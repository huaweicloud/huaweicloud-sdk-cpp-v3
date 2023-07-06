

#include "huaweicloud/drs/v3/model/CreateDataLevelCompareReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataLevelCompareReq::CreateDataLevelCompareReq()
{
    conflictPolicy_ = "";
    conflictPolicyIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    compareMode_ = "";
    compareModeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    compareObjectInfosIsSet_ = false;
    compareObjectInfosWithTokenIsSet_ = false;
}

CreateDataLevelCompareReq::~CreateDataLevelCompareReq() = default;

void CreateDataLevelCompareReq::validate()
{
}

web::json::value CreateDataLevelCompareReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conflictPolicyIsSet_) {
        val[utility::conversions::to_string_t("conflict_policy")] = ModelBase::toJson(conflictPolicy_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(compareModeIsSet_) {
        val[utility::conversions::to_string_t("compare_mode")] = ModelBase::toJson(compareMode_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(compareObjectInfosIsSet_) {
        val[utility::conversions::to_string_t("compare_object_infos")] = ModelBase::toJson(compareObjectInfos_);
    }
    if(compareObjectInfosWithTokenIsSet_) {
        val[utility::conversions::to_string_t("compare_object_infos_with_token")] = ModelBase::toJson(compareObjectInfosWithToken_);
    }

    return val;
}

bool CreateDataLevelCompareReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conflict_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_object_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_object_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareObjectInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_object_infos_with_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_object_infos_with_token"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareObjectInfoWithToken> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareObjectInfosWithToken(refVal);
        }
    }
    return ok;
}

std::string CreateDataLevelCompareReq::getConflictPolicy() const
{
    return conflictPolicy_;
}

void CreateDataLevelCompareReq::setConflictPolicy(const std::string& value)
{
    conflictPolicy_ = value;
    conflictPolicyIsSet_ = true;
}

bool CreateDataLevelCompareReq::conflictPolicyIsSet() const
{
    return conflictPolicyIsSet_;
}

void CreateDataLevelCompareReq::unsetconflictPolicy()
{
    conflictPolicyIsSet_ = false;
}

std::string CreateDataLevelCompareReq::getCompareType() const
{
    return compareType_;
}

void CreateDataLevelCompareReq::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool CreateDataLevelCompareReq::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void CreateDataLevelCompareReq::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string CreateDataLevelCompareReq::getCompareMode() const
{
    return compareMode_;
}

void CreateDataLevelCompareReq::setCompareMode(const std::string& value)
{
    compareMode_ = value;
    compareModeIsSet_ = true;
}

bool CreateDataLevelCompareReq::compareModeIsSet() const
{
    return compareModeIsSet_;
}

void CreateDataLevelCompareReq::unsetcompareMode()
{
    compareModeIsSet_ = false;
}

std::string CreateDataLevelCompareReq::getStartTime() const
{
    return startTime_;
}

void CreateDataLevelCompareReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateDataLevelCompareReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateDataLevelCompareReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::vector<CompareObjectInfo>& CreateDataLevelCompareReq::getCompareObjectInfos()
{
    return compareObjectInfos_;
}

void CreateDataLevelCompareReq::setCompareObjectInfos(const std::vector<CompareObjectInfo>& value)
{
    compareObjectInfos_ = value;
    compareObjectInfosIsSet_ = true;
}

bool CreateDataLevelCompareReq::compareObjectInfosIsSet() const
{
    return compareObjectInfosIsSet_;
}

void CreateDataLevelCompareReq::unsetcompareObjectInfos()
{
    compareObjectInfosIsSet_ = false;
}

std::vector<CompareObjectInfoWithToken>& CreateDataLevelCompareReq::getCompareObjectInfosWithToken()
{
    return compareObjectInfosWithToken_;
}

void CreateDataLevelCompareReq::setCompareObjectInfosWithToken(const std::vector<CompareObjectInfoWithToken>& value)
{
    compareObjectInfosWithToken_ = value;
    compareObjectInfosWithTokenIsSet_ = true;
}

bool CreateDataLevelCompareReq::compareObjectInfosWithTokenIsSet() const
{
    return compareObjectInfosWithTokenIsSet_;
}

void CreateDataLevelCompareReq::unsetcompareObjectInfosWithToken()
{
    compareObjectInfosWithTokenIsSet_ = false;
}

}
}
}
}
}


