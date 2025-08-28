

#include "huaweicloud/metastudio/v1/model/UpdateDocumentSegmentReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentSegmentReq::UpdateDocumentSegmentReq()
{
    documentId_ = "";
    documentIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    textIndex_ = 0;
    textIndexIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
}

UpdateDocumentSegmentReq::~UpdateDocumentSegmentReq() = default;

void UpdateDocumentSegmentReq::validate()
{
}

web::json::value UpdateDocumentSegmentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(textIndexIsSet_) {
        val[utility::conversions::to_string_t("text_index")] = ModelBase::toJson(textIndex_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool UpdateDocumentSegmentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("document_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    return ok;
}


std::string UpdateDocumentSegmentReq::getDocumentId() const
{
    return documentId_;
}

void UpdateDocumentSegmentReq::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool UpdateDocumentSegmentReq::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void UpdateDocumentSegmentReq::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

std::string UpdateDocumentSegmentReq::getId() const
{
    return id_;
}

void UpdateDocumentSegmentReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateDocumentSegmentReq::idIsSet() const
{
    return idIsSet_;
}

void UpdateDocumentSegmentReq::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateDocumentSegmentReq::getTextIndex() const
{
    return textIndex_;
}

void UpdateDocumentSegmentReq::setTextIndex(int32_t value)
{
    textIndex_ = value;
    textIndexIsSet_ = true;
}

bool UpdateDocumentSegmentReq::textIndexIsSet() const
{
    return textIndexIsSet_;
}

void UpdateDocumentSegmentReq::unsettextIndex()
{
    textIndexIsSet_ = false;
}

std::string UpdateDocumentSegmentReq::getText() const
{
    return text_;
}

void UpdateDocumentSegmentReq::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool UpdateDocumentSegmentReq::textIsSet() const
{
    return textIsSet_;
}

void UpdateDocumentSegmentReq::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


