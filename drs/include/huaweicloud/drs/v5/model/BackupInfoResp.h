
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfoResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfoResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/BackupFileResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份文件信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupInfoResp
    : public ModelBase
{
public:
    BackupInfoResp();
    virtual ~BackupInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupInfoResp members

    /// <summary>
    /// 备份文件来源，包括OBS和RDS两种。
    /// </summary>

    std::string getFileSource() const;
    bool fileSourceIsSet() const;
    void unsetfileSource();
    void setFileSource(const std::string& value);

    /// <summary>
    /// OBS桶名称。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 备份文件列表。
    /// </summary>

    std::vector<BackupFileResp>& getFileInfo();
    bool fileInfoIsSet() const;
    void unsetfileInfo();
    void setFileInfo(const std::vector<BackupFileResp>& value);


protected:
    std::string fileSource_;
    bool fileSourceIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::vector<BackupFileResp> fileInfo_;
    bool fileInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupInfoResp_H_
