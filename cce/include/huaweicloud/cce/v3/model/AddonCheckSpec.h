
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件检查Spec-request结构体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonCheckSpec
    : public ModelBase
{
public:
    AddonCheckSpec();
    virtual ~AddonCheckSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonCheckSpec members

    /// <summary>
    /// **参数解释：** 集群ID **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查信息列表，包含了需要检查的插件模板名称，插件实例ID，插件升级配置等。 **约束限制：** 不涉及 
    /// </summary>

    std::vector<AddonInfo>& getAddonList();
    bool addonListIsSet() const;
    void unsetaddonList();
    void setAddonList(const std::vector<AddonInfo>& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::vector<AddonInfo> addonList_;
    bool addonListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonCheckSpec_H_
