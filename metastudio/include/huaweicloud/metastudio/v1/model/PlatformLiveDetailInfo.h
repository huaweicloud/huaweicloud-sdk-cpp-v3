
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveDetailInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveDetailInfo_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PlatformLiveDetailInfo
    : public ModelBase
{
public:
    PlatformLiveDetailInfo();
    virtual ~PlatformLiveDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlatformLiveDetailInfo members

    /// <summary>
    /// 直播平台ID。
    /// </summary>

    std::string getPlatformId() const;
    bool platformIdIsSet() const;
    void unsetplatformId();
    void setPlatformId(const std::string& value);

    /// <summary>
    /// 直播平台。美团填写meituan
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 授权账号信息。 美团平台对应：opBizCode
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 直播ID。如果配置，则段落切换回调中会携带该信息。 美团对应liveId
    /// </summary>

    std::string getLiveId() const;
    bool liveIdIsSet() const;
    void unsetliveId();
    void setLiveId(const std::string& value);


protected:
    std::string platformId_;
    bool platformIdIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string liveId_;
    bool liveIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformLiveDetailInfo_H_
