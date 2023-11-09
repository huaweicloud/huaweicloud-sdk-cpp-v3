

#include "huaweicloud/tics/v1/model/TicsDatasetColumn.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsDatasetColumn::TicsDatasetColumn()
{
    columnName_ = "";
    columnNameIsSet_ = false;
    comments_ = "";
    commentsIsSet_ = false;
    dataId_ = "";
    dataIdIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    flLabelType_ = "";
    flLabelTypeIsSet_ = false;
    isDiscrete_ = false;
    isDiscreteIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
    privacyPolicy_ = "";
    privacyPolicyIsSet_ = false;
    privacyPolicyExt_ = "";
    privacyPolicyExtIsSet_ = false;
    sacle_ = 0;
    sacleIsSet_ = false;
    sqlColPrivacyType_ = "";
    sqlColPrivacyTypeIsSet_ = false;
}

TicsDatasetColumn::~TicsDatasetColumn() = default;

void TicsDatasetColumn::validate()
{
}

web::json::value TicsDatasetColumn::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(commentsIsSet_) {
        val[utility::conversions::to_string_t("comments")] = ModelBase::toJson(comments_);
    }
    if(dataIdIsSet_) {
        val[utility::conversions::to_string_t("data_id")] = ModelBase::toJson(dataId_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(flLabelTypeIsSet_) {
        val[utility::conversions::to_string_t("fl_label_type")] = ModelBase::toJson(flLabelType_);
    }
    if(isDiscreteIsSet_) {
        val[utility::conversions::to_string_t("is_discrete")] = ModelBase::toJson(isDiscrete_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
    }
    if(privacyPolicyIsSet_) {
        val[utility::conversions::to_string_t("privacy_policy")] = ModelBase::toJson(privacyPolicy_);
    }
    if(privacyPolicyExtIsSet_) {
        val[utility::conversions::to_string_t("privacy_policy_ext")] = ModelBase::toJson(privacyPolicyExt_);
    }
    if(sacleIsSet_) {
        val[utility::conversions::to_string_t("sacle")] = ModelBase::toJson(sacle_);
    }
    if(sqlColPrivacyTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_col_privacy_type")] = ModelBase::toJson(sqlColPrivacyType_);
    }

    return val;
}
bool TicsDatasetColumn::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fl_label_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fl_label_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlLabelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_discrete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_discrete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDiscrete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privacy_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacyPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privacy_policy_ext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy_policy_ext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacyPolicyExt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sacle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sacle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSacle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_col_privacy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_col_privacy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlColPrivacyType(refVal);
        }
    }
    return ok;
}


std::string TicsDatasetColumn::getColumnName() const
{
    return columnName_;
}

void TicsDatasetColumn::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool TicsDatasetColumn::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void TicsDatasetColumn::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string TicsDatasetColumn::getComments() const
{
    return comments_;
}

void TicsDatasetColumn::setComments(const std::string& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool TicsDatasetColumn::commentsIsSet() const
{
    return commentsIsSet_;
}

void TicsDatasetColumn::unsetcomments()
{
    commentsIsSet_ = false;
}

std::string TicsDatasetColumn::getDataId() const
{
    return dataId_;
}

void TicsDatasetColumn::setDataId(const std::string& value)
{
    dataId_ = value;
    dataIdIsSet_ = true;
}

bool TicsDatasetColumn::dataIdIsSet() const
{
    return dataIdIsSet_;
}

void TicsDatasetColumn::unsetdataId()
{
    dataIdIsSet_ = false;
}

std::string TicsDatasetColumn::getDataType() const
{
    return dataType_;
}

void TicsDatasetColumn::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool TicsDatasetColumn::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void TicsDatasetColumn::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string TicsDatasetColumn::getFlLabelType() const
{
    return flLabelType_;
}

void TicsDatasetColumn::setFlLabelType(const std::string& value)
{
    flLabelType_ = value;
    flLabelTypeIsSet_ = true;
}

bool TicsDatasetColumn::flLabelTypeIsSet() const
{
    return flLabelTypeIsSet_;
}

void TicsDatasetColumn::unsetflLabelType()
{
    flLabelTypeIsSet_ = false;
}

bool TicsDatasetColumn::isIsDiscrete() const
{
    return isDiscrete_;
}

void TicsDatasetColumn::setIsDiscrete(bool value)
{
    isDiscrete_ = value;
    isDiscreteIsSet_ = true;
}

bool TicsDatasetColumn::isDiscreteIsSet() const
{
    return isDiscreteIsSet_;
}

void TicsDatasetColumn::unsetisDiscrete()
{
    isDiscreteIsSet_ = false;
}

int32_t TicsDatasetColumn::getLength() const
{
    return length_;
}

void TicsDatasetColumn::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool TicsDatasetColumn::lengthIsSet() const
{
    return lengthIsSet_;
}

void TicsDatasetColumn::unsetlength()
{
    lengthIsSet_ = false;
}

std::string TicsDatasetColumn::getPrivacyPolicy() const
{
    return privacyPolicy_;
}

void TicsDatasetColumn::setPrivacyPolicy(const std::string& value)
{
    privacyPolicy_ = value;
    privacyPolicyIsSet_ = true;
}

bool TicsDatasetColumn::privacyPolicyIsSet() const
{
    return privacyPolicyIsSet_;
}

void TicsDatasetColumn::unsetprivacyPolicy()
{
    privacyPolicyIsSet_ = false;
}

std::string TicsDatasetColumn::getPrivacyPolicyExt() const
{
    return privacyPolicyExt_;
}

void TicsDatasetColumn::setPrivacyPolicyExt(const std::string& value)
{
    privacyPolicyExt_ = value;
    privacyPolicyExtIsSet_ = true;
}

bool TicsDatasetColumn::privacyPolicyExtIsSet() const
{
    return privacyPolicyExtIsSet_;
}

void TicsDatasetColumn::unsetprivacyPolicyExt()
{
    privacyPolicyExtIsSet_ = false;
}

int32_t TicsDatasetColumn::getSacle() const
{
    return sacle_;
}

void TicsDatasetColumn::setSacle(int32_t value)
{
    sacle_ = value;
    sacleIsSet_ = true;
}

bool TicsDatasetColumn::sacleIsSet() const
{
    return sacleIsSet_;
}

void TicsDatasetColumn::unsetsacle()
{
    sacleIsSet_ = false;
}

std::string TicsDatasetColumn::getSqlColPrivacyType() const
{
    return sqlColPrivacyType_;
}

void TicsDatasetColumn::setSqlColPrivacyType(const std::string& value)
{
    sqlColPrivacyType_ = value;
    sqlColPrivacyTypeIsSet_ = true;
}

bool TicsDatasetColumn::sqlColPrivacyTypeIsSet() const
{
    return sqlColPrivacyTypeIsSet_;
}

void TicsDatasetColumn::unsetsqlColPrivacyType()
{
    sqlColPrivacyTypeIsSet_ = false;
}

}
}
}
}
}


