

#include "huaweicloud/codeartsbuild/v3/model/BuildRecord_build_record_type.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildRecord_build_record_type::BuildRecord_build_record_type()
{
    rerun_ = false;
    rerunIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    isRerun_ = false;
    isRerunIsSet_ = false;
}

BuildRecord_build_record_type::~BuildRecord_build_record_type() = default;

void BuildRecord_build_record_type::validate()
{
}

web::json::value BuildRecord_build_record_type::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rerunIsSet_) {
        val[utility::conversions::to_string_t("rerun")] = ModelBase::toJson(rerun_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("record_type")] = ModelBase::toJson(recordType_);
    }
    if(isRerunIsSet_) {
        val[utility::conversions::to_string_t("is_rerun")] = ModelBase::toJson(isRerun_);
    }

    return val;
}
bool BuildRecord_build_record_type::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rerun"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rerun"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRerun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_rerun"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_rerun"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRerun(refVal);
        }
    }
    return ok;
}


bool BuildRecord_build_record_type::isRerun() const
{
    return rerun_;
}

void BuildRecord_build_record_type::setRerun(bool value)
{
    rerun_ = value;
    rerunIsSet_ = true;
}

bool BuildRecord_build_record_type::rerunIsSet() const
{
    return rerunIsSet_;
}

void BuildRecord_build_record_type::unsetrerun()
{
    rerunIsSet_ = false;
}

std::string BuildRecord_build_record_type::getTriggerType() const
{
    return triggerType_;
}

void BuildRecord_build_record_type::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool BuildRecord_build_record_type::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void BuildRecord_build_record_type::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::string BuildRecord_build_record_type::getRecordType() const
{
    return recordType_;
}

void BuildRecord_build_record_type::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool BuildRecord_build_record_type::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void BuildRecord_build_record_type::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

bool BuildRecord_build_record_type::isIsRerun() const
{
    return isRerun_;
}

void BuildRecord_build_record_type::setIsRerun(bool value)
{
    isRerun_ = value;
    isRerunIsSet_ = true;
}

bool BuildRecord_build_record_type::isRerunIsSet() const
{
    return isRerunIsSet_;
}

void BuildRecord_build_record_type::unsetisRerun()
{
    isRerunIsSet_ = false;
}

}
}
}
}
}


