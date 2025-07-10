
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FilesCreateReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FilesCreateReq_H_


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
/// 创建文件请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  FilesCreateReq
    : public ModelBase
{
public:
    FilesCreateReq();
    virtual ~FilesCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FilesCreateReq members

    /// <summary>
    /// **参数解释**： 文件名。 **约束限制**： 不区分大小写。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件内容MD5值。按照RFC 1864标准计算出消息体的MD5摘要字符串，即消息体128-bit MD5值经过base64编码后得到的字符串。 md5值获取详情请参考[使用Java代码生成文件内容的MD5值](metastudio_02_0052.xml)。 **约束限制**： 不涉及 **取值范围**： 字符长度24位。 **默认取值**： 不涉及
    /// </summary>

    std::string getFileMd5() const;
    bool fileMd5IsSet() const;
    void unsetfileMd5();
    void setFileMd5(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件总的大小。 **约束限制**： 最大支持5GB  **默认取值**： 不涉及
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// **参数解释**： 文件类型 **约束限制**： 不涉及 **取值范围**： 字符长度1-64位。 **默认取值**： 默认提取文件后缀。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// **参数解释**： 本平台资产ID。 **约束限制**： 不涉及 **取值范围**： 字符长度1-64位。 **默认取值**： 不涉及
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件在资产中的分类。每种资产类型包含的文件分类不同。 * MAIN：主文件 * COVER：封面文件 * PAGE：PPT内容页图片文件 * SAMPLE：样例音频或样例动作文件 * OTHER：其他文件 * TEMPORARY：临时文件夹（用于文件替换时上传新文件） * PACKAGE：打包后的资产文件 &gt; * 资产类型为PPT时，包含MAIN、COVER、PAGE和OTHER &gt; * 资产类型为VOICE_MODEL时，包含MAIN、SAMPLE(样例音频文件)和OTHER &gt; * 资产类型为HUMAN_MODEL_2D时，包含MAIN、COVER、SAMPLE(动作样例)和OTHER &gt; * 资产类型为BUSINESS_CARD_TEMPLET时，包含MAIN和COVER(名片效果图) &gt; * 资产类型为IMAGE时，包含MAIN &gt; * 资产类型为VIDEO时，包含MAIN、COVER  **约束限制**： 一个资产中MAIN文件只有一个，且必须有一个 **取值范围**： 字符长度1-128位。 **默认取值**： 不涉及
    /// </summary>

    std::string getAssetFileCategory() const;
    bool assetFileCategoryIsSet() const;
    void unsetassetFileCategory();
    void setAssetFileCategory(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileMd5_;
    bool fileMd5IsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetFileCategory_;
    bool assetFileCategoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FilesCreateReq_H_
