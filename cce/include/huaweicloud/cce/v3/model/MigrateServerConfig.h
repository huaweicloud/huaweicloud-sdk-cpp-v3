
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateServerConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateServerConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MigrateVolumeSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点迁移场景服务器配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MigrateServerConfig
    : public ModelBase
{
public:
    MigrateServerConfig();
    virtual ~MigrateServerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateServerConfig members

    /// <summary>
    /// 
    /// </summary>

    MigrateVolumeSpec getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const MigrateVolumeSpec& value);


protected:
    MigrateVolumeSpec rootVolume_;
    bool rootVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateServerConfig_H_
