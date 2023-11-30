
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowUpgradeDbMajorVersionStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUpgradeDbMajorVersionStatusResponse();
    virtual ~ShowUpgradeDbMajorVersionStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUpgradeDbMajorVersionStatusResponse members

    /// <summary>
    /// 实例大版本升级状态 \&quot; running\&quot;：预检查或大版本升级进行中 \&quot; success\&quot;：预检查或大版本升级成功 \&quot; failed\&quot;：预检查或大版本升级失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 目标版本。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 检查成功时，检查报告到期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。 该字段仅在action为check时返回。
    /// </summary>

    std::string getCheckExpirationTime() const;
    bool checkExpirationTimeIsSet() const;
    void unsetcheckExpirationTime();
    void setCheckExpirationTime(const std::string& value);

    /// <summary>
    /// 预检查或升级报告信息。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string checkExpirationTime_;
    bool checkExpirationTimeIsSet_;
    std::string detail_;
    bool detailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowUpgradeDbMajorVersionStatusResponse_H_
