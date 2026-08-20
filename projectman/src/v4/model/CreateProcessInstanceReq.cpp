

#include "huaweicloud/projectman/v4/model/CreateProcessInstanceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProcessInstanceReq::CreateProcessInstanceReq()
{
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    needApproval_ = false;
    needApprovalIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    ccIsSet_ = false;
    attachWikisIsSet_ = false;
    attachDocumentsIsSet_ = false;
    ccbsIsSet_ = false;
    opinionsIsSet_ = false;
    cosIsSet_ = false;
    localAttachmentNamesIsSet_ = false;
}

CreateProcessInstanceReq::~CreateProcessInstanceReq() = default;

void CreateProcessInstanceReq::validate()
{
}

web::json::value CreateProcessInstanceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(needApprovalIsSet_) {
        val[utility::conversions::to_string_t("need_approval")] = ModelBase::toJson(needApproval_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }
    if(attachWikisIsSet_) {
        val[utility::conversions::to_string_t("attachWikis")] = ModelBase::toJson(attachWikis_);
    }
    if(attachDocumentsIsSet_) {
        val[utility::conversions::to_string_t("attachDocuments")] = ModelBase::toJson(attachDocuments_);
    }
    if(ccbsIsSet_) {
        val[utility::conversions::to_string_t("ccbs")] = ModelBase::toJson(ccbs_);
    }
    if(opinionsIsSet_) {
        val[utility::conversions::to_string_t("opinions")] = ModelBase::toJson(opinions_);
    }
    if(cosIsSet_) {
        val[utility::conversions::to_string_t("cos")] = ModelBase::toJson(cos_);
    }
    if(localAttachmentNamesIsSet_) {
        val[utility::conversions::to_string_t("local_attachment_names")] = ModelBase::toJson(localAttachmentNames_);
    }

    return val;
}
bool CreateProcessInstanceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_approval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_approval"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachWikis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachWikis"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachWikis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachDocuments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachDocuments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachDocuments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ccbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ccbs"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateProcessInstanceReq_ccbs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opinions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opinions"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateProcessInstanceReq_opinions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpinions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cos"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateProcessInstanceReq_cos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local_attachment_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("local_attachment_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalAttachmentNames(refVal);
        }
    }
    return ok;
}


std::string CreateProcessInstanceReq::getTitle() const
{
    return title_;
}

void CreateProcessInstanceReq::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateProcessInstanceReq::titleIsSet() const
{
    return titleIsSet_;
}

void CreateProcessInstanceReq::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateProcessInstanceReq::getDescription() const
{
    return description_;
}

void CreateProcessInstanceReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProcessInstanceReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProcessInstanceReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProcessInstanceReq::getCategory() const
{
    return category_;
}

void CreateProcessInstanceReq::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateProcessInstanceReq::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateProcessInstanceReq::unsetcategory()
{
    categoryIsSet_ = false;
}

bool CreateProcessInstanceReq::isNeedApproval() const
{
    return needApproval_;
}

void CreateProcessInstanceReq::setNeedApproval(bool value)
{
    needApproval_ = value;
    needApprovalIsSet_ = true;
}

bool CreateProcessInstanceReq::needApprovalIsSet() const
{
    return needApprovalIsSet_;
}

void CreateProcessInstanceReq::unsetneedApproval()
{
    needApprovalIsSet_ = false;
}

std::string CreateProcessInstanceReq::getPlanEndDate() const
{
    return planEndDate_;
}

void CreateProcessInstanceReq::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool CreateProcessInstanceReq::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void CreateProcessInstanceReq::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

std::string CreateProcessInstanceReq::getPlanStartDate() const
{
    return planStartDate_;
}

void CreateProcessInstanceReq::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool CreateProcessInstanceReq::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void CreateProcessInstanceReq::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

std::string CreateProcessInstanceReq::getStatus() const
{
    return status_;
}

void CreateProcessInstanceReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateProcessInstanceReq::statusIsSet() const
{
    return statusIsSet_;
}

void CreateProcessInstanceReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& CreateProcessInstanceReq::getCc()
{
    return cc_;
}

void CreateProcessInstanceReq::setCc(const std::vector<std::string>& value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool CreateProcessInstanceReq::ccIsSet() const
{
    return ccIsSet_;
}

void CreateProcessInstanceReq::unsetcc()
{
    ccIsSet_ = false;
}

std::vector<std::string>& CreateProcessInstanceReq::getAttachWikis()
{
    return attachWikis_;
}

void CreateProcessInstanceReq::setAttachWikis(const std::vector<std::string>& value)
{
    attachWikis_ = value;
    attachWikisIsSet_ = true;
}

bool CreateProcessInstanceReq::attachWikisIsSet() const
{
    return attachWikisIsSet_;
}

void CreateProcessInstanceReq::unsetattachWikis()
{
    attachWikisIsSet_ = false;
}

std::vector<std::string>& CreateProcessInstanceReq::getAttachDocuments()
{
    return attachDocuments_;
}

void CreateProcessInstanceReq::setAttachDocuments(const std::vector<std::string>& value)
{
    attachDocuments_ = value;
    attachDocumentsIsSet_ = true;
}

bool CreateProcessInstanceReq::attachDocumentsIsSet() const
{
    return attachDocumentsIsSet_;
}

void CreateProcessInstanceReq::unsetattachDocuments()
{
    attachDocumentsIsSet_ = false;
}

std::vector<CreateProcessInstanceReq_ccbs>& CreateProcessInstanceReq::getCcbs()
{
    return ccbs_;
}

void CreateProcessInstanceReq::setCcbs(const std::vector<CreateProcessInstanceReq_ccbs>& value)
{
    ccbs_ = value;
    ccbsIsSet_ = true;
}

bool CreateProcessInstanceReq::ccbsIsSet() const
{
    return ccbsIsSet_;
}

void CreateProcessInstanceReq::unsetccbs()
{
    ccbsIsSet_ = false;
}

std::vector<CreateProcessInstanceReq_opinions>& CreateProcessInstanceReq::getOpinions()
{
    return opinions_;
}

void CreateProcessInstanceReq::setOpinions(const std::vector<CreateProcessInstanceReq_opinions>& value)
{
    opinions_ = value;
    opinionsIsSet_ = true;
}

bool CreateProcessInstanceReq::opinionsIsSet() const
{
    return opinionsIsSet_;
}

void CreateProcessInstanceReq::unsetopinions()
{
    opinionsIsSet_ = false;
}

std::vector<CreateProcessInstanceReq_cos>& CreateProcessInstanceReq::getCos()
{
    return cos_;
}

void CreateProcessInstanceReq::setCos(const std::vector<CreateProcessInstanceReq_cos>& value)
{
    cos_ = value;
    cosIsSet_ = true;
}

bool CreateProcessInstanceReq::cosIsSet() const
{
    return cosIsSet_;
}

void CreateProcessInstanceReq::unsetcos()
{
    cosIsSet_ = false;
}

std::vector<std::string>& CreateProcessInstanceReq::getLocalAttachmentNames()
{
    return localAttachmentNames_;
}

void CreateProcessInstanceReq::setLocalAttachmentNames(const std::vector<std::string>& value)
{
    localAttachmentNames_ = value;
    localAttachmentNamesIsSet_ = true;
}

bool CreateProcessInstanceReq::localAttachmentNamesIsSet() const
{
    return localAttachmentNamesIsSet_;
}

void CreateProcessInstanceReq::unsetlocalAttachmentNames()
{
    localAttachmentNamesIsSet_ = false;
}

}
}
}
}
}


