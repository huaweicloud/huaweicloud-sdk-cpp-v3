
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AuthorizeBackupDownloadResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AuthorizeBackupDownloadResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  AuthorizeBackupDownloadResponse
    : public ModelBase, public HttpResponse
{
public:
    AuthorizeBackupDownloadResponse();
    virtual ~AuthorizeBackupDownloadResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthorizeBackupDownloadResponse members

    /// <summary>
    /// OBS桶名。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 通过OBS Browser+下载备份文件的路径名称。
    /// </summary>

    std::vector<std::string>& getFilePaths();
    bool filePathsIsSet() const;
    void unsetfilePaths();
    void setFilePaths(const std::vector<std::string>& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::vector<std::string> filePaths_;
    bool filePathsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AuthorizeBackupDownloadResponse_H_
