

#include "huaweicloud/modelarts/v1/model/Summary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Summary::Summary()
{
    logType_ = "";
    logTypeIsSet_ = false;
    logDirIsSet_ = false;
    dataSourcesIsSet_ = false;
}

Summary::~Summary() = default;

void Summary::validate()
{
}

web::json::value Summary::toJson() const
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
bool Summary::fromJson(const web::json::value& val)
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
            LogDir refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_sources"));
        if(!fieldValue.is_null())
        {
            std::vector<DataSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSources(refVal);
        }
    }
    return ok;
}


std::string Summary::getLogType() const
{
    return logType_;
}

void Summary::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool Summary::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void Summary::unsetlogType()
{
    logTypeIsSet_ = false;
}

LogDir Summary::getLogDir() const
{
    return logDir_;
}

void Summary::setLogDir(const LogDir& value)
{
    logDir_ = value;
    logDirIsSet_ = true;
}

bool Summary::logDirIsSet() const
{
    return logDirIsSet_;
}

void Summary::unsetlogDir()
{
    logDirIsSet_ = false;
}

std::vector<DataSource>& Summary::getDataSources()
{
    return dataSources_;
}

void Summary::setDataSources(const std::vector<DataSource>& value)
{
    dataSources_ = value;
    dataSourcesIsSet_ = true;
}

bool Summary::dataSourcesIsSet() const
{
    return dataSourcesIsSet_;
}

void Summary::unsetdataSources()
{
    dataSourcesIsSet_ = false;
}

}
}
}
}
}


