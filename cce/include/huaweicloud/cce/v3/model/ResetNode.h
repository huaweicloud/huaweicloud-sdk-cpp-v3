
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNode_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNode_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReinstallNodeSpec.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重置节点参数。集群内已有节点通过重置进行重新安装并接入集群。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResetNode
    : public ModelBase
{
public:
    ResetNode();
    virtual ~ResetNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNode members

    /// <summary>
    /// 节点ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getNodeID() const;
    bool nodeIDIsSet() const;
    void unsetnodeID();
    void setNodeID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallNodeSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const ReinstallNodeSpec& value);


protected:
    std::string nodeID_;
    bool nodeIDIsSet_;
    ReinstallNodeSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNode_H_
