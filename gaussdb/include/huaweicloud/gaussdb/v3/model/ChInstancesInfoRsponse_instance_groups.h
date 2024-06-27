
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_groups_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_groups_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstancesInfoRsponse_instance_groups
    : public ModelBase
{
public:
    ChInstancesInfoRsponse_instance_groups();
    virtual ~ChInstancesInfoRsponse_instance_groups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstancesInfoRsponse_instance_groups members

    /// <summary>
    /// 分组ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 分组名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例分组类型名，现在只支持clickhouse。
    /// </summary>

    std::string getGroupTypeName() const;
    bool groupTypeNameIsSet() const;
    void unsetgroupTypeName();
    void setGroupTypeName(const std::string& value);

    /// <summary>
    /// 实例节点信息。
    /// </summary>

    std::vector<ClickHouseNodeInfo>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<ClickHouseNodeInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string groupTypeName_;
    bool groupTypeNameIsSet_;
    std::vector<ClickHouseNodeInfo> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstancesInfoRsponse_instance_groups_H_
