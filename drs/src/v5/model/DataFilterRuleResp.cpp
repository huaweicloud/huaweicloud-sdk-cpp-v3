

#include "huaweicloud/drs/v5/model/DataFilterRuleResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilterRuleResp::DataFilterRuleResp()
{
    batchId_ = 0L;
    batchIdIsSet_ = false;
    filterObjectListIsSet_ = false;
    filterRulesRespIsSet_ = false;
    advancedSettingRespIsSet_ = false;
}

DataFilterRuleResp::~DataFilterRuleResp() = default;

void DataFilterRuleResp::validate()
{
}

web::json::value DataFilterRuleResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchIdIsSet_) {
        val[utility::conversions::to_string_t("batch_id")] = ModelBase::toJson(batchId_);
    }
    if(filterObjectListIsSet_) {
        val[utility::conversions::to_string_t("filter_object_list")] = ModelBase::toJson(filterObjectList_);
    }
    if(filterRulesRespIsSet_) {
        val[utility::conversions::to_string_t("filter_rules_resp")] = ModelBase::toJson(filterRulesResp_);
    }
    if(advancedSettingRespIsSet_) {
        val[utility::conversions::to_string_t("advanced_setting_resp")] = ModelBase::toJson(advancedSettingResp_);
    }

    return val;
}
bool DataFilterRuleResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_object_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_object_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DataFilterObjectResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterObjectList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_rules_resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_rules_resp"));
        if(!fieldValue.is_null())
        {
            GeneralDataFilterResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterRulesResp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advanced_setting_resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_setting_resp"));
        if(!fieldValue.is_null())
        {
            DataFilteringAdvancedSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedSettingResp(refVal);
        }
    }
    return ok;
}


int64_t DataFilterRuleResp::getBatchId() const
{
    return batchId_;
}

void DataFilterRuleResp::setBatchId(int64_t value)
{
    batchId_ = value;
    batchIdIsSet_ = true;
}

bool DataFilterRuleResp::batchIdIsSet() const
{
    return batchIdIsSet_;
}

void DataFilterRuleResp::unsetbatchId()
{
    batchIdIsSet_ = false;
}

std::vector<DataFilterObjectResp>& DataFilterRuleResp::getFilterObjectList()
{
    return filterObjectList_;
}

void DataFilterRuleResp::setFilterObjectList(const std::vector<DataFilterObjectResp>& value)
{
    filterObjectList_ = value;
    filterObjectListIsSet_ = true;
}

bool DataFilterRuleResp::filterObjectListIsSet() const
{
    return filterObjectListIsSet_;
}

void DataFilterRuleResp::unsetfilterObjectList()
{
    filterObjectListIsSet_ = false;
}

GeneralDataFilterResp DataFilterRuleResp::getFilterRulesResp() const
{
    return filterRulesResp_;
}

void DataFilterRuleResp::setFilterRulesResp(const GeneralDataFilterResp& value)
{
    filterRulesResp_ = value;
    filterRulesRespIsSet_ = true;
}

bool DataFilterRuleResp::filterRulesRespIsSet() const
{
    return filterRulesRespIsSet_;
}

void DataFilterRuleResp::unsetfilterRulesResp()
{
    filterRulesRespIsSet_ = false;
}

DataFilteringAdvancedSetting DataFilterRuleResp::getAdvancedSettingResp() const
{
    return advancedSettingResp_;
}

void DataFilterRuleResp::setAdvancedSettingResp(const DataFilteringAdvancedSetting& value)
{
    advancedSettingResp_ = value;
    advancedSettingRespIsSet_ = true;
}

bool DataFilterRuleResp::advancedSettingRespIsSet() const
{
    return advancedSettingRespIsSet_;
}

void DataFilterRuleResp::unsetadvancedSettingResp()
{
    advancedSettingRespIsSet_ = false;
}

}
}
}
}
}


