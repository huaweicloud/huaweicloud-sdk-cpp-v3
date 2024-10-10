
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份文件信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupFileResp
    : public ModelBase
{
public:
    BackupFileResp();
    virtual ~BackupFileResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupFileResp members

    /// <summary>
    /// 文件名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 备份文件大小。
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 备份文件最近修改时间。
    /// </summary>

    std::string getFileLastModify() const;
    bool fileLastModifyIsSet() const;
    void unsetfileLastModify();
    void setFileLastModify(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string fileLastModify_;
    bool fileLastModifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupFileResp_H_
