
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeCluserResponseMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeCluserResponseMetadata_H_


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
/// 升级任务元数据
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeCluserResponseMetadata
    : public ModelBase
{
public:
    UpgradeCluserResponseMetadata();
    virtual ~UpgradeCluserResponseMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeCluserResponseMetadata members

    /// <summary>
    /// 升级任务ID，可通过调用获取集群升级任务详情API查询进展
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);


protected:
    std::string uid_;
    bool uidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeCluserResponseMetadata_H_
