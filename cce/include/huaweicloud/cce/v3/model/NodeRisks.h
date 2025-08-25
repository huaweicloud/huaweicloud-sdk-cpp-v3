
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeRisks_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeRisks_H_


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
/// 节点风险来源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeRisks
    : public ModelBase
{
public:
    NodeRisks();
    virtual ~NodeRisks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeRisks members

    /// <summary>
    /// 用户节点ID
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeRisks_H_
