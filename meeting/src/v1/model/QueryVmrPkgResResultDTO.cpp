

#include "huaweicloud/meeting/v1/model/QueryVmrPkgResResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryVmrPkgResResultDTO::QueryVmrPkgResResultDTO()
{
    vmrPkgId_ = "";
    vmrPkgIdIsSet_ = false;
    vmrName_ = "";
    vmrNameIsSet_ = false;
    vmrPkgParties_ = 0;
    vmrPkgPartiesIsSet_ = false;
    vmrPkgCount_ = 0;
    vmrPkgCountIsSet_ = false;
    vmrPkgUsedCount_ = 0;
    vmrPkgUsedCountIsSet_ = false;
}

QueryVmrPkgResResultDTO::~QueryVmrPkgResResultDTO() = default;

void QueryVmrPkgResResultDTO::validate()
{
}

web::json::value QueryVmrPkgResResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vmrPkgIdIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgId")] = ModelBase::toJson(vmrPkgId_);
    }
    if(vmrNameIsSet_) {
        val[utility::conversions::to_string_t("vmrName")] = ModelBase::toJson(vmrName_);
    }
    if(vmrPkgPartiesIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgParties")] = ModelBase::toJson(vmrPkgParties_);
    }
    if(vmrPkgCountIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgCount")] = ModelBase::toJson(vmrPkgCount_);
    }
    if(vmrPkgUsedCountIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgUsedCount")] = ModelBase::toJson(vmrPkgUsedCount_);
    }

    return val;
}
bool QueryVmrPkgResResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vmrPkgId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgParties"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgParties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgUsedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgUsedCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgUsedCount(refVal);
        }
    }
    return ok;
}


std::string QueryVmrPkgResResultDTO::getVmrPkgId() const
{
    return vmrPkgId_;
}

void QueryVmrPkgResResultDTO::setVmrPkgId(const std::string& value)
{
    vmrPkgId_ = value;
    vmrPkgIdIsSet_ = true;
}

bool QueryVmrPkgResResultDTO::vmrPkgIdIsSet() const
{
    return vmrPkgIdIsSet_;
}

void QueryVmrPkgResResultDTO::unsetvmrPkgId()
{
    vmrPkgIdIsSet_ = false;
}

std::string QueryVmrPkgResResultDTO::getVmrName() const
{
    return vmrName_;
}

void QueryVmrPkgResResultDTO::setVmrName(const std::string& value)
{
    vmrName_ = value;
    vmrNameIsSet_ = true;
}

bool QueryVmrPkgResResultDTO::vmrNameIsSet() const
{
    return vmrNameIsSet_;
}

void QueryVmrPkgResResultDTO::unsetvmrName()
{
    vmrNameIsSet_ = false;
}

int32_t QueryVmrPkgResResultDTO::getVmrPkgParties() const
{
    return vmrPkgParties_;
}

void QueryVmrPkgResResultDTO::setVmrPkgParties(int32_t value)
{
    vmrPkgParties_ = value;
    vmrPkgPartiesIsSet_ = true;
}

bool QueryVmrPkgResResultDTO::vmrPkgPartiesIsSet() const
{
    return vmrPkgPartiesIsSet_;
}

void QueryVmrPkgResResultDTO::unsetvmrPkgParties()
{
    vmrPkgPartiesIsSet_ = false;
}

int32_t QueryVmrPkgResResultDTO::getVmrPkgCount() const
{
    return vmrPkgCount_;
}

void QueryVmrPkgResResultDTO::setVmrPkgCount(int32_t value)
{
    vmrPkgCount_ = value;
    vmrPkgCountIsSet_ = true;
}

bool QueryVmrPkgResResultDTO::vmrPkgCountIsSet() const
{
    return vmrPkgCountIsSet_;
}

void QueryVmrPkgResResultDTO::unsetvmrPkgCount()
{
    vmrPkgCountIsSet_ = false;
}

int32_t QueryVmrPkgResResultDTO::getVmrPkgUsedCount() const
{
    return vmrPkgUsedCount_;
}

void QueryVmrPkgResResultDTO::setVmrPkgUsedCount(int32_t value)
{
    vmrPkgUsedCount_ = value;
    vmrPkgUsedCountIsSet_ = true;
}

bool QueryVmrPkgResResultDTO::vmrPkgUsedCountIsSet() const
{
    return vmrPkgUsedCountIsSet_;
}

void QueryVmrPkgResResultDTO::unsetvmrPkgUsedCount()
{
    vmrPkgUsedCountIsSet_ = false;
}

}
}
}
}
}


