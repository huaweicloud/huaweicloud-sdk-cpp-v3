
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoScriptBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoScriptBaseInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VideoScriptBaseInfo
    : public ModelBase
{
public:
    VideoScriptBaseInfo();
    virtual ~VideoScriptBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoScriptBaseInfo members

    /// <summary>
    /// 剧本ID。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 剧本名称。
    /// </summary>

    std::string getScriptName() const;
    bool scriptNameIsSet() const;
    void unsetscriptName();
    void setScriptName(const std::string& value);

    /// <summary>
    /// 剧本描述。
    /// </summary>

    std::string getScriptDescription() const;
    bool scriptDescriptionIsSet() const;
    void unsetscriptDescription();
    void setScriptDescription(const std::string& value);

    /// <summary>
    /// 数字人模型资产ID，可以从资产库中查询。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 数字人模型类型。  * HUMAN_MODEL_2D：分身数字人 * HUMAN_MODEL_3D：3D数字人
    /// </summary>

    std::string getModelAssetType() const;
    bool modelAssetTypeIsSet() const;
    void unsetmodelAssetType();
    void setModelAssetType(const std::string& value);

    /// <summary>
    /// 剧本封面下载url。
    /// </summary>

    std::string getScriptCoverUrl() const;
    bool scriptCoverUrlIsSet() const;
    void unsetscriptCoverUrl();
    void setScriptCoverUrl(const std::string& value);

    /// <summary>
    /// 脚本类型，即视频制作的驱动方式。默认TEXT * TEXT: 文本驱动，即通过TTS合成语音 * AUDIO: 语音驱动
    /// </summary>

    std::string getScriptType() const;
    bool scriptTypeIsSet() const;
    void unsetscriptType();
    void setScriptType(const std::string& value);

    /// <summary>
    /// 台词脚本。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    std::string scriptName_;
    bool scriptNameIsSet_;
    std::string scriptDescription_;
    bool scriptDescriptionIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::string modelAssetType_;
    bool modelAssetTypeIsSet_;
    std::string scriptCoverUrl_;
    bool scriptCoverUrlIsSet_;
    std::string scriptType_;
    bool scriptTypeIsSet_;
    std::string text_;
    bool textIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoScriptBaseInfo_H_
