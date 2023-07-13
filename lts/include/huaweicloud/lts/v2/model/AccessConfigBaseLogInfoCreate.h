
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigBaseLogInfoCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigBaseLogInfoCreate_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入基础日志信息。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigBaseLogInfoCreate
    : public ModelBase
{
public:
    AccessConfigBaseLogInfoCreate();
    virtual ~AccessConfigBaseLogInfoCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessConfigBaseLogInfoCreate members

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigBaseLogInfoCreate_H_
