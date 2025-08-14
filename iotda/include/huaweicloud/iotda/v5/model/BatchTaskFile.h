
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTaskFile_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTaskFile_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询上传的批量任务文件结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  BatchTaskFile
    : public ModelBase
{
public:
    BatchTaskFile();
    virtual ~BatchTaskFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchTaskFile members

    /// <summary>
    /// 上传的批量任务文件ID，由平台自动生成。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 上传的批量任务文件名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 在物联网平台上传文件的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getUploadTime() const;
    bool uploadTimeIsSet() const;
    void unsetuploadTime();
    void setUploadTime(const std::string& value);


protected:
    std::string fileId_;
    bool fileIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string uploadTime_;
    bool uploadTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_BatchTaskFile_H_
