
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolResp_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolResp_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePoolMetadata.h>
#include <string>
#include <huaweicloud/cce/v3/model/NodePoolSpec.h>
#include <huaweicloud/cce/v3/model/NodePoolStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolResp
    : public ModelBase
{
public:
    NodePoolResp();
    virtual ~NodePoolResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolResp members

    /// <summary>
    /// API类型，固定值“NodePool”。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NodePoolMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodePoolSpec& value);

    /// <summary>
    /// 
    /// </summary>

    NodePoolStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NodePoolStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    NodePoolMetadata metadata_;
    bool metadataIsSet_;
    NodePoolSpec spec_;
    bool specIsSet_;
    NodePoolStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolResp_H_
