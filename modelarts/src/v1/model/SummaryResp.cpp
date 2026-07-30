

#include "huaweicloud/modelarts/v1/model/SummaryResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SummaryResp::SummaryResp()
{
    logType_ = "";
    logTypeIsSet_ = false;
    logDirIsSet_ = false;
    dataSourcesIsSet_ = false;
}

SummaryResp::~SummaryResp() = default;

void SummaryResp::validate()
{
}

web::json::value SummaryResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(logDirIsSet_) {
        val[utility::conversions::to_string_t("log_dir")] = ModelBase::toJson(logDir_);
    }
    if(dataSourcesIsSet_) {
        val[utility::conversions::to_string_t("data_sources")] = ModelBase::toJson(dataSources_);
    }

    return val;
}
bool SummaryResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_dir"));
        if(!fieldValue.is_null())
        {
            LogDirResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_sources"));
        if(!fieldValue.is_null())
        {
            std::vector<DataSourceResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSources(refVal);
        }
    }
    return ok;
}


std::string SummaryResp::getLogType() const
{
    return logType_;
}

void SummaryResp::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool SummaryResp::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void SummaryResp::unsetlogType()
{
    logTypeIsSet_ = false;
}

LogDirResp SummaryResp::getLogDir() const
{
    return logDir_;
}

void SummaryResp::setLogDir(const LogDirResp& value)
{
    logDir_ = value;
    logDirIsSet_ = true;
}

bool SummaryResp::logDirIsSet() const
{
    return logDirIsSet_;
}

void SummaryResp::unsetlogDir()
{
    logDirIsSet_ = false;
}

std::vector<DataSourceResp>& SummaryResp::getDataSources()
{
    return dataSources_;
}

void SummaryResp::setDataSources(const std::vector<DataSourceResp>& value)
{
    dataSources_ = value;
    dataSourcesIsSet_ = true;
}

bool SummaryResp::dataSourcesIsSet() const
{
    return dataSourcesIsSet_;
}

void SummaryResp::unsetdataSources()
{
    dataSourcesIsSet_ = false;
}

}
}
}
}
}


