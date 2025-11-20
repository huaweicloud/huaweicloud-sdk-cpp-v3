
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 自定义节点池纳管节点参数。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddNodesToNodePool
    : public ModelBase
{
public:
    AddNodesToNodePool();
    virtual ~AddNodesToNodePool();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddNodesToNodePool members

    /// <summary>
    /// **参数解释**： 服务器ID，从ECS/BMS控制台获取。 &gt; 获取方式：在控制台的“服务列表”中，单击“计算 &gt; 弹性云服务器 ECS/裸金属服务器 BMS”，单击服务器的名称，在服务器详情页的“基本信息”页签下找到“ID”字段复制即可。  **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getServerID() const;
    bool serverIDIsSet() const;
    void unsetserverID();
    void setServerID(const std::string& value);


protected:
    std::string serverID_;
    bool serverIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_
