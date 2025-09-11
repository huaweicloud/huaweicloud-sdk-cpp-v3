
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupRiskTemplatesResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupRiskTemplatesResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RiskBackupTemplateBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditBackupRiskTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditBackupRiskTemplatesResponse();
    virtual ~ListAuditBackupRiskTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditBackupRiskTemplatesResponse members

    /// <summary>
    /// 配置列表
    /// </summary>

    std::vector<RiskBackupTemplateBean>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<RiskBackupTemplateBean>& value);


protected:
    std::vector<RiskBackupTemplateBean> templates_;
    bool templatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupRiskTemplatesResponse_H_
