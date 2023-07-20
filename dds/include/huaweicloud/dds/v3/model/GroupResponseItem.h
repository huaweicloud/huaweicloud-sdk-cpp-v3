
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_GroupResponseItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_GroupResponseItem_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/NodeItem.h>
#include <huaweicloud/dds/v3/model/Volume.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例组信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  GroupResponseItem
    : public ModelBase
{
public:
    GroupResponseItem();
    virtual ~GroupResponseItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GroupResponseItem members

    /// <summary>
    /// 节点类型。 取值： - shard - config - mongos - replica - single
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 组ID。节点类型为shard和config时，该参数有效。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 组名称。节点类型为shard和config时，该参数有效。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 组状态。节点类型为shard和config时，该参数有效。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const Volume& value);

    /// <summary>
    /// 节点信息。
    /// </summary>

    std::vector<NodeItem>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<NodeItem>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    Volume volume_;
    bool volumeIsSet_;
    std::vector<NodeItem> nodes_;
    bool nodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_GroupResponseItem_H_
