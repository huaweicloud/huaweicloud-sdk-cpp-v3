

#include "huaweicloud/drs/v3/model/CreateDataLevelTableCompareJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataLevelTableCompareJobReq::CreateDataLevelTableCompareJobReq()
{
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    compareMode_ = "";
    compareModeIsSet_ = false;
    compareObjectIsSet_ = false;
    optionsIsSet_ = false;
    compareObjectWithTokenIsSet_ = false;
    compareTaskNum_ = 0;
    compareTaskNumIsSet_ = false;
    compareTransformationInfosIsSet_ = false;
    proportionValue_ = 0.0;
    proportionValueIsSet_ = false;
}

CreateDataLevelTableCompareJobReq::~CreateDataLevelTableCompareJobReq() = default;

void CreateDataLevelTableCompareJobReq::validate()
{
}

web::json::value CreateDataLevelTableCompareJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(compareModeIsSet_) {
        val[utility::conversions::to_string_t("compare_mode")] = ModelBase::toJson(compareMode_);
    }
    if(compareObjectIsSet_) {
        val[utility::conversions::to_string_t("compare_object")] = ModelBase::toJson(compareObject_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(compareObjectWithTokenIsSet_) {
        val[utility::conversions::to_string_t("compare_object_with_token")] = ModelBase::toJson(compareObjectWithToken_);
    }
    if(compareTaskNumIsSet_) {
        val[utility::conversions::to_string_t("compare_task_num")] = ModelBase::toJson(compareTaskNum_);
    }
    if(compareTransformationInfosIsSet_) {
        val[utility::conversions::to_string_t("compare_transformation_infos")] = ModelBase::toJson(compareTransformationInfos_);
    }
    if(proportionValueIsSet_) {
        val[utility::conversions::to_string_t("proportion_value")] = ModelBase::toJson(proportionValue_);
    }

    return val;
}
bool CreateDataLevelTableCompareJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compare_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_object"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareObjectInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_object_with_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_object_with_token"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareObjectInfoWithToken> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareObjectWithToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_transformation_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_transformation_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AddDataTransformationReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTransformationInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proportion_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proportion_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProportionValue(refVal);
        }
    }
    return ok;
}


std::string CreateDataLevelTableCompareJobReq::getType() const
{
    return type_;
}

void CreateDataLevelTableCompareJobReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::typeIsSet() const
{
    return typeIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateDataLevelTableCompareJobReq::getStartTime() const
{
    return startTime_;
}

void CreateDataLevelTableCompareJobReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateDataLevelTableCompareJobReq::getCompareMode() const
{
    return compareMode_;
}

void CreateDataLevelTableCompareJobReq::setCompareMode(const std::string& value)
{
    compareMode_ = value;
    compareModeIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::compareModeIsSet() const
{
    return compareModeIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetcompareMode()
{
    compareModeIsSet_ = false;
}

std::vector<CompareObjectInfo>& CreateDataLevelTableCompareJobReq::getCompareObject()
{
    return compareObject_;
}

void CreateDataLevelTableCompareJobReq::setCompareObject(const std::vector<CompareObjectInfo>& value)
{
    compareObject_ = value;
    compareObjectIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::compareObjectIsSet() const
{
    return compareObjectIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetcompareObject()
{
    compareObjectIsSet_ = false;
}

std::map<std::string, std::string>& CreateDataLevelTableCompareJobReq::getOptions()
{
    return options_;
}

void CreateDataLevelTableCompareJobReq::setOptions(const std::map<std::string, std::string>& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::optionsIsSet() const
{
    return optionsIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetoptions()
{
    optionsIsSet_ = false;
}

std::vector<CompareObjectInfoWithToken>& CreateDataLevelTableCompareJobReq::getCompareObjectWithToken()
{
    return compareObjectWithToken_;
}

void CreateDataLevelTableCompareJobReq::setCompareObjectWithToken(const std::vector<CompareObjectInfoWithToken>& value)
{
    compareObjectWithToken_ = value;
    compareObjectWithTokenIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::compareObjectWithTokenIsSet() const
{
    return compareObjectWithTokenIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetcompareObjectWithToken()
{
    compareObjectWithTokenIsSet_ = false;
}

int32_t CreateDataLevelTableCompareJobReq::getCompareTaskNum() const
{
    return compareTaskNum_;
}

void CreateDataLevelTableCompareJobReq::setCompareTaskNum(int32_t value)
{
    compareTaskNum_ = value;
    compareTaskNumIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::compareTaskNumIsSet() const
{
    return compareTaskNumIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetcompareTaskNum()
{
    compareTaskNumIsSet_ = false;
}

std::vector<AddDataTransformationReq>& CreateDataLevelTableCompareJobReq::getCompareTransformationInfos()
{
    return compareTransformationInfos_;
}

void CreateDataLevelTableCompareJobReq::setCompareTransformationInfos(const std::vector<AddDataTransformationReq>& value)
{
    compareTransformationInfos_ = value;
    compareTransformationInfosIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::compareTransformationInfosIsSet() const
{
    return compareTransformationInfosIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetcompareTransformationInfos()
{
    compareTransformationInfosIsSet_ = false;
}

double CreateDataLevelTableCompareJobReq::getProportionValue() const
{
    return proportionValue_;
}

void CreateDataLevelTableCompareJobReq::setProportionValue(double value)
{
    proportionValue_ = value;
    proportionValueIsSet_ = true;
}

bool CreateDataLevelTableCompareJobReq::proportionValueIsSet() const
{
    return proportionValueIsSet_;
}

void CreateDataLevelTableCompareJobReq::unsetproportionValue()
{
    proportionValueIsSet_ = false;
}

}
}
}
}
}


