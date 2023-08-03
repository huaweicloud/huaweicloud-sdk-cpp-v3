
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogDownloadLinkResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogDownloadLinkResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAuditlogDownloadLinkResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditlogDownloadLinkResponse();
    virtual ~ShowAuditlogDownloadLinkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAuditlogDownloadLinkResponse members

    /// <summary>
    /// 审计日志下载链接列表。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAuditlogDownloadLinkResponse_H_
