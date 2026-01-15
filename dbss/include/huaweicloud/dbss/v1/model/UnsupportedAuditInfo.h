
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnsupportedAuditInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnsupportedAuditInfo_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  UnsupportedAuditInfo
    : public ModelBase
{
public:
    UnsupportedAuditInfo();
    virtual ~UnsupportedAuditInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnsupportedAuditInfo members

    /// <summary>
    /// 实例版本
    /// </summary>

    std::string getAuditVersion() const;
    bool auditVersionIsSet() const;
    void unsetauditVersion();
    void setAuditVersion(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getServerName() const;
    bool serverNameIsSet() const;
    void unsetserverName();
    void setServerName(const std::string& value);


protected:
    std::string auditVersion_;
    bool auditVersionIsSet_;
    std::string serverName_;
    bool serverNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UnsupportedAuditInfo_H_
