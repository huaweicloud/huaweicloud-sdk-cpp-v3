
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodInfoV2_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodInfoV2_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  VodInfoV2
    : public ModelBase
{
public:
    VodInfoV2();
    virtual ~VodInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VodInfoV2 members

    /// <summary>
    /// VOD媒资id
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 点播播放地址
    /// </summary>

    std::string getPlayUrl() const;
    bool playUrlIsSet() const;
    void unsetplayUrl();
    void setPlayUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string playUrl_;
    bool playUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_VodInfoV2_H_
