

#include "huaweicloud/drs/v3/model/QueryFlowCompareDataResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryFlowCompareDataResp::QueryFlowCompareDataResp()
{
    totalRecord_ = 0L;
    totalRecordIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    listIsSet_ = false;
}

QueryFlowCompareDataResp::~QueryFlowCompareDataResp() = default;

void QueryFlowCompareDataResp::validate()
{
}

web::json::value QueryFlowCompareDataResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool QueryFlowCompareDataResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<StructDetailVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int64_t QueryFlowCompareDataResp::getTotalRecord() const
{
    return totalRecord_;
}

void QueryFlowCompareDataResp::setTotalRecord(int64_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool QueryFlowCompareDataResp::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void QueryFlowCompareDataResp::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

std::string QueryFlowCompareDataResp::getCreateTime() const
{
    return createTime_;
}

void QueryFlowCompareDataResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryFlowCompareDataResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryFlowCompareDataResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<StructDetailVO>& QueryFlowCompareDataResp::getList()
{
    return list_;
}

void QueryFlowCompareDataResp::setList(const std::vector<StructDetailVO>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool QueryFlowCompareDataResp::listIsSet() const
{
    return listIsSet_;
}

void QueryFlowCompareDataResp::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


