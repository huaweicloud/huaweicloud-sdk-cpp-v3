

#include "huaweicloud/gaussdbforopengauss/v3/model/DatapointResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DatapointResult::DatapointResult()
{
    datapointName_ = "";
    datapointNameIsSet_ = false;
    datapointValuesIsSet_ = false;
}

DatapointResult::~DatapointResult() = default;

void DatapointResult::validate()
{
}

web::json::value DatapointResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datapointNameIsSet_) {
        val[utility::conversions::to_string_t("datapoint_name")] = ModelBase::toJson(datapointName_);
    }
    if(datapointValuesIsSet_) {
        val[utility::conversions::to_string_t("datapoint_values")] = ModelBase::toJson(datapointValues_);
    }

    return val;
}
bool DatapointResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datapoint_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datapoint_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatapointName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datapoint_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datapoint_values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatapointValues(refVal);
        }
    }
    return ok;
}


std::string DatapointResult::getDatapointName() const
{
    return datapointName_;
}

void DatapointResult::setDatapointName(const std::string& value)
{
    datapointName_ = value;
    datapointNameIsSet_ = true;
}

bool DatapointResult::datapointNameIsSet() const
{
    return datapointNameIsSet_;
}

void DatapointResult::unsetdatapointName()
{
    datapointNameIsSet_ = false;
}

std::vector<std::string>& DatapointResult::getDatapointValues()
{
    return datapointValues_;
}

void DatapointResult::setDatapointValues(const std::vector<std::string>& value)
{
    datapointValues_ = value;
    datapointValuesIsSet_ = true;
}

bool DatapointResult::datapointValuesIsSet() const
{
    return datapointValuesIsSet_;
}

void DatapointResult::unsetdatapointValues()
{
    datapointValuesIsSet_ = false;
}

}
}
}
}
}


