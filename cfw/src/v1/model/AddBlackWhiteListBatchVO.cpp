

#include "huaweicloud/cfw/v1/model/AddBlackWhiteListBatchVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteListBatchVO::AddBlackWhiteListBatchVO()
{
    duplicatedListIsSet_ = false;
    failedListIsSet_ = false;
    successListIsSet_ = false;
}

AddBlackWhiteListBatchVO::~AddBlackWhiteListBatchVO() = default;

void AddBlackWhiteListBatchVO::validate()
{
}

web::json::value AddBlackWhiteListBatchVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(duplicatedListIsSet_) {
        val[utility::conversions::to_string_t("duplicated_list")] = ModelBase::toJson(duplicatedList_);
    }
    if(failedListIsSet_) {
        val[utility::conversions::to_string_t("failed_list")] = ModelBase::toJson(failedList_);
    }
    if(successListIsSet_) {
        val[utility::conversions::to_string_t("success_list")] = ModelBase::toJson(successList_);
    }

    return val;
}
bool AddBlackWhiteListBatchVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duplicated_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duplicated_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuplicatedList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BlackWhiteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessList(refVal);
        }
    }
    return ok;
}


std::vector<BlackWhiteInfo>& AddBlackWhiteListBatchVO::getDuplicatedList()
{
    return duplicatedList_;
}

void AddBlackWhiteListBatchVO::setDuplicatedList(const std::vector<BlackWhiteInfo>& value)
{
    duplicatedList_ = value;
    duplicatedListIsSet_ = true;
}

bool AddBlackWhiteListBatchVO::duplicatedListIsSet() const
{
    return duplicatedListIsSet_;
}

void AddBlackWhiteListBatchVO::unsetduplicatedList()
{
    duplicatedListIsSet_ = false;
}

std::vector<BlackWhiteInfo>& AddBlackWhiteListBatchVO::getFailedList()
{
    return failedList_;
}

void AddBlackWhiteListBatchVO::setFailedList(const std::vector<BlackWhiteInfo>& value)
{
    failedList_ = value;
    failedListIsSet_ = true;
}

bool AddBlackWhiteListBatchVO::failedListIsSet() const
{
    return failedListIsSet_;
}

void AddBlackWhiteListBatchVO::unsetfailedList()
{
    failedListIsSet_ = false;
}

std::vector<BlackWhiteInfo>& AddBlackWhiteListBatchVO::getSuccessList()
{
    return successList_;
}

void AddBlackWhiteListBatchVO::setSuccessList(const std::vector<BlackWhiteInfo>& value)
{
    successList_ = value;
    successListIsSet_ = true;
}

bool AddBlackWhiteListBatchVO::successListIsSet() const
{
    return successListIsSet_;
}

void AddBlackWhiteListBatchVO::unsetsuccessList()
{
    successListIsSet_ = false;
}

}
}
}
}
}


