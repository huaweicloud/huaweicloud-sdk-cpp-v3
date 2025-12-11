
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDbRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDbRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SwitchAuditDbRequest
    : public ModelBase
{
public:
    SwitchAuditDbRequest();
    virtual ~SwitchAuditDbRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchAuditDbRequest members

    /// <summary>
    /// 数据库ID,可在查询数据库列表接口的ID字段获取。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 开关状态 - ON:开启 - OFF:关闭
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否关闭LTS审计,DWS数据库场景使用。若用户未选择关闭LTS审计,则不做操作。 - 1 : 是 - 0 或 其它: 保持原状
    /// </summary>

    int32_t getLtsAuditSwitch() const;
    bool ltsAuditSwitchIsSet() const;
    void unsetltsAuditSwitch();
    void setLtsAuditSwitch(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t ltsAuditSwitch_;
    bool ltsAuditSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SwitchAuditDbRequest_H_
