

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeLibraryResponse::CreateKnowledgeLibraryResponse()
{
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateKnowledgeLibraryResponse::~CreateKnowledgeLibraryResponse() = default;

void CreateKnowledgeLibraryResponse::validate()
{
}

web::json::value CreateKnowledgeLibraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateKnowledgeLibraryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
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


std::string CreateKnowledgeLibraryResponse::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void CreateKnowledgeLibraryResponse::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool CreateKnowledgeLibraryResponse::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void CreateKnowledgeLibraryResponse::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string CreateKnowledgeLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateKnowledgeLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateKnowledgeLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateKnowledgeLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


