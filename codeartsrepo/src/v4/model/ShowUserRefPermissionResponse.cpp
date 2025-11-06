

#include "huaweicloud/codeartsrepo/v4/model/ShowUserRefPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowUserRefPermissionResponse::ShowUserRefPermissionResponse()
{
    readIsSet_ = false;
    reviewIsSet_ = false;
    approvalIsSet_ = false;
    createChangeIsSet_ = false;
    mergeIsSet_ = false;
    createDeleteIsSet_ = false;
    pushIsSet_ = false;
}

ShowUserRefPermissionResponse::~ShowUserRefPermissionResponse() = default;

void ShowUserRefPermissionResponse::validate()
{
}

web::json::value ShowUserRefPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(readIsSet_) {
        val[utility::conversions::to_string_t("read")] = ModelBase::toJson(read_);
    }
    if(reviewIsSet_) {
        val[utility::conversions::to_string_t("review")] = ModelBase::toJson(review_);
    }
    if(approvalIsSet_) {
        val[utility::conversions::to_string_t("approval")] = ModelBase::toJson(approval_);
    }
    if(createChangeIsSet_) {
        val[utility::conversions::to_string_t("create_change")] = ModelBase::toJson(createChange_);
    }
    if(mergeIsSet_) {
        val[utility::conversions::to_string_t("merge")] = ModelBase::toJson(merge_);
    }
    if(createDeleteIsSet_) {
        val[utility::conversions::to_string_t("create_delete")] = ModelBase::toJson(createDelete_);
    }
    if(pushIsSet_) {
        val[utility::conversions::to_string_t("push")] = ModelBase::toJson(push_);
    }

    return val;
}
bool ShowUserRefPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("read"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_change"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_delete"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push"));
        if(!fieldValue.is_null())
        {
            UserRefPermissionBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPush(refVal);
        }
    }
    return ok;
}


UserRefPermissionBasicDto ShowUserRefPermissionResponse::getRead() const
{
    return read_;
}

void ShowUserRefPermissionResponse::setRead(const UserRefPermissionBasicDto& value)
{
    read_ = value;
    readIsSet_ = true;
}

bool ShowUserRefPermissionResponse::readIsSet() const
{
    return readIsSet_;
}

void ShowUserRefPermissionResponse::unsetread()
{
    readIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getReview() const
{
    return review_;
}

void ShowUserRefPermissionResponse::setReview(const UserRefPermissionBasicDto& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool ShowUserRefPermissionResponse::reviewIsSet() const
{
    return reviewIsSet_;
}

void ShowUserRefPermissionResponse::unsetreview()
{
    reviewIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getApproval() const
{
    return approval_;
}

void ShowUserRefPermissionResponse::setApproval(const UserRefPermissionBasicDto& value)
{
    approval_ = value;
    approvalIsSet_ = true;
}

bool ShowUserRefPermissionResponse::approvalIsSet() const
{
    return approvalIsSet_;
}

void ShowUserRefPermissionResponse::unsetapproval()
{
    approvalIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getCreateChange() const
{
    return createChange_;
}

void ShowUserRefPermissionResponse::setCreateChange(const UserRefPermissionBasicDto& value)
{
    createChange_ = value;
    createChangeIsSet_ = true;
}

bool ShowUserRefPermissionResponse::createChangeIsSet() const
{
    return createChangeIsSet_;
}

void ShowUserRefPermissionResponse::unsetcreateChange()
{
    createChangeIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getMerge() const
{
    return merge_;
}

void ShowUserRefPermissionResponse::setMerge(const UserRefPermissionBasicDto& value)
{
    merge_ = value;
    mergeIsSet_ = true;
}

bool ShowUserRefPermissionResponse::mergeIsSet() const
{
    return mergeIsSet_;
}

void ShowUserRefPermissionResponse::unsetmerge()
{
    mergeIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getCreateDelete() const
{
    return createDelete_;
}

void ShowUserRefPermissionResponse::setCreateDelete(const UserRefPermissionBasicDto& value)
{
    createDelete_ = value;
    createDeleteIsSet_ = true;
}

bool ShowUserRefPermissionResponse::createDeleteIsSet() const
{
    return createDeleteIsSet_;
}

void ShowUserRefPermissionResponse::unsetcreateDelete()
{
    createDeleteIsSet_ = false;
}

UserRefPermissionBasicDto ShowUserRefPermissionResponse::getPush() const
{
    return push_;
}

void ShowUserRefPermissionResponse::setPush(const UserRefPermissionBasicDto& value)
{
    push_ = value;
    pushIsSet_ = true;
}

bool ShowUserRefPermissionResponse::pushIsSet() const
{
    return pushIsSet_;
}

void ShowUserRefPermissionResponse::unsetpush()
{
    pushIsSet_ = false;
}

}
}
}
}
}


