
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrRequest_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrRequest_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RecognizeFlashAsrRequest
    : public ModelBase
{
public:
    RecognizeFlashAsrRequest();
    virtual ~RecognizeFlashAsrRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecognizeFlashAsrRequest members

    /// <summary>
    /// 所使用的模型特征串。通常是 “语种_采样率_领域”的形式。 采样率需要与音频采样率保持一致。 当前支持如下模型特征串： chinese_8k_common chinese_16k_conversation
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 音频格式，audio_format取值范围： wav,mp3,m4a,aac,opus
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// obs桶名
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// obs对象key，经过urlencode编码，长度不超过1024个字符
    /// </summary>

    std::string getObsObjectKey() const;
    bool obsObjectKeyIsSet() const;
    void unsetobsObjectKey();
    void setObsObjectKey(const std::string& value);

    /// <summary>
    /// 是否加标点， 可以为 yes, 默认no
    /// </summary>

    std::string getAddPunc() const;
    bool addPuncIsSet() const;
    void unsetaddPunc();
    void setAddPunc(const std::string& value);

    /// <summary>
    /// 是否将音频中的数字使用阿拉伯数字的形式呈现，取值为yes，no，默认为yes
    /// </summary>

    std::string getDigitNorm() const;
    bool digitNormIsSet() const;
    void unsetdigitNorm();
    void setDigitNorm(const std::string& value);

    /// <summary>
    /// 表示是否在识别结果中输出分词结果信息，取值为yes，no，默认no
    /// </summary>

    std::string getNeedWordInfo() const;
    bool needWordInfoIsSet() const;
    void unsetneedWordInfo();
    void setNeedWordInfo(const std::string& value);

    /// <summary>
    /// 热词表id
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 表示是否在识别中只识别首个声道的音频数据，取值为“yes”和“no”，默认为“no”。
    /// </summary>

    std::string getFirstChannelOnly() const;
    bool firstChannelOnlyIsSet() const;
    void unsetfirstChannelOnly();
    void setFirstChannelOnly(const std::string& value);


protected:
    std::string property_;
    bool propertyIsSet_;
    std::string audioFormat_;
    bool audioFormatIsSet_;
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string obsObjectKey_;
    bool obsObjectKeyIsSet_;
    std::string addPunc_;
    bool addPuncIsSet_;
    std::string digitNorm_;
    bool digitNormIsSet_;
    std::string needWordInfo_;
    bool needWordInfoIsSet_;
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string firstChannelOnly_;
    bool firstChannelOnlyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RecognizeFlashAsrRequest& dereference_from_shared_ptr(std::shared_ptr<RecognizeFlashAsrRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrRequest_H_
