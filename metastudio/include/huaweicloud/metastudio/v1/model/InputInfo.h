
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InputInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InputInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RTCRoomInfoList.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输入信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InputInfo
    : public ModelBase
{
public:
    InputInfo();
    virtual ~InputInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputInfo members

    /// <summary>
    /// 
    /// </summary>

    RTCRoomInfoList getRtcRoomInfo() const;
    bool rtcRoomInfoIsSet() const;
    void unsetrtcRoomInfo();
    void setRtcRoomInfo(const RTCRoomInfoList& value);


protected:
    RTCRoomInfoList rtcRoomInfo_;
    bool rtcRoomInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InputInfo_H_
