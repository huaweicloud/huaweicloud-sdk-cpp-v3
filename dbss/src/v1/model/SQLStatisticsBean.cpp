

#include "huaweicloud/dbss/v1/model/SQLStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SQLStatisticsBean::SQLStatisticsBean()
{
    deleteNum_ = 0L;
    deleteNumIsSet_ = false;
    insertNum_ = 0L;
    insertNumIsSet_ = false;
    otherNum_ = 0L;
    otherNumIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    selectNum_ = 0L;
    selectNumIsSet_ = false;
    updateNum_ = 0L;
    updateNumIsSet_ = false;
}

SQLStatisticsBean::~SQLStatisticsBean() = default;

void SQLStatisticsBean::validate()
{
}

web::json::value SQLStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteNumIsSet_) {
        val[utility::conversions::to_string_t("delete_num")] = ModelBase::toJson(deleteNum_);
    }
    if(insertNumIsSet_) {
        val[utility::conversions::to_string_t("insert_num")] = ModelBase::toJson(insertNum_);
    }
    if(otherNumIsSet_) {
        val[utility::conversions::to_string_t("other_num")] = ModelBase::toJson(otherNum_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(selectNumIsSet_) {
        val[utility::conversions::to_string_t("select_num")] = ModelBase::toJson(selectNum_);
    }
    if(updateNumIsSet_) {
        val[utility::conversions::to_string_t("update_num")] = ModelBase::toJson(updateNum_);
    }

    return val;
}
bool SQLStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("select_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateNum(refVal);
        }
    }
    return ok;
}


int64_t SQLStatisticsBean::getDeleteNum() const
{
    return deleteNum_;
}

void SQLStatisticsBean::setDeleteNum(int64_t value)
{
    deleteNum_ = value;
    deleteNumIsSet_ = true;
}

bool SQLStatisticsBean::deleteNumIsSet() const
{
    return deleteNumIsSet_;
}

void SQLStatisticsBean::unsetdeleteNum()
{
    deleteNumIsSet_ = false;
}

int64_t SQLStatisticsBean::getInsertNum() const
{
    return insertNum_;
}

void SQLStatisticsBean::setInsertNum(int64_t value)
{
    insertNum_ = value;
    insertNumIsSet_ = true;
}

bool SQLStatisticsBean::insertNumIsSet() const
{
    return insertNumIsSet_;
}

void SQLStatisticsBean::unsetinsertNum()
{
    insertNumIsSet_ = false;
}

int64_t SQLStatisticsBean::getOtherNum() const
{
    return otherNum_;
}

void SQLStatisticsBean::setOtherNum(int64_t value)
{
    otherNum_ = value;
    otherNumIsSet_ = true;
}

bool SQLStatisticsBean::otherNumIsSet() const
{
    return otherNumIsSet_;
}

void SQLStatisticsBean::unsetotherNum()
{
    otherNumIsSet_ = false;
}

std::string SQLStatisticsBean::getPeriod() const
{
    return period_;
}

void SQLStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool SQLStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void SQLStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

int64_t SQLStatisticsBean::getSelectNum() const
{
    return selectNum_;
}

void SQLStatisticsBean::setSelectNum(int64_t value)
{
    selectNum_ = value;
    selectNumIsSet_ = true;
}

bool SQLStatisticsBean::selectNumIsSet() const
{
    return selectNumIsSet_;
}

void SQLStatisticsBean::unsetselectNum()
{
    selectNumIsSet_ = false;
}

int64_t SQLStatisticsBean::getUpdateNum() const
{
    return updateNum_;
}

void SQLStatisticsBean::setUpdateNum(int64_t value)
{
    updateNum_ = value;
    updateNumIsSet_ = true;
}

bool SQLStatisticsBean::updateNumIsSet() const
{
    return updateNumIsSet_;
}

void SQLStatisticsBean::unsetupdateNum()
{
    updateNumIsSet_ = false;
}

}
}
}
}
}


