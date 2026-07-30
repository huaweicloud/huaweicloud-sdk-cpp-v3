

#include "huaweicloud/modelarts/v1/model/ResizeNodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResizeNodeInfo::ResizeNodeInfo()
{
    batchUID_ = "";
    batchUIDIsSet_ = false;
    deleteNodeNamesIsSet_ = false;
}

ResizeNodeInfo::~ResizeNodeInfo() = default;

void ResizeNodeInfo::validate()
{
}

web::json::value ResizeNodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchUIDIsSet_) {
        val[utility::conversions::to_string_t("batchUID")] = ModelBase::toJson(batchUID_);
    }
    if(deleteNodeNamesIsSet_) {
        val[utility::conversions::to_string_t("deleteNodeNames")] = ModelBase::toJson(deleteNodeNames_);
    }

    return val;
}
bool ResizeNodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batchUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batchUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleteNodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteNodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteNodeNames(refVal);
        }
    }
    return ok;
}


std::string ResizeNodeInfo::getBatchUID() const
{
    return batchUID_;
}

void ResizeNodeInfo::setBatchUID(const std::string& value)
{
    batchUID_ = value;
    batchUIDIsSet_ = true;
}

bool ResizeNodeInfo::batchUIDIsSet() const
{
    return batchUIDIsSet_;
}

void ResizeNodeInfo::unsetbatchUID()
{
    batchUIDIsSet_ = false;
}

std::vector<std::string>& ResizeNodeInfo::getDeleteNodeNames()
{
    return deleteNodeNames_;
}

void ResizeNodeInfo::setDeleteNodeNames(const std::vector<std::string>& value)
{
    deleteNodeNames_ = value;
    deleteNodeNamesIsSet_ = true;
}

bool ResizeNodeInfo::deleteNodeNamesIsSet() const
{
    return deleteNodeNamesIsSet_;
}

void ResizeNodeInfo::unsetdeleteNodeNames()
{
    deleteNodeNamesIsSet_ = false;
}

}
}
}
}
}


