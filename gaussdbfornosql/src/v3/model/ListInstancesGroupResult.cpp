

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesGroupResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesGroupResult::ListInstancesGroupResult()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeIsSet_ = false;
    nodesIsSet_ = false;
}

ListInstancesGroupResult::~ListInstancesGroupResult() = default;

void ListInstancesGroupResult::validate()
{
}

web::json::value ListInstancesGroupResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}

bool ListInstancesGroupResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInstancesNodeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}

std::string ListInstancesGroupResult::getId() const
{
    return id_;
}

void ListInstancesGroupResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesGroupResult::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesGroupResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesGroupResult::getStatus() const
{
    return status_;
}

void ListInstancesGroupResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInstancesGroupResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListInstancesGroupResult::unsetstatus()
{
    statusIsSet_ = false;
}

Volume ListInstancesGroupResult::getVolume() const
{
    return volume_;
}

void ListInstancesGroupResult::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ListInstancesGroupResult::volumeIsSet() const
{
    return volumeIsSet_;
}

void ListInstancesGroupResult::unsetvolume()
{
    volumeIsSet_ = false;
}

std::vector<ListInstancesNodeResult>& ListInstancesGroupResult::getNodes()
{
    return nodes_;
}

void ListInstancesGroupResult::setNodes(const std::vector<ListInstancesNodeResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListInstancesGroupResult::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListInstancesGroupResult::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


