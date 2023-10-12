

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlReadonlyNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlReadonlyNodeRequest::DeleteGaussMySqlReadonlyNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

DeleteGaussMySqlReadonlyNodeRequest::~DeleteGaussMySqlReadonlyNodeRequest() = default;

void DeleteGaussMySqlReadonlyNodeRequest::validate()
{
}

web::json::value DeleteGaussMySqlReadonlyNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool DeleteGaussMySqlReadonlyNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string DeleteGaussMySqlReadonlyNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlReadonlyNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlReadonlyNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlReadonlyNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlReadonlyNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteGaussMySqlReadonlyNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteGaussMySqlReadonlyNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteGaussMySqlReadonlyNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteGaussMySqlReadonlyNodeRequest::getNodeId() const
{
    return nodeId_;
}

void DeleteGaussMySqlReadonlyNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteGaussMySqlReadonlyNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteGaussMySqlReadonlyNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


