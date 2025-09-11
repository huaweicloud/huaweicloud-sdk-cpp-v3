
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditRuleSqlResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditRuleSqlResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  DeleteAuditRuleSqlResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteAuditRuleSqlResponse();
    virtual ~DeleteAuditRuleSqlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAuditRuleSqlResponse members

    /// <summary>
    /// 状态  - SUCCESS:成功  - FAILED:失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DeleteAuditRuleSqlResponse_H_
