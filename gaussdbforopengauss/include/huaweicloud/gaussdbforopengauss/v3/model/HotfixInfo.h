
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixInfo_H_


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
/// 热补丁信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  HotfixInfo
    : public ModelBase
{
public:
    HotfixInfo();
    virtual ~HotfixInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HotfixInfo members

    /// <summary>
    /// 热补丁版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 通用非通用信息,common&#x3D;通用补丁,certain&#x3D;定制补丁。
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_HotfixInfo_H_
