
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RotateAuditLogRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RotateAuditLogRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RotateAuditLogRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RotateAuditLogRequest
    : public ModelBase
{
public:
    RotateAuditLogRequest();
    virtual ~RotateAuditLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RotateAuditLogRequest members

    /// <summary>
    /// 参数解释：  实例id  约束限制：  不涉及。  取值范围：  不涉及。  默认取值：  不涉及
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 参数解释：  请求语言类型。  约束限制：  不涉及。  取值范围：  en-us zh-cn 默认取值： en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RotateAuditLogRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RotateAuditLogRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    RotateAuditLogRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RotateAuditLogRequest& dereference_from_shared_ptr(std::shared_ptr<RotateAuditLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RotateAuditLogRequest_H_
