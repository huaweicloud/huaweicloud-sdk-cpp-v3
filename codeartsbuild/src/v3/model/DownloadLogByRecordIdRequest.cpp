

#include "huaweicloud/codeartsbuild/v3/model/DownloadLogByRecordIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadLogByRecordIdRequest::DownloadLogByRecordIdRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
}

DownloadLogByRecordIdRequest::~DownloadLogByRecordIdRequest() = default;

void DownloadLogByRecordIdRequest::validate()
{
}

web::json::value DownloadLogByRecordIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }

    return val;
}
bool DownloadLogByRecordIdRequest::fromJson(const web::json::value& val)
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


std::string DownloadLogByRecordIdRequest::getRecordId() const
{
    return recordId_;
}

void DownloadLogByRecordIdRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool DownloadLogByRecordIdRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void DownloadLogByRecordIdRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

}
}
}
}
}


