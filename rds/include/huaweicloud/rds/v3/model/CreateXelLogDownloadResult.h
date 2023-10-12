
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateXelLogDownloadResult
    : public ModelBase
{
public:
    CreateXelLogDownloadResult();
    virtual ~CreateXelLogDownloadResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateXelLogDownloadResult members

    /// <summary>
    /// 下载文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 生成链接的生成状态。FINISH，表示下载链接已经生成完成。EXPORTING，，表示正在生成文件。FAILED，表示存在日志文件准备失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 日志大小，单位：KB
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 下载链接,链接的生成状态为EXPORTING，或者FAILED不予返回
    /// </summary>

    std::string getFileLink() const;
    bool fileLinkIsSet() const;
    void unsetfileLink();
    void setFileLink(const std::string& value);

    /// <summary>
    /// 生成时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string fileLink_;
    bool fileLinkIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateXelLogDownloadResult_H_
