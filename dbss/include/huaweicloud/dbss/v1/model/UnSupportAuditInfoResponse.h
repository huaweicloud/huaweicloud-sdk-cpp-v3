
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnSupportAuditInfoResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnSupportAuditInfoResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/UnSupportAuditInfo.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  UnSupportAuditInfoResponse
    : public ModelBase
{
public:
    UnSupportAuditInfoResponse();
    virtual ~UnSupportAuditInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnSupportAuditInfoResponse members

    /// <summary>
    /// 审计信息
    /// </summary>

    std::vector<UnSupportAuditInfo>& getAuditInfos();
    bool auditInfosIsSet() const;
    void unsetauditInfos();
    void setAuditInfos(const std::vector<UnSupportAuditInfo>& value);

    /// <summary>
    /// 支持的版本
    /// </summary>

    std::string getSupportVersion() const;
    bool supportVersionIsSet() const;
    void unsetsupportVersion();
    void setSupportVersion(const std::string& value);


protected:
    std::vector<UnSupportAuditInfo> auditInfos_;
    bool auditInfosIsSet_;
    std::string supportVersion_;
    bool supportVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnSupportAuditInfoResponse_H_
