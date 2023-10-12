
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateTransferRequestBody_log_transfer_info.h>
#include <string>
#include <huaweicloud/lts/v2/model/CreateTransferRequestBody_log_streams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建OBS转储，DIS转储，DMS转储
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTransferRequestBody
    : public ModelBase
{
public:
    CreateTransferRequestBody();
    virtual ~CreateTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTransferRequestBody members

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID集合
    /// </summary>

    std::vector<CreateTransferRequestBody_log_streams>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<CreateTransferRequestBody_log_streams>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTransferRequestBody_log_transfer_info getLogTransferInfo() const;
    bool logTransferInfoIsSet() const;
    void unsetlogTransferInfo();
    void setLogTransferInfo(const CreateTransferRequestBody_log_transfer_info& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::vector<CreateTransferRequestBody_log_streams> logStreams_;
    bool logStreamsIsSet_;
    CreateTransferRequestBody_log_transfer_info logTransferInfo_;
    bool logTransferInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_H_
