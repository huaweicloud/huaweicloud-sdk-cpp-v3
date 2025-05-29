

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordRequest::ShowBuildRecordRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
}

ShowBuildRecordRequest::~ShowBuildRecordRequest() = default;

void ShowBuildRecordRequest::validate()
{
}

web::json::value ShowBuildRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }

    return val;
}
bool ShowBuildRecordRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowBuildRecordRequest::getRecordId() const
{
    return recordId_;
}

void ShowBuildRecordRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowBuildRecordRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowBuildRecordRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

}
}
}
}
}


