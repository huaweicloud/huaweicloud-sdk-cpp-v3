
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroup_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroup_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ExtensionScaleGroupMetadata.h>
#include <huaweicloud/cce/v3/model/ExtensionScaleGroupSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池扩展伸缩组配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ExtensionScaleGroup
    : public ModelBase
{
public:
    ExtensionScaleGroup();
    virtual ~ExtensionScaleGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionScaleGroup members

    /// <summary>
    /// 
    /// </summary>

    ExtensionScaleGroupMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ExtensionScaleGroupMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionScaleGroupSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const ExtensionScaleGroupSpec& value);


protected:
    ExtensionScaleGroupMetadata metadata_;
    bool metadataIsSet_;
    ExtensionScaleGroupSpec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroup_H_
