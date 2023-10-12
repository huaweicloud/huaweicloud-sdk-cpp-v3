
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/StreamPortrait.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ShowStreamPortraitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStreamPortraitResponse();
    virtual ~ShowStreamPortraitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStreamPortraitResponse members

    /// <summary>
    /// 播放画像信息列表。
    /// </summary>

    std::vector<StreamPortrait>& getStreamPortraits();
    bool streamPortraitsIsSet() const;
    void unsetstreamPortraits();
    void setStreamPortraits(const std::vector<StreamPortrait>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<StreamPortrait> streamPortraits_;
    bool streamPortraitsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ShowStreamPortraitResponse_H_
