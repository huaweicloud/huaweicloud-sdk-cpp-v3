
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Node_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Node_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeMetadata.h>
#include <huaweicloud/cce/v3/model/NodeStatus.h>
#include <string>
#include <huaweicloud/cce/v3/model/NodeSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Node
    : public ModelBase
{
public:
    Node();
    virtual ~Node();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Node members

    /// <summary>
    /// API类型，固定值“Node”，该值不可修改。  
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”，该值不可修改。  
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodeMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    NodeSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodeSpec& value);

    /// <summary>
    /// 
    /// </summary>

    NodeStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NodeStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    NodeMetadata metadata_;
    bool metadataIsSet_;
    NodeSpec spec_;
    bool specIsSet_;
    NodeStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Node_H_
