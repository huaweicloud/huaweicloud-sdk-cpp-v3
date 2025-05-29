

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordBuildScriptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordBuildScriptRequest::ShowBuildRecordBuildScriptRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
}

ShowBuildRecordBuildScriptRequest::~ShowBuildRecordBuildScriptRequest() = default;

void ShowBuildRecordBuildScriptRequest::validate()
{
}

web::json::value ShowBuildRecordBuildScriptRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }

    return val;
}
bool ShowBuildRecordBuildScriptRequest::fromJson(const web::json::value& val)
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


std::string ShowBuildRecordBuildScriptRequest::getRecordId() const
{
    return recordId_;
}

void ShowBuildRecordBuildScriptRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowBuildRecordBuildScriptRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowBuildRecordBuildScriptRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

}
}
}
}
}


