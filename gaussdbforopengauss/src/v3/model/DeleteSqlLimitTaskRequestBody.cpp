

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteSqlLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteSqlLimitTaskRequestBody::DeleteSqlLimitTaskRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

DeleteSqlLimitTaskRequestBody::~DeleteSqlLimitTaskRequestBody() = default;

void DeleteSqlLimitTaskRequestBody::validate()
{
}

web::json::value DeleteSqlLimitTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool DeleteSqlLimitTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteSqlLimitTaskRequestBody::getNodeId() const
{
    return nodeId_;
}

void DeleteSqlLimitTaskRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteSqlLimitTaskRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteSqlLimitTaskRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


