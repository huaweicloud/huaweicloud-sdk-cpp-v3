
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogDownloadLinkResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAuditLogDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditLogDownloadLinkResponse();
    virtual ~ShowAuditLogDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogDownloadLinkResponse members

    /// <summary>
    /// **参数解释**：  审计日志下载链接列表，链接有效时间5分钟。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<std::string>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<std::string>& value);


protected:
    std::vector<std::string> links_;
    bool linksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogDownloadLinkResponse_H_
