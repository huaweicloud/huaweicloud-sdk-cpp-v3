
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeVersionInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeVersionInfo_H_


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
/// 版本信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeVersionInfo
    : public ModelBase
{
public:
    UpgradeVersionInfo();
    virtual ~UpgradeVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeVersionInfo members

    /// <summary>
    /// 正式版本号，如：v1.19.10
    /// </summary>

    std::string getRelease() const;
    bool releaseIsSet() const;
    void unsetrelease();
    void setRelease(const std::string& value);

    /// <summary>
    /// 补丁版本号，如r0
    /// </summary>

    std::string getPatch() const;
    bool patchIsSet() const;
    void unsetpatch();
    void setPatch(const std::string& value);

    /// <summary>
    /// 推荐升级的目标补丁版本号，如r0
    /// </summary>

    std::string getSuggestPatch() const;
    bool suggestPatchIsSet() const;
    void unsetsuggestPatch();
    void setSuggestPatch(const std::string& value);

    /// <summary>
    /// 升级目标版本集合
    /// </summary>

    std::vector<std::string>& getTargetVersions();
    bool targetVersionsIsSet() const;
    void unsettargetVersions();
    void setTargetVersions(const std::vector<std::string>& value);


protected:
    std::string release_;
    bool releaseIsSet_;
    std::string patch_;
    bool patchIsSet_;
    std::string suggestPatch_;
    bool suggestPatchIsSet_;
    std::vector<std::string> targetVersions_;
    bool targetVersionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeVersionInfo_H_
