
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeDetailInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeDetailInfo_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  TranscodeDetailInfo
    : public ModelBase
{
public:
    TranscodeDetailInfo();
    virtual ~TranscodeDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeDetailInfo members

    /// <summary>
    /// 流名
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// 转码模板
    /// </summary>

    std::string getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const std::string& value);

    /// <summary>
    /// 转码格式（H264/H265）
    /// </summary>

    std::string getCodeRateFormat() const;
    bool codeRateFormatIsSet() const;
    void unsetcodeRateFormat();
    void setCodeRateFormat(const std::string& value);

    /// <summary>
    /// 转码时长
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);


protected:
    std::string streamName_;
    bool streamNameIsSet_;
    std::string template_;
    bool templateIsSet_;
    std::string codeRateFormat_;
    bool codeRateFormatIsSet_;
    int64_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeDetailInfo_H_
