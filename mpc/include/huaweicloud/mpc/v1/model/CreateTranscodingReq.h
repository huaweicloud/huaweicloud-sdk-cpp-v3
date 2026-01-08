
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/Thumbnail.h>
#include <huaweicloud/mpc/v1/model/VideoProcess.h>
#include <huaweicloud/mpc/v1/model/FileMetaData.h>
#include <string>
#include <huaweicloud/mpc/v1/model/TransIdTemplate.h>
#include <vector>
#include <huaweicloud/mpc/v1/model/WatermarkRequest.h>
#include <huaweicloud/mpc/v1/model/AvParameters.h>
#include <huaweicloud/mpc/v1/model/AudioProcess.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/Crop.h>
#include <huaweicloud/mpc/v1/model/Subtitle.h>
#include <huaweicloud/mpc/v1/model/AdditionalManifests.h>
#include <huaweicloud/mpc/v1/model/AudioTrack.h>
#include <huaweicloud/mpc/v1/model/ImageSprite.h>
#include <huaweicloud/mpc/v1/model/MultiAudio.h>
#include <huaweicloud/mpc/v1/model/Encryption.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateTranscodingReq
    : public ModelBase
{
public:
    CreateTranscodingReq();
    virtual ~CreateTranscodingReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTranscodingReq members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 转码模板ID，没带av_parameter参数时，必须带该参数，数组，每一路转码输出对应一个转码配置模板ID，最多支持9个模板ID。  多个转码模板中如下参数可变，其他都必须一致：  视频bitrate，height，width。 
    /// </summary>

    std::vector<int32_t>& getTransTemplateId();
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(std::vector<int32_t> value);

    /// <summary>
    /// 转码模板数组 
    /// </summary>

    std::vector<TransIdTemplate>& getTransTemplateList();
    bool transTemplateListIsSet() const;
    void unsettransTemplateList();
    void setTransTemplateList(const std::vector<TransIdTemplate>& value);

    /// <summary>
    /// 转码参数。  若同时设置“trans_template_id”和此参数，则优先使用此参数进行转码，不带trans_template_id时，该参数必选。 
    /// </summary>

    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);

    /// <summary>
    /// 主索引定制参数。 
    /// </summary>

    std::vector<AdditionalManifests>& getAdditionalManifests();
    bool additionalManifestsIsSet() const;
    void unsetadditionalManifests();
    void setAdditionalManifests(const std::vector<AdditionalManifests>& value);

    /// <summary>
    /// 输出文件名称，每一路转码输出对应一个名称，需要与转码模板ID数组的顺序对应。  - 若设置该参数，表示输出文件按该参数命名。 - 若不设置该参数，表示输出文件按默认方式命名。 
    /// </summary>

    std::vector<std::string>& getOutputFilenames();
    bool outputFilenamesIsSet() const;
    void unsetoutputFilenames();
    void setOutputFilenames(const std::vector<std::string>& value);

    /// <summary>
    /// 用户自定义数据，该字段可在查询接口或消息通知中按原内容透传给用户。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 图片水印参数，数组，最多支持20个成员。 
    /// </summary>

    std::vector<WatermarkRequest>& getWatermarks();
    bool watermarksIsSet() const;
    void unsetwatermarks();
    void setWatermarks(const std::vector<WatermarkRequest>& value);

    /// <summary>
    /// 
    /// </summary>

    Thumbnail getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const Thumbnail& value);

    /// <summary>
    /// 多截图任务，数组，最多支持20个成员。 
    /// </summary>

    std::vector<Thumbnail>& getThumbnails();
    bool thumbnailsIsSet() const;
    void unsetthumbnails();
    void setThumbnails(const std::vector<Thumbnail>& value);

    /// <summary>
    /// 雪碧图参数，数组，最多支持20个成员。 
    /// </summary>

    std::vector<ImageSprite>& getImageSprites();
    bool imageSpritesIsSet() const;
    void unsetimageSprites();
    void setImageSprites(const std::vector<ImageSprite>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// 任务优先级，取值如下： - 9代表高优先级。 - 6代表中优先级，默认为6。  暂时只支持6和9。 
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Subtitle getSubtitle() const;
    bool subtitleIsSet() const;
    void unsetsubtitle();
    void setSubtitle(const Subtitle& value);

    /// <summary>
    /// 
    /// </summary>

    Encryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const Encryption& value);

    /// <summary>
    /// 
    /// </summary>

    Crop getCrop() const;
    bool cropIsSet() const;
    void unsetcrop();
    void setCrop(const Crop& value);

    /// <summary>
    /// 
    /// </summary>

    AudioTrack getAudioTrack() const;
    bool audioTrackIsSet() const;
    void unsetaudioTrack();
    void setAudioTrack(const AudioTrack& value);

    /// <summary>
    /// 
    /// </summary>

    MultiAudio getMultiAudio() const;
    bool multiAudioIsSet() const;
    void unsetmultiAudio();
    void setMultiAudio(const MultiAudio& value);

    /// <summary>
    /// 
    /// </summary>

    VideoProcess getVideoProcess() const;
    bool videoProcessIsSet() const;
    void unsetvideoProcess();
    void setVideoProcess(const VideoProcess& value);

    /// <summary>
    /// 
    /// </summary>

    AudioProcess getAudioProcess() const;
    bool audioProcessIsSet() const;
    void unsetaudioProcess();
    void setAudioProcess(const AudioProcess& value);

    /// <summary>
    /// metadata设置，默认只支持AIGC 
    /// </summary>

    std::vector<FileMetaData>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::vector<FileMetaData>& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<int32_t> transTemplateId_;
    bool transTemplateIdIsSet_;
    std::vector<TransIdTemplate> transTemplateList_;
    bool transTemplateListIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;
    std::vector<AdditionalManifests> additionalManifests_;
    bool additionalManifestsIsSet_;
    std::vector<std::string> outputFilenames_;
    bool outputFilenamesIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::vector<WatermarkRequest> watermarks_;
    bool watermarksIsSet_;
    Thumbnail thumbnail_;
    bool thumbnailIsSet_;
    std::vector<Thumbnail> thumbnails_;
    bool thumbnailsIsSet_;
    std::vector<ImageSprite> imageSprites_;
    bool imageSpritesIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    Subtitle subtitle_;
    bool subtitleIsSet_;
    Encryption encryption_;
    bool encryptionIsSet_;
    Crop crop_;
    bool cropIsSet_;
    AudioTrack audioTrack_;
    bool audioTrackIsSet_;
    MultiAudio multiAudio_;
    bool multiAudioIsSet_;
    VideoProcess videoProcess_;
    bool videoProcessIsSet_;
    AudioProcess audioProcess_;
    bool audioProcessIsSet_;
    std::vector<FileMetaData> metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_
