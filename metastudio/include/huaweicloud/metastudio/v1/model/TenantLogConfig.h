
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TenantLogConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TenantLogConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户日志配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TenantLogConfig
    : public ModelBase
{
public:
    TenantLogConfig();
    virtual ~TenantLogConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TenantLogConfig members

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TenantLogConfig_H_
