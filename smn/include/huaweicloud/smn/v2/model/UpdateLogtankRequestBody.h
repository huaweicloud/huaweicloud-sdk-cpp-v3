
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankRequestBody_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新云日志信息请求体
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateLogtankRequestBody
    : public ModelBase
{
public:
    UpdateLogtankRequestBody();
    virtual ~UpdateLogtankRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateLogtankRequestBody members

    /// <summary>
    /// 云日志服务日志组ID。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 云日志服务日志流ID。
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

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateLogtankRequestBody_H_
