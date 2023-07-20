

#include "huaweicloud/dds/v3/model/DatastoreResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DatastoreResult::DatastoreResult()
{
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

DatastoreResult::~DatastoreResult() = default;

void DatastoreResult::validate()
{
}

web::json::value DatastoreResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool DatastoreResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}

std::string DatastoreResult::getNodeType() const
{
    return nodeType_;
}

void DatastoreResult::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool DatastoreResult::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void DatastoreResult::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string DatastoreResult::getVersion() const
{
    return version_;
}

void DatastoreResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DatastoreResult::versionIsSet() const
{
    return versionIsSet_;
}

void DatastoreResult::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


