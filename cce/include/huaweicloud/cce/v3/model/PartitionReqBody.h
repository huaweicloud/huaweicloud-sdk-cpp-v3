
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/PartitionReqBody_metadata.h>
#include <huaweicloud/cce/v3/model/PartitionReqBody_spec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群分区信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PartitionReqBody
    : public ModelBase
{
public:
    PartitionReqBody();
    virtual ~PartitionReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PartitionReqBody members

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： Partition 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 固定值，不允许修改 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PartitionReqBody_metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PartitionReqBody_metadata& value);

    /// <summary>
    /// 
    /// </summary>

    PartitionReqBody_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PartitionReqBody_spec& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    PartitionReqBody_metadata metadata_;
    bool metadataIsSet_;
    PartitionReqBody_spec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_H_
