
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/FileInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListAuditLogDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditLogDownloadLinkResponse();
    virtual ~ListAuditLogDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditLogDownloadLinkResponse members

    /// <summary>
    /// 获取到的全量SQL文件信息。
    /// </summary>

    std::vector<FileInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<FileInfo>& value);


protected:
    std::vector<FileInfo> files_;
    bool filesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkResponse_H_
