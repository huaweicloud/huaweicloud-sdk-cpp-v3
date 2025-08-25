
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePath_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePath_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 升级路径
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradePath
    : public ModelBase
{
public:
    UpgradePath();
    virtual ~UpgradePath();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradePath members

    /// <summary>
    /// 集群版本，v1.19及以下集群形如v1.19.16-r20，v1.21及以上形如v1.21,v1.23，详细请参考CCE集群版本号说明。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// CCE集群平台版本号，表示集群版本(version)下的内部版本。用于跟踪某一集群版本内的迭代，集群版本内唯一，跨集群版本重新计数。   platformVersion格式为：cce.X.Y   - X: 表示内部特性版本。集群版本中特性或者补丁修复，或者OS支持等变更场景。其值从1开始单调递增。  - Y: 表示内部特性版本的补丁版本。仅用于特性版本上线后的软件包更新，不涉及其他修改。其值从0开始单调递增。
    /// </summary>

    std::string getPlatformVersion() const;
    bool platformVersionIsSet() const;
    void unsetplatformVersion();
    void setPlatformVersion(const std::string& value);

    /// <summary>
    /// 可升级的目标版本集合
    /// </summary>

    std::vector<std::string>& getTargetVersions();
    bool targetVersionsIsSet() const;
    void unsettargetVersions();
    void setTargetVersions(const std::vector<std::string>& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string platformVersion_;
    bool platformVersionIsSet_;
    std::vector<std::string> targetVersions_;
    bool targetVersionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradePath_H_
