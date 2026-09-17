

#include "huaweicloud/cce/v3/model/InPlaceMigratetoNodesSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InPlaceMigratetoNodesSpec::InPlaceMigratetoNodesSpec()
{
    nodesIsSet_ = false;
    dataDiskCleanUpOptionIsSet_ = false;
    extendParamIsSet_ = false;
}

InPlaceMigratetoNodesSpec::~InPlaceMigratetoNodesSpec() = default;

void InPlaceMigratetoNodesSpec::validate()
{
}

web::json::value InPlaceMigratetoNodesSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(dataDiskCleanUpOptionIsSet_) {
        val[utility::conversions::to_string_t("dataDiskCleanUpOption")] = ModelBase::toJson(dataDiskCleanUpOption_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool InPlaceMigratetoNodesSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<InplaceMigrateNodeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataDiskCleanUpOption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataDiskCleanUpOption"));
        if(!fieldValue.is_null())
        {
            DataDiskCleanUpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataDiskCleanUpOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            InPlaceMigrateNodeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::vector<InplaceMigrateNodeItem>& InPlaceMigratetoNodesSpec::getNodes()
{
    return nodes_;
}

void InPlaceMigratetoNodesSpec::setNodes(const std::vector<InplaceMigrateNodeItem>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool InPlaceMigratetoNodesSpec::nodesIsSet() const
{
    return nodesIsSet_;
}

void InPlaceMigratetoNodesSpec::unsetnodes()
{
    nodesIsSet_ = false;
}

DataDiskCleanUpOption InPlaceMigratetoNodesSpec::getDataDiskCleanUpOption() const
{
    return dataDiskCleanUpOption_;
}

void InPlaceMigratetoNodesSpec::setDataDiskCleanUpOption(const DataDiskCleanUpOption& value)
{
    dataDiskCleanUpOption_ = value;
    dataDiskCleanUpOptionIsSet_ = true;
}

bool InPlaceMigratetoNodesSpec::dataDiskCleanUpOptionIsSet() const
{
    return dataDiskCleanUpOptionIsSet_;
}

void InPlaceMigratetoNodesSpec::unsetdataDiskCleanUpOption()
{
    dataDiskCleanUpOptionIsSet_ = false;
}

InPlaceMigrateNodeExtendParam InPlaceMigratetoNodesSpec::getExtendParam() const
{
    return extendParam_;
}

void InPlaceMigratetoNodesSpec::setExtendParam(const InPlaceMigrateNodeExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool InPlaceMigratetoNodesSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void InPlaceMigratetoNodesSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


