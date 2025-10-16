

#include "huaweicloud/cpcs/v1/model/ShowStatusInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusInstanceResponse::ShowStatusInstanceResponse()
{
    cpuUtilsIsSet_ = false;
    memUtilsIsSet_ = false;
    diskUtilsIsSet_ = false;
    cpuUtilInstanceNamesIsSet_ = false;
    memUtilInstanceNamesIsSet_ = false;
    diskUtilInstanceNamesIsSet_ = false;
    cpuUtilAveragesIsSet_ = false;
    memUtilAveragesIsSet_ = false;
    diskUtilAveragesIsSet_ = false;
}

ShowStatusInstanceResponse::~ShowStatusInstanceResponse() = default;

void ShowStatusInstanceResponse::validate()
{
}

web::json::value ShowStatusInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuUtilsIsSet_) {
        val[utility::conversions::to_string_t("cpu_utils")] = ModelBase::toJson(cpuUtils_);
    }
    if(memUtilsIsSet_) {
        val[utility::conversions::to_string_t("mem_utils")] = ModelBase::toJson(memUtils_);
    }
    if(diskUtilsIsSet_) {
        val[utility::conversions::to_string_t("disk_utils")] = ModelBase::toJson(diskUtils_);
    }
    if(cpuUtilInstanceNamesIsSet_) {
        val[utility::conversions::to_string_t("cpu_util_instance_names")] = ModelBase::toJson(cpuUtilInstanceNames_);
    }
    if(memUtilInstanceNamesIsSet_) {
        val[utility::conversions::to_string_t("mem_util_instance_names")] = ModelBase::toJson(memUtilInstanceNames_);
    }
    if(diskUtilInstanceNamesIsSet_) {
        val[utility::conversions::to_string_t("disk_util_instance_names")] = ModelBase::toJson(diskUtilInstanceNames_);
    }
    if(cpuUtilAveragesIsSet_) {
        val[utility::conversions::to_string_t("cpu_util_averages")] = ModelBase::toJson(cpuUtilAverages_);
    }
    if(memUtilAveragesIsSet_) {
        val[utility::conversions::to_string_t("mem_util_averages")] = ModelBase::toJson(memUtilAverages_);
    }
    if(diskUtilAveragesIsSet_) {
        val[utility::conversions::to_string_t("disk_util_averages")] = ModelBase::toJson(diskUtilAverages_);
    }

    return val;
}
bool ShowStatusInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_utils"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_utils"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusInstanceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtils(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_utils"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_utils"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusInstanceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUtils(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_utils"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_utils"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusInstanceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUtils(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_util_instance_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_util_instance_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtilInstanceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_util_instance_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_util_instance_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUtilInstanceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_util_instance_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_util_instance_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUtilInstanceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_util_averages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_util_averages"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtilAverages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_util_averages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_util_averages"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUtilAverages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_util_averages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_util_averages"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUtilAverages(refVal);
        }
    }
    return ok;
}


std::vector<ShowStatusInstanceItem>& ShowStatusInstanceResponse::getCpuUtils()
{
    return cpuUtils_;
}

void ShowStatusInstanceResponse::setCpuUtils(const std::vector<ShowStatusInstanceItem>& value)
{
    cpuUtils_ = value;
    cpuUtilsIsSet_ = true;
}

bool ShowStatusInstanceResponse::cpuUtilsIsSet() const
{
    return cpuUtilsIsSet_;
}

void ShowStatusInstanceResponse::unsetcpuUtils()
{
    cpuUtilsIsSet_ = false;
}

std::vector<ShowStatusInstanceItem>& ShowStatusInstanceResponse::getMemUtils()
{
    return memUtils_;
}

void ShowStatusInstanceResponse::setMemUtils(const std::vector<ShowStatusInstanceItem>& value)
{
    memUtils_ = value;
    memUtilsIsSet_ = true;
}

bool ShowStatusInstanceResponse::memUtilsIsSet() const
{
    return memUtilsIsSet_;
}

void ShowStatusInstanceResponse::unsetmemUtils()
{
    memUtilsIsSet_ = false;
}

std::vector<ShowStatusInstanceItem>& ShowStatusInstanceResponse::getDiskUtils()
{
    return diskUtils_;
}

void ShowStatusInstanceResponse::setDiskUtils(const std::vector<ShowStatusInstanceItem>& value)
{
    diskUtils_ = value;
    diskUtilsIsSet_ = true;
}

bool ShowStatusInstanceResponse::diskUtilsIsSet() const
{
    return diskUtilsIsSet_;
}

void ShowStatusInstanceResponse::unsetdiskUtils()
{
    diskUtilsIsSet_ = false;
}

std::vector<std::string>& ShowStatusInstanceResponse::getCpuUtilInstanceNames()
{
    return cpuUtilInstanceNames_;
}

void ShowStatusInstanceResponse::setCpuUtilInstanceNames(const std::vector<std::string>& value)
{
    cpuUtilInstanceNames_ = value;
    cpuUtilInstanceNamesIsSet_ = true;
}

bool ShowStatusInstanceResponse::cpuUtilInstanceNamesIsSet() const
{
    return cpuUtilInstanceNamesIsSet_;
}

void ShowStatusInstanceResponse::unsetcpuUtilInstanceNames()
{
    cpuUtilInstanceNamesIsSet_ = false;
}

std::vector<std::string>& ShowStatusInstanceResponse::getMemUtilInstanceNames()
{
    return memUtilInstanceNames_;
}

void ShowStatusInstanceResponse::setMemUtilInstanceNames(const std::vector<std::string>& value)
{
    memUtilInstanceNames_ = value;
    memUtilInstanceNamesIsSet_ = true;
}

bool ShowStatusInstanceResponse::memUtilInstanceNamesIsSet() const
{
    return memUtilInstanceNamesIsSet_;
}

void ShowStatusInstanceResponse::unsetmemUtilInstanceNames()
{
    memUtilInstanceNamesIsSet_ = false;
}

std::vector<std::string>& ShowStatusInstanceResponse::getDiskUtilInstanceNames()
{
    return diskUtilInstanceNames_;
}

void ShowStatusInstanceResponse::setDiskUtilInstanceNames(const std::vector<std::string>& value)
{
    diskUtilInstanceNames_ = value;
    diskUtilInstanceNamesIsSet_ = true;
}

bool ShowStatusInstanceResponse::diskUtilInstanceNamesIsSet() const
{
    return diskUtilInstanceNamesIsSet_;
}

void ShowStatusInstanceResponse::unsetdiskUtilInstanceNames()
{
    diskUtilInstanceNamesIsSet_ = false;
}

std::vector<double>& ShowStatusInstanceResponse::getCpuUtilAverages()
{
    return cpuUtilAverages_;
}

void ShowStatusInstanceResponse::setCpuUtilAverages(std::vector<double> value)
{
    cpuUtilAverages_ = value;
    cpuUtilAveragesIsSet_ = true;
}

bool ShowStatusInstanceResponse::cpuUtilAveragesIsSet() const
{
    return cpuUtilAveragesIsSet_;
}

void ShowStatusInstanceResponse::unsetcpuUtilAverages()
{
    cpuUtilAveragesIsSet_ = false;
}

std::vector<double>& ShowStatusInstanceResponse::getMemUtilAverages()
{
    return memUtilAverages_;
}

void ShowStatusInstanceResponse::setMemUtilAverages(std::vector<double> value)
{
    memUtilAverages_ = value;
    memUtilAveragesIsSet_ = true;
}

bool ShowStatusInstanceResponse::memUtilAveragesIsSet() const
{
    return memUtilAveragesIsSet_;
}

void ShowStatusInstanceResponse::unsetmemUtilAverages()
{
    memUtilAveragesIsSet_ = false;
}

std::vector<double>& ShowStatusInstanceResponse::getDiskUtilAverages()
{
    return diskUtilAverages_;
}

void ShowStatusInstanceResponse::setDiskUtilAverages(std::vector<double> value)
{
    diskUtilAverages_ = value;
    diskUtilAveragesIsSet_ = true;
}

bool ShowStatusInstanceResponse::diskUtilAveragesIsSet() const
{
    return diskUtilAveragesIsSet_;
}

void ShowStatusInstanceResponse::unsetdiskUtilAverages()
{
    diskUtilAveragesIsSet_ = false;
}

}
}
}
}
}


