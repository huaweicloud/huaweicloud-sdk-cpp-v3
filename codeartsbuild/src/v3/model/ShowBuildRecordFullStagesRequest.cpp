

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFullStagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordFullStagesRequest::ShowBuildRecordFullStagesRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    cascade_ = false;
    cascadeIsSet_ = false;
}

ShowBuildRecordFullStagesRequest::~ShowBuildRecordFullStagesRequest() = default;

void ShowBuildRecordFullStagesRequest::validate()
{
}

web::json::value ShowBuildRecordFullStagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(cascadeIsSet_) {
        val[utility::conversions::to_string_t("cascade")] = ModelBase::toJson(cascade_);
    }

    return val;
}
bool ShowBuildRecordFullStagesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cascade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cascade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCascade(refVal);
        }
    }
    return ok;
}


std::string ShowBuildRecordFullStagesRequest::getRecordId() const
{
    return recordId_;
}

void ShowBuildRecordFullStagesRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowBuildRecordFullStagesRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowBuildRecordFullStagesRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

bool ShowBuildRecordFullStagesRequest::isCascade() const
{
    return cascade_;
}

void ShowBuildRecordFullStagesRequest::setCascade(bool value)
{
    cascade_ = value;
    cascadeIsSet_ = true;
}

bool ShowBuildRecordFullStagesRequest::cascadeIsSet() const
{
    return cascadeIsSet_;
}

void ShowBuildRecordFullStagesRequest::unsetcascade()
{
    cascadeIsSet_ = false;
}

}
}
}
}
}


