
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetFileInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetFileInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/FileExtraMeta.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 文件信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AssetFileInfo
    : public ModelBase
{
public:
    AssetFileInfo();
    virtual ~AssetFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetFileInfo members

    /// <summary>
    /// 文件ID。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 文件名创建文件时候不区分大小写，最大长度256，最小长度1。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件内容MD5值，固定24位。
    /// </summary>

    std::string getFileMd5() const;
    bool fileMd5IsSet() const;
    void unsetfileMd5();
    void setFileMd5(const std::string& value);

    /// <summary>
    /// 文件总的大小，最小1，最大5368709120。
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// 文件类型（默认提取文件后缀）。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 文件在资产中的分类。每种资产类型包含的文件分类不同。 * MAIN：主文件 * COVER：封面文件 * PAGE：内容页图片 * SAMPLE：样例音频 * OTHER：其他文件 * TEMPORARY：临时文件夹（用于文件替换时上传新文件） * PACKAGE：打包后的资产文件 &gt; * 资产类型为PPT时，包含MAIN、COVER、PAGE和OTHER &gt; * 资产类型为VOICE_MODEL时，包含MAIN、SAMPLE(样例音频文件)和OTHER &gt; * 资产类型为HUMAN_MODEL_2D时，包含MAIN、COVER、SAMPLE(动作样例)和OTHER(遮罩文件) &gt; * 资产类型为BUSINESS_CARD_TEMPLET时，包含MAIN和COVER(名片效果图)
    /// </summary>

    std::string getAssetFileCategory() const;
    bool assetFileCategoryIsSet() const;
    void unsetassetFileCategory();
    void setAssetFileCategory(const std::string& value);

    /// <summary>
    /// 文件下载URL，有效期为24小时。
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);

    /// <summary>
    /// 文件状态枚举: * CREATING：文件上传中 * CREATED：文件已上传（自动审核通过） * FAILED：文件上传失败 * CANCELLED：文件上传已取消 * DELETING：文件删除中 * DELETED：文件已删除 * UPLOADED：文件已上传（尚未审核） * REVIEW：人工审核（文件已上传） * BLOCK：冻结
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 冻结原因编号。
    /// </summary>

    std::string getBlockReasonCode() const;
    bool blockReasonCodeIsSet() const;
    void unsetblockReasonCode();
    void setBlockReasonCode(const std::string& value);

    /// <summary>
    /// 审核失败原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FileExtraMeta getFileExtraMeta() const;
    bool fileExtraMetaIsSet() const;
    void unsetfileExtraMeta();
    void setFileExtraMeta(const FileExtraMeta& value);


protected:
    std::string fileId_;
    bool fileIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileMd5_;
    bool fileMd5IsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string assetFileCategory_;
    bool assetFileCategoryIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string blockReasonCode_;
    bool blockReasonCodeIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    FileExtraMeta fileExtraMeta_;
    bool fileExtraMetaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AssetFileInfo_H_
