
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_


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
/// 服务器重装云硬盘配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallVolumeSpec
    : public ModelBase
{
public:
    ReinstallVolumeSpec();
    virtual ~ReinstallVolumeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallVolumeSpec members

    /// <summary>
    /// 用户自定义镜像ID
    /// </summary>

    std::string getImageID() const;
    bool imageIDIsSet() const;
    void unsetimageID();
    void setImageID(const std::string& value);

    /// <summary>
    /// 用户主密钥ID。默认为空时，表示云硬盘不加密。
    /// </summary>

    std::string getCmkID() const;
    bool cmkIDIsSet() const;
    void unsetcmkID();
    void setCmkID(const std::string& value);


protected:
    std::string imageID_;
    bool imageIDIsSet_;
    std::string cmkID_;
    bool cmkIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallVolumeSpec_H_
