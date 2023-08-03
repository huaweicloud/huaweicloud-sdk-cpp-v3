
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GenerateAuditlogDownloadLinkRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GenerateAuditlogDownloadLinkRequest_H_

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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GenerateAuditlogDownloadLinkRequest
    : public ModelBase
{
public:
    GenerateAuditlogDownloadLinkRequest();
    virtual ~GenerateAuditlogDownloadLinkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GenerateAuditlogDownloadLinkRequest members

    /// <summary>
    /// 审计日志ID列表，限制50条以内。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GenerateAuditlogDownloadLinkRequest_H_
