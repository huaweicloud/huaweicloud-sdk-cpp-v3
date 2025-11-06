

#include "huaweicloud/codeartsrepo/v4/model/CreateBranchDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateBranchDto::CreateBranchDto()
{
    branch_ = "";
    branchIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    relatedIdsIsSet_ = false;
}

CreateBranchDto::~CreateBranchDto() = default;

void CreateBranchDto::validate()
{
}

web::json::value CreateBranchDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(relatedIdsIsSet_) {
        val[utility::conversions::to_string_t("related_ids")] = ModelBase::toJson(relatedIds_);
    }

    return val;
}
bool CreateBranchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("related_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedIds(refVal);
        }
    }
    return ok;
}


std::string CreateBranchDto::getBranch() const
{
    return branch_;
}

void CreateBranchDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool CreateBranchDto::branchIsSet() const
{
    return branchIsSet_;
}

void CreateBranchDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string CreateBranchDto::getRef() const
{
    return ref_;
}

void CreateBranchDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool CreateBranchDto::refIsSet() const
{
    return refIsSet_;
}

void CreateBranchDto::unsetref()
{
    refIsSet_ = false;
}

std::string CreateBranchDto::getDescription() const
{
    return description_;
}

void CreateBranchDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateBranchDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateBranchDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& CreateBranchDto::getRelatedIds()
{
    return relatedIds_;
}

void CreateBranchDto::setRelatedIds(const std::vector<std::string>& value)
{
    relatedIds_ = value;
    relatedIdsIsSet_ = true;
}

bool CreateBranchDto::relatedIdsIsSet() const
{
    return relatedIdsIsSet_;
}

void CreateBranchDto::unsetrelatedIds()
{
    relatedIdsIsSet_ = false;
}

}
}
}
}
}


