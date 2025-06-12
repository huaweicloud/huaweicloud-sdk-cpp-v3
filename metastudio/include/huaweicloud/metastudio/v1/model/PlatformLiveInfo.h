
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 平台直播信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PlatformLiveInfo
    : public ModelBase
{
public:
    PlatformLiveInfo();
    virtual ~PlatformLiveInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlatformLiveInfo members

    /// <summary>
    /// 直播平台ID。
    /// </summary>

    std::string getPlatformId() const;
    bool platformIdIsSet() const;
    void unsetplatformId();
    void setPlatformId(const std::string& value);

    /// <summary>
    /// 直播ID。如果配置，则段落切换回调中会携带该信息。只能包含英文、数字、-、_。 美团对应liveId
    /// </summary>

    std::string getLiveId() const;
    bool liveIdIsSet() const;
    void unsetliveId();
    void setLiveId(const std::string& value);


protected:
    std::string platformId_;
    bool platformIdIsSet_;
    std::string liveId_;
    bool liveIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveInfo_H_
