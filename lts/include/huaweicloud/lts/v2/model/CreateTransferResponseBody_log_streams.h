
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_streams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_streams_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTransferResponseBody_log_streams
    : public ModelBase
{
public:
    CreateTransferResponseBody_log_streams();
    virtual ~CreateTransferResponseBody_log_streams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTransferResponseBody_log_streams members

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_streams_H_
