
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cce/v3/model/ClusterConfigurationsSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/ConfigurationMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowNodePoolConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNodePoolConfigurationsResponse();
    virtual ~ShowNodePoolConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNodePoolConfigurationsResponse members

    /// <summary>
    /// API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// API类型，固定值**Configuration**
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigurationMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ConfigurationMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterConfigurationsSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const ClusterConfigurationsSpec& value);

    /// <summary>
    /// Configuration的状态信息
    /// </summary>

    Object getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Object& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    ConfigurationMetadata metadata_;
    bool metadataIsSet_;
    ClusterConfigurationsSpec spec_;
    bool specIsSet_;
    Object status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowNodePoolConfigurationsResponse_H_
