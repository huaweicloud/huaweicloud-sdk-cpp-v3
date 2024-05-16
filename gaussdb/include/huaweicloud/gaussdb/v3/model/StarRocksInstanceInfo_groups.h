
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_groups_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_groups_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_nodes.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksInstanceInfo_groups
    : public ModelBase
{
public:
    StarRocksInstanceInfo_groups();
    virtual ~StarRocksInstanceInfo_groups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksInstanceInfo_groups members

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
    /// 实例节点。
    /// </summary>

    std::vector<StarRocksInstanceInfo_nodes>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<StarRocksInstanceInfo_nodes>& value);

    /// <summary>
    /// 实例分组类型名。
    /// </summary>

    std::string getGroupTypeName() const;
    bool groupTypeNameIsSet() const;
    void unsetgroupTypeName();
    void setGroupTypeName(const std::string& value);

    /// <summary>
    /// 实例分组节点类型。
    /// </summary>

    std::string getGroupNodeType() const;
    bool groupNodeTypeIsSet() const;
    void unsetgroupNodeType();
    void setGroupNodeType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<StarRocksInstanceInfo_nodes> nodes_;
    bool nodesIsSet_;
    std::string groupTypeName_;
    bool groupTypeNameIsSet_;
    std::string groupNodeType_;
    bool groupNodeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksInstanceInfo_groups_H_
