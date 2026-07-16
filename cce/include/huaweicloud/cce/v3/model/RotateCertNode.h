
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCertNode_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCertNode_H_


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
/// 轮转节点证书参数。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  RotateCertNode
    : public ModelBase
{
public:
    RotateCertNode();
    virtual ~RotateCertNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RotateCertNode members

    /// <summary>
    /// **参数解释**： 节点ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getNodeID() const;
    bool nodeIDIsSet() const;
    void unsetnodeID();
    void setNodeID(const std::string& value);


protected:
    std::string nodeID_;
    bool nodeIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCertNode_H_
