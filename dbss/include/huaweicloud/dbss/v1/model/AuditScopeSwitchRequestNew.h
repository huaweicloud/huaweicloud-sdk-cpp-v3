
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditScopeSwitchRequestNew_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditScopeSwitchRequestNew_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditScopeSwitchRequestNew
    : public ModelBase
{
public:
    AuditScopeSwitchRequestNew();
    virtual ~AuditScopeSwitchRequestNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditScopeSwitchRequestNew members

    /// <summary>
    /// 审计范围ID列表
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 状态  - OFF： 关闭  - ON： 启用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditScopeSwitchRequestNew_H_
