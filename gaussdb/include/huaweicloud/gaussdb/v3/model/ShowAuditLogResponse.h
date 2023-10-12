
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAuditLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditLogResponse();
    virtual ~ShowAuditLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogResponse members

    /// <summary>
    /// 全量SQL开关状态。 取值： - ON，表示开启 - OFF，表示关闭
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);


protected:
    std::string switchStatus_;
    bool switchStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAuditLogResponse_H_
