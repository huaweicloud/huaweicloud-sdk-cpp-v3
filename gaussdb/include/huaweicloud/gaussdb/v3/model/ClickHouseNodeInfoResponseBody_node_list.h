
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfoResponseBody_node_list_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfoResponseBody_node_list_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseNodeInfoResponseBody_node_list
    : public ModelBase
{
public:
    ClickHouseNodeInfoResponseBody_node_list();
    virtual ~ClickHouseNodeInfoResponseBody_node_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseNodeInfoResponseBody_node_list members

    /// <summary>
    /// ClickHouse实例节点id。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// ClickHouse实例节点名称。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 节点主备角色。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string role_;
    bool roleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseNodeInfoResponseBody_node_list_H_
