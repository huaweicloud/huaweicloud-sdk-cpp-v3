

#include "huaweicloud/metastudio/v1/model/StartDocumentSegmentTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartDocumentSegmentTaskReq::StartDocumentSegmentTaskReq()
{
    documentId_ = "";
    documentIdIsSet_ = false;
}

StartDocumentSegmentTaskReq::~StartDocumentSegmentTaskReq() = default;

void StartDocumentSegmentTaskReq::validate()
{
}

web::json::value StartDocumentSegmentTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(documentIdIsSet_) {
        val[utility::conversions::to_string_t("document_id")] = ModelBase::toJson(documentId_);
    }

    return val;
}
bool StartDocumentSegmentTaskReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StartDocumentSegmentTaskReq::getDocumentId() const
{
    return documentId_;
}

void StartDocumentSegmentTaskReq::setDocumentId(const std::string& value)
{
    documentId_ = value;
    documentIdIsSet_ = true;
}

bool StartDocumentSegmentTaskReq::documentIdIsSet() const
{
    return documentIdIsSet_;
}

void StartDocumentSegmentTaskReq::unsetdocumentId()
{
    documentIdIsSet_ = false;
}

}
}
}
}
}


