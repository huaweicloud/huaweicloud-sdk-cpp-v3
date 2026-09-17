

#include "huaweicloud/projectman/v4/model/ShowBaselineSnapshotsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBaselineSnapshotsResponse::ShowBaselineSnapshotsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowBaselineSnapshotsResponse::~ShowBaselineSnapshotsResponse() = default;

void ShowBaselineSnapshotsResponse::validate()
{
}

web::json::value ShowBaselineSnapshotsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowBaselineSnapshotsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<FeatureSetOpenApiVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowBaselineSnapshotsResponse::getStatus() const
{
    return status_;
}

void ShowBaselineSnapshotsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBaselineSnapshotsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBaselineSnapshotsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowBaselineSnapshotsResponse::getMessage() const
{
    return message_;
}

void ShowBaselineSnapshotsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowBaselineSnapshotsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowBaselineSnapshotsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<FeatureSetOpenApiVO>& ShowBaselineSnapshotsResponse::getResult()
{
    return result_;
}

void ShowBaselineSnapshotsResponse::setResult(const std::vector<FeatureSetOpenApiVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBaselineSnapshotsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBaselineSnapshotsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


