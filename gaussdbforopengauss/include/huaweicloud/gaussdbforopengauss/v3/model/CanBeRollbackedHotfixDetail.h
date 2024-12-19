
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CanBeRollbackedHotfixDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CanBeRollbackedHotfixDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可以回退的热补丁信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CanBeRollbackedHotfixDetail
    : public ModelBase
{
public:
    CanBeRollbackedHotfixDetail();
    virtual ~CanBeRollbackedHotfixDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CanBeRollbackedHotfixDetail members

    /// <summary>
    /// 热补丁版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 通用/非通用补丁信息。 枚举值：   \&quot;common\&quot;: 通用补丁。   \&quot;certain\&quot;: 定制补丁。
    /// </summary>

    std::string getCommonPatch() const;
    bool commonPatchIsSet() const;
    void unsetcommonPatch();
    void setCommonPatch(const std::string& value);

    /// <summary>
    /// 是否和备份相关。
    /// </summary>

    bool isBackupSensitive() const;
    bool backupSensitiveIsSet() const;
    void unsetbackupSensitive();
    void setBackupSensitive(bool value);

    /// <summary>
    /// 补丁的描述信息。
    /// </summary>

    std::string getDescripition() const;
    bool descripitionIsSet() const;
    void unsetdescripition();
    void setDescripition(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string commonPatch_;
    bool commonPatchIsSet_;
    bool backupSensitive_;
    bool backupSensitiveIsSet_;
    std::string descripition_;
    bool descripitionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CanBeRollbackedHotfixDetail_H_
