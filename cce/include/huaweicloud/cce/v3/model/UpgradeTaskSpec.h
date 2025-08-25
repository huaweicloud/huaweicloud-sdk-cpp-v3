
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级任务属性
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeTaskSpec
    : public ModelBase
{
public:
    UpgradeTaskSpec();
    virtual ~UpgradeTaskSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeTaskSpec members

    /// <summary>
    /// 升级前集群版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 升级的目标集群版本
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 升级任务附属信息
    /// </summary>

    Object getItems() const;
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const Object& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    Object items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskSpec_H_
