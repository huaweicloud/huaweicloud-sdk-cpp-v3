

#include "huaweicloud/metastudio/v1/model/CheckRecallKnowledgeLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CheckRecallKnowledgeLibraryResponse::CheckRecallKnowledgeLibraryResponse()
{
    bodyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CheckRecallKnowledgeLibraryResponse::~CheckRecallKnowledgeLibraryResponse() = default;

void CheckRecallKnowledgeLibraryResponse::validate()
{
}

web::json::value CheckRecallKnowledgeLibraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CheckRecallKnowledgeLibraryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RecallKnowledgeLibraryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<RecallKnowledgeLibraryInfo>& CheckRecallKnowledgeLibraryResponse::getBody()
{
    return body_;
}

void CheckRecallKnowledgeLibraryResponse::setBody(const std::vector<RecallKnowledgeLibraryInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckRecallKnowledgeLibraryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckRecallKnowledgeLibraryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string CheckRecallKnowledgeLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void CheckRecallKnowledgeLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CheckRecallKnowledgeLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CheckRecallKnowledgeLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


