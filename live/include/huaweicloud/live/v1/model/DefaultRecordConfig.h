
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DefaultRecordConfig_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DefaultRecordConfig_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordObsFileAddr.h>
#include <huaweicloud/live/v1/model/HLSRecordConfig.h>
#include <huaweicloud/live/v1/model/FLVRecordConfig.h>
#include <huaweicloud/live/v1/model/MP4RecordConfig.h>
#include <vector>
#include <huaweicloud/live/v1/model/VideoFormatVar.h>

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
class HUAWEICLOUD_LIVE_V1_EXPORT  DefaultRecordConfig
    : public ModelBase
{
public:
    DefaultRecordConfig();
    virtual ~DefaultRecordConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DefaultRecordConfig members

    /// <summary>
    /// 录制格式，当前支持：FLV，HLS，MP4三种格式，设置格式时必须使用大写字母
    /// </summary>

    std::vector<VideoFormatVar>& getRecordFormat();
    bool recordFormatIsSet() const;
    void unsetrecordFormat();
    void setRecordFormat(const std::vector<VideoFormatVar>& value);

    /// <summary>
    /// 
    /// </summary>

    RecordObsFileAddr getObsAddr() const;
    bool obsAddrIsSet() const;
    void unsetobsAddr();
    void setObsAddr(const RecordObsFileAddr& value);

    /// <summary>
    /// 
    /// </summary>

    HLSRecordConfig getHlsConfig() const;
    bool hlsConfigIsSet() const;
    void unsethlsConfig();
    void setHlsConfig(const HLSRecordConfig& value);

    /// <summary>
    /// 
    /// </summary>

    FLVRecordConfig getFlvConfig() const;
    bool flvConfigIsSet() const;
    void unsetflvConfig();
    void setFlvConfig(const FLVRecordConfig& value);

    /// <summary>
    /// 
    /// </summary>

    MP4RecordConfig getMp4Config() const;
    bool mp4ConfigIsSet() const;
    void unsetmp4Config();
    void setMp4Config(const MP4RecordConfig& value);


protected:
    std::vector<VideoFormatVar> recordFormat_;
    bool recordFormatIsSet_;
    RecordObsFileAddr obsAddr_;
    bool obsAddrIsSet_;
    HLSRecordConfig hlsConfig_;
    bool hlsConfigIsSet_;
    FLVRecordConfig flvConfig_;
    bool flvConfigIsSet_;
    MP4RecordConfig mp4Config_;
    bool mp4ConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DefaultRecordConfig_H_
