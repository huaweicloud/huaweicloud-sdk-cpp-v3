
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolSpecModel.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/PoolStatus.h>
#include <huaweicloud/modelarts/v1/model/PoolMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreatePoolResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePoolResponse();
    virtual ~CreatePoolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePoolResponse members

    /// <summary>
    /// **参数解释**：资源的API版本。 **取值范围**：可选值如下： - v2：当前资源版本为v2。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源的类型。 **取值范围**：可选值如下： - Pool：资源池。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PoolMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PoolSpecModel& value);

    /// <summary>
    /// 
    /// </summary>

    PoolStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const PoolStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    PoolMetadata metadata_;
    bool metadataIsSet_;
    PoolSpecModel spec_;
    bool specIsSet_;
    PoolStatus status_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreatePoolResponse_H_
