

#include "huaweicloud/codeartsartifact/v2/model/SearchByChecksumResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SearchByChecksumResponse::SearchByChecksumResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

SearchByChecksumResponse::~SearchByChecksumResponse() = default;

void SearchByChecksumResponse::validate()
{
}

web::json::value SearchByChecksumResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool SearchByChecksumResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ArtifactSearchResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string SearchByChecksumResponse::getStatus() const
{
    return status_;
}

void SearchByChecksumResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchByChecksumResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SearchByChecksumResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SearchByChecksumResponse::getTraceId() const
{
    return traceId_;
}

void SearchByChecksumResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool SearchByChecksumResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void SearchByChecksumResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<ArtifactSearchResult>& SearchByChecksumResponse::getResult()
{
    return result_;
}

void SearchByChecksumResponse::setResult(const std::vector<ArtifactSearchResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SearchByChecksumResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SearchByChecksumResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


