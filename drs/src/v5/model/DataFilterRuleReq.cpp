

#include "huaweicloud/drs/v5/model/DataFilterRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilterRuleReq::DataFilterRuleReq()
{
    generalFilteringListIsSet_ = false;
    advancedSettingListIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    dataFilterType_ = "";
    dataFilterTypeIsSet_ = false;
}

DataFilterRuleReq::~DataFilterRuleReq() = default;

void DataFilterRuleReq::validate()
{
}

web::json::value DataFilterRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generalFilteringListIsSet_) {
        val[utility::conversions::to_string_t("general_filtering_list")] = ModelBase::toJson(generalFilteringList_);
    }
    if(advancedSettingListIsSet_) {
        val[utility::conversions::to_string_t("advanced_setting_list")] = ModelBase::toJson(advancedSettingList_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(dataFilterTypeIsSet_) {
        val[utility::conversions::to_string_t("data_filter_type")] = ModelBase::toJson(dataFilterType_);
    }

    return val;
}
bool DataFilterRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("general_filtering_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("general_filtering_list"));
        if(!fieldValue.is_null())
        {
            std::vector<GeneralTransformationReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneralFilteringList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advanced_setting_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_setting_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DataFilteringAdvancedSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedSettingList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_filter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_filter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataFilterType(refVal);
        }
    }
    return ok;
}


std::vector<GeneralTransformationReq>& DataFilterRuleReq::getGeneralFilteringList()
{
    return generalFilteringList_;
}

void DataFilterRuleReq::setGeneralFilteringList(const std::vector<GeneralTransformationReq>& value)
{
    generalFilteringList_ = value;
    generalFilteringListIsSet_ = true;
}

bool DataFilterRuleReq::generalFilteringListIsSet() const
{
    return generalFilteringListIsSet_;
}

void DataFilterRuleReq::unsetgeneralFilteringList()
{
    generalFilteringListIsSet_ = false;
}

std::vector<DataFilteringAdvancedSetting>& DataFilterRuleReq::getAdvancedSettingList()
{
    return advancedSettingList_;
}

void DataFilterRuleReq::setAdvancedSettingList(const std::vector<DataFilteringAdvancedSetting>& value)
{
    advancedSettingList_ = value;
    advancedSettingListIsSet_ = true;
}

bool DataFilterRuleReq::advancedSettingListIsSet() const
{
    return advancedSettingListIsSet_;
}

void DataFilterRuleReq::unsetadvancedSettingList()
{
    advancedSettingListIsSet_ = false;
}

std::string DataFilterRuleReq::getSource() const
{
    return source_;
}

void DataFilterRuleReq::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool DataFilterRuleReq::sourceIsSet() const
{
    return sourceIsSet_;
}

void DataFilterRuleReq::unsetsource()
{
    sourceIsSet_ = false;
}

std::string DataFilterRuleReq::getDataFilterType() const
{
    return dataFilterType_;
}

void DataFilterRuleReq::setDataFilterType(const std::string& value)
{
    dataFilterType_ = value;
    dataFilterTypeIsSet_ = true;
}

bool DataFilterRuleReq::dataFilterTypeIsSet() const
{
    return dataFilterTypeIsSet_;
}

void DataFilterRuleReq::unsetdataFilterType()
{
    dataFilterTypeIsSet_ = false;
}

}
}
}
}
}


