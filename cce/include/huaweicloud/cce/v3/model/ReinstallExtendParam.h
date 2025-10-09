
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallExtendParam_H_


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
/// 重装拓展参数，已废弃。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallExtendParam
    : public ModelBase
{
public:
    ReinstallExtendParam();
    virtual ~ReinstallExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallExtendParam members

    /// <summary>
    /// **参数解释**: 指定待切换目标操作系统所使用的用户镜像ID，已废弃。 指定此参数等价于指定ReinstallVolumeSpec中imageID，原取值将被覆盖。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及
    /// </summary>

    std::string getAlphaCceNodeImageID() const;
    bool alphaCceNodeImageIDIsSet() const;
    void unsetalphaCceNodeImageID();
    void setAlphaCceNodeImageID(const std::string& value);


protected:
    std::string alphaCceNodeImageID_;
    bool alphaCceNodeImageIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallExtendParam_H_
