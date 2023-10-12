
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupDownloadLinkResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/GetBackupDownloadLink_files.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowBackupDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupDownloadLinkResponse();
    virtual ~ShowBackupDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBackupDownloadLinkResponse members

    /// <summary>
    /// 备份文件信息。
    /// </summary>

    std::vector<GetBackupDownloadLink_files>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<GetBackupDownloadLink_files>& value);

    /// <summary>
    /// OBS桶名。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);


protected:
    std::vector<GetBackupDownloadLink_files> files_;
    bool filesIsSet_;
    std::string bucket_;
    bool bucketIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowBackupDownloadLinkResponse_H_
