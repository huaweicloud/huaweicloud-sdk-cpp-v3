
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingConfig_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingConfig_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LogMappingStreamInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LogMappingConfig
    : public ModelBase
{
public:
    LogMappingConfig();
    virtual ~LogMappingConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LogMappingConfig members

    /// <summary>
    /// 源日志组ID
    /// </summary>

    std::string getSourceLogGroupId() const;
    bool sourceLogGroupIdIsSet() const;
    void unsetsourceLogGroupId();
    void setSourceLogGroupId(const std::string& value);

    /// <summary>
    /// 目标日志组ID
    /// </summary>

    std::string getTargetLogGroupId() const;
    bool targetLogGroupIdIsSet() const;
    void unsettargetLogGroupId();
    void setTargetLogGroupId(const std::string& value);

    /// <summary>
    /// 目标日志组名称
    /// </summary>

    std::string getTargetLogGroupName() const;
    bool targetLogGroupNameIsSet() const;
    void unsettargetLogGroupName();
    void setTargetLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流配置
    /// </summary>

    std::vector<LogMappingStreamInfo>& getLogStreamConfig();
    bool logStreamConfigIsSet() const;
    void unsetlogStreamConfig();
    void setLogStreamConfig(const std::vector<LogMappingStreamInfo>& value);


protected:
    std::string sourceLogGroupId_;
    bool sourceLogGroupIdIsSet_;
    std::string targetLogGroupId_;
    bool targetLogGroupIdIsSet_;
    std::string targetLogGroupName_;
    bool targetLogGroupNameIsSet_;
    std::vector<LogMappingStreamInfo> logStreamConfig_;
    bool logStreamConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LogMappingConfig_H_
