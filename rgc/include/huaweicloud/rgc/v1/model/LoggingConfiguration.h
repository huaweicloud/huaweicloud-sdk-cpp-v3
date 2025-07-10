
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingConfiguration_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingConfiguration_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rgc/v1/model/LoggingBucketBaseline.h>
#include <huaweicloud/rgc/v1/model/AccessLoggingBucketBaseline.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Landing Zone日志配置。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  LoggingConfiguration
    : public ModelBase
{
public:
    LoggingConfiguration();
    virtual ~LoggingConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LoggingConfiguration members

    /// <summary>
    /// 日志桶名称。
    /// </summary>

    std::string getLoggingBucketName() const;
    bool loggingBucketNameIsSet() const;
    void unsetloggingBucketName();
    void setLoggingBucketName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AccessLoggingBucketBaseline getAccessLoggingBucket() const;
    bool accessLoggingBucketIsSet() const;
    void unsetaccessLoggingBucket();
    void setAccessLoggingBucket(const AccessLoggingBucketBaseline& value);

    /// <summary>
    /// 
    /// </summary>

    LoggingBucketBaseline getLoggingBucket() const;
    bool loggingBucketIsSet() const;
    void unsetloggingBucket();
    void setLoggingBucket(const LoggingBucketBaseline& value);


protected:
    std::string loggingBucketName_;
    bool loggingBucketNameIsSet_;
    AccessLoggingBucketBaseline accessLoggingBucket_;
    bool accessLoggingBucketIsSet_;
    LoggingBucketBaseline loggingBucket_;
    bool loggingBucketIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_LoggingConfiguration_H_
