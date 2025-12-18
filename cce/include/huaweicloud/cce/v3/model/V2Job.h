
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_V2Job_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_V2Job_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/V2JobTypeObject.h>
#include <string>
#include <huaweicloud/cce/v3/model/V2JobSpec.h>
#include <huaweicloud/cce/v3/model/V2JobStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  V2Job
    : public ModelBase
{
public:
    V2Job();
    virtual ~V2Job();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// V2Job members

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： Job 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： v2 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    V2JobTypeObject getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const V2JobTypeObject& value);

    /// <summary>
    /// 
    /// </summary>

    V2JobSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const V2JobSpec& value);

    /// <summary>
    /// 
    /// </summary>

    V2JobStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const V2JobStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    V2JobTypeObject metadata_;
    bool metadataIsSet_;
    V2JobSpec spec_;
    bool specIsSet_;
    V2JobStatus status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_V2Job_H_
