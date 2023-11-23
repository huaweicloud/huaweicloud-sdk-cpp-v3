
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfigDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfigDetail_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  InstanceLogConfigDetail
    : public ModelBase
{
public:
    InstanceLogConfigDetail();
    virtual ~InstanceLogConfigDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceLogConfigDetail members

    /// <summary>
    /// 日志类型。slow_log表示慢日志。
    /// </summary>

    std::string getLogType() const;
    bool logTypeIsSet() const;
    void unsetlogType();
    void setLogType(const std::string& value);

    /// <summary>
    /// 关联的LTS日志组ID，若enabled为false，表示最近一次关联的LTS日志组ID。
    /// </summary>

    std::string getLtsGroupId() const;
    bool ltsGroupIdIsSet() const;
    void unsetltsGroupId();
    void setLtsGroupId(const std::string& value);

    /// <summary>
    /// 关联的LTS日志流ID，若enabled为false，表示最近一次关联的LTS日志流ID。
    /// </summary>

    std::string getLtsStreamId() const;
    bool ltsStreamIdIsSet() const;
    void unsetltsStreamId();
    void setLtsStreamId(const std::string& value);

    /// <summary>
    /// 关联的LTS日志流是否启用，true代表已启用，false代表未启用。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string logType_;
    bool logTypeIsSet_;
    std::string ltsGroupId_;
    bool ltsGroupIdIsSet_;
    std::string ltsStreamId_;
    bool ltsStreamIdIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfigDetail_H_
