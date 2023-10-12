
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_EditSetting_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_EditSetting_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/MosaicInfo.h>
#include <huaweicloud/mpc/v1/model/AvParameters.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/ImageWatermarkSetting.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  EditSetting
    : public ModelBase
{
public:
    EditSetting();
    virtual ~EditSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditSetting members

    /// <summary>
    /// input指定源文件开始截取的时间，单位：秒。可以有正数或者负数，正数表示从开始往后的时间点，负数表示从结尾往前的时间点 
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// input指定源文件接受截取的时间，单位：秒。可以有正数或者负数，正数表示从开始往后的时间点，负数表示从结尾往前的时间点。 
    /// </summary>

    std::string getTimelineEnd() const;
    bool timelineEndIsSet() const;
    void unsettimelineEnd();
    void setTimelineEnd(const std::string& value);

    /// <summary>
    /// 转码模板id
    /// </summary>

    int32_t getTransTemplateId() const;
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AvParameters getAvParameter() const;
    bool avParameterIsSet() const;
    void unsetavParameter();
    void setAvParameter(const AvParameters& value);

    /// <summary>
    /// 马赛克（模糊处理）配置，会对input指定的源文件进行马赛克处理，马赛克基于视频左上角为参考位置 
    /// </summary>

    std::vector<MosaicInfo>& getMosaics();
    bool mosaicsIsSet() const;
    void unsetmosaics();
    void setMosaics(const std::vector<MosaicInfo>& value);

    /// <summary>
    /// 图片水印配置，会对input指定的源文件进行马赛克处理。水印设置参数里面的overlay_input字段不填 
    /// </summary>

    std::vector<ImageWatermarkSetting>& getImageWatermarks();
    bool imageWatermarksIsSet() const;
    void unsetimageWatermarks();
    void setImageWatermarks(const std::vector<ImageWatermarkSetting>& value);

    /// <summary>
    /// 头部文件列表，需要指定文件名。列表内文件会按照顺序拼接在input指定文件的前面 
    /// </summary>

    std::vector<ObsObjInfo>& getHeads();
    bool headsIsSet() const;
    void unsetheads();
    void setHeads(const std::vector<ObsObjInfo>& value);

    /// <summary>
    /// 尾部文件列表，需要指定文件名。列表内文件会按照顺序拼接在input指定文件的后面 
    /// </summary>

    std::vector<ObsObjInfo>& getTails();
    bool tailsIsSet() const;
    void unsettails();
    void setTails(const std::vector<ObsObjInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineEnd_;
    bool timelineEndIsSet_;
    int32_t transTemplateId_;
    bool transTemplateIdIsSet_;
    AvParameters avParameter_;
    bool avParameterIsSet_;
    std::vector<MosaicInfo> mosaics_;
    bool mosaicsIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarks_;
    bool imageWatermarksIsSet_;
    std::vector<ObsObjInfo> heads_;
    bool headsIsSet_;
    std::vector<ObsObjInfo> tails_;
    bool tailsIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_EditSetting_H_
