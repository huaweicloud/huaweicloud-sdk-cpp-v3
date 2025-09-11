
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditUpgradeStatusResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditUpgradeStatusResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditUpgradeStatus.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditUpgradeStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditUpgradeStatusResponse();
    virtual ~ShowAuditUpgradeStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditUpgradeStatusResponse members

    /// <summary>
    /// 实例升级信息
    /// </summary>

    std::vector<AuditUpgradeStatus>& getAuditUpgradeInfos();
    bool auditUpgradeInfosIsSet() const;
    void unsetauditUpgradeInfos();
    void setAuditUpgradeInfos(const std::vector<AuditUpgradeStatus>& value);


protected:
    std::vector<AuditUpgradeStatus> auditUpgradeInfos_;
    bool auditUpgradeInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditUpgradeStatusResponse_H_
