

#include "huaweicloud/codeartscheck/v2/model/UpdateDefectRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateDefectRequestBody::UpdateDefectRequestBody()
{
    defectId_ = "";
    defectIdIsSet_ = false;
    defectStatus_ = "";
    defectStatusIsSet_ = false;
    approver_ = "";
    approverIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    ignoreType_ = "";
    ignoreTypeIsSet_ = false;
}

UpdateDefectRequestBody::~UpdateDefectRequestBody() = default;

void UpdateDefectRequestBody::validate()
{
}

web::json::value UpdateDefectRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectIdIsSet_) {
        val[utility::conversions::to_string_t("defect_id")] = ModelBase::toJson(defectId_);
    }
    if(defectStatusIsSet_) {
        val[utility::conversions::to_string_t("defect_status")] = ModelBase::toJson(defectStatus_);
    }
    if(approverIsSet_) {
        val[utility::conversions::to_string_t("approver")] = ModelBase::toJson(approver_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(ignoreTypeIsSet_) {
        val[utility::conversions::to_string_t("ignoreType")] = ModelBase::toJson(ignoreType_);
    }

    return val;
}
bool UpdateDefectRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defect_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignoreType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignoreType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreType(refVal);
        }
    }
    return ok;
}


std::string UpdateDefectRequestBody::getDefectId() const
{
    return defectId_;
}

void UpdateDefectRequestBody::setDefectId(const std::string& value)
{
    defectId_ = value;
    defectIdIsSet_ = true;
}

bool UpdateDefectRequestBody::defectIdIsSet() const
{
    return defectIdIsSet_;
}

void UpdateDefectRequestBody::unsetdefectId()
{
    defectIdIsSet_ = false;
}

std::string UpdateDefectRequestBody::getDefectStatus() const
{
    return defectStatus_;
}

void UpdateDefectRequestBody::setDefectStatus(const std::string& value)
{
    defectStatus_ = value;
    defectStatusIsSet_ = true;
}

bool UpdateDefectRequestBody::defectStatusIsSet() const
{
    return defectStatusIsSet_;
}

void UpdateDefectRequestBody::unsetdefectStatus()
{
    defectStatusIsSet_ = false;
}

std::string UpdateDefectRequestBody::getApprover() const
{
    return approver_;
}

void UpdateDefectRequestBody::setApprover(const std::string& value)
{
    approver_ = value;
    approverIsSet_ = true;
}

bool UpdateDefectRequestBody::approverIsSet() const
{
    return approverIsSet_;
}

void UpdateDefectRequestBody::unsetapprover()
{
    approverIsSet_ = false;
}

std::string UpdateDefectRequestBody::getComment() const
{
    return comment_;
}

void UpdateDefectRequestBody::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateDefectRequestBody::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateDefectRequestBody::unsetcomment()
{
    commentIsSet_ = false;
}

std::string UpdateDefectRequestBody::getIgnoreType() const
{
    return ignoreType_;
}

void UpdateDefectRequestBody::setIgnoreType(const std::string& value)
{
    ignoreType_ = value;
    ignoreTypeIsSet_ = true;
}

bool UpdateDefectRequestBody::ignoreTypeIsSet() const
{
    return ignoreTypeIsSet_;
}

void UpdateDefectRequestBody::unsetignoreType()
{
    ignoreTypeIsSet_ = false;
}

}
}
}
}
}


