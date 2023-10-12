

#include "huaweicloud/drs/v3/model/LineCompareResultDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LineCompareResultDetails::LineCompareResultDetails()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    lineCompareDetailIsSet_ = false;
    lineCompareDetailCount_ = 0;
    lineCompareDetailCountIsSet_ = false;
}

LineCompareResultDetails::~LineCompareResultDetails() = default;

void LineCompareResultDetails::validate()
{
}

web::json::value LineCompareResultDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(lineCompareDetailIsSet_) {
        val[utility::conversions::to_string_t("line_compare_detail")] = ModelBase::toJson(lineCompareDetail_);
    }
    if(lineCompareDetailCountIsSet_) {
        val[utility::conversions::to_string_t("line_compare_detail_count")] = ModelBase::toJson(lineCompareDetailCount_);
    }

    return val;
}
bool LineCompareResultDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<LineCompareDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_detail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_detail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareDetailCount(refVal);
        }
    }
    return ok;
}


std::string LineCompareResultDetails::getSourceDbName() const
{
    return sourceDbName_;
}

void LineCompareResultDetails::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool LineCompareResultDetails::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void LineCompareResultDetails::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::vector<LineCompareDetail>& LineCompareResultDetails::getLineCompareDetail()
{
    return lineCompareDetail_;
}

void LineCompareResultDetails::setLineCompareDetail(const std::vector<LineCompareDetail>& value)
{
    lineCompareDetail_ = value;
    lineCompareDetailIsSet_ = true;
}

bool LineCompareResultDetails::lineCompareDetailIsSet() const
{
    return lineCompareDetailIsSet_;
}

void LineCompareResultDetails::unsetlineCompareDetail()
{
    lineCompareDetailIsSet_ = false;
}

int32_t LineCompareResultDetails::getLineCompareDetailCount() const
{
    return lineCompareDetailCount_;
}

void LineCompareResultDetails::setLineCompareDetailCount(int32_t value)
{
    lineCompareDetailCount_ = value;
    lineCompareDetailCountIsSet_ = true;
}

bool LineCompareResultDetails::lineCompareDetailCountIsSet() const
{
    return lineCompareDetailCountIsSet_;
}

void LineCompareResultDetails::unsetlineCompareDetailCount()
{
    lineCompareDetailCountIsSet_ = false;
}

}
}
}
}
}


