
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LargeFilesCreateReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LargeFilesCreateReq_H_


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
/// 创建大文件请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LargeFilesCreateReq
    : public ModelBase
{
public:
    LargeFilesCreateReq();
    virtual ~LargeFilesCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LargeFilesCreateReq members

    /// <summary>
    /// 文件名，不区分大小写，最大长度256，最小长度1。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件总的大小，最小1，最大536870912000。
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
    /// 资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 文件在资产中的分类。每种资产类型包含的文件分类不同。 * MAIN：主文件 * OTHER：其他文件 * PACKAGE：打包后的资产文件
    /// </summary>

    std::string getAssetFileCategory() const;
    bool assetFileCategoryIsSet() const;
    void unsetassetFileCategory();
    void setAssetFileCategory(const std::string& value);

    /// <summary>
    /// ORI4K文件分段上传数量，默认值为1
    /// </summary>

    int32_t getFileMultipartCount() const;
    bool fileMultipartCountIsSet() const;
    void unsetfileMultipartCount();
    void setFileMultipartCount(int32_t value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetFileCategory_;
    bool assetFileCategoryIsSet_;
    int32_t fileMultipartCount_;
    bool fileMultipartCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LargeFilesCreateReq_H_
