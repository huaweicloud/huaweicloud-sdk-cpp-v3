
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LogStreams.h>
#include <huaweicloud/lts/v2/model/UpdateTransferRequestBody_log_transfer_info.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateTransferRequestBody
    : public ModelBase
{
public:
    UpdateTransferRequestBody();
    virtual ~UpdateTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTransferRequestBody members

    /// <summary>
    /// 日志转储ID
    /// </summary>

    std::string getLogTransferId() const;
    bool logTransferIdIsSet() const;
    void unsetlogTransferId();
    void setLogTransferId(const std::string& value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateTransferRequestBody_log_transfer_info getLogTransferInfo() const;
    bool logTransferInfoIsSet() const;
    void unsetlogTransferInfo();
    void setLogTransferInfo(const UpdateTransferRequestBody_log_transfer_info& value);

    /// <summary>
    /// 日志流信息
    /// </summary>

    std::vector<LogStreams>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<LogStreams>& value);


protected:
    std::string logTransferId_;
    bool logTransferIdIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    UpdateTransferRequestBody_log_transfer_info logTransferInfo_;
    bool logTransferInfoIsSet_;
    std::vector<LogStreams> logStreams_;
    bool logStreamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_H_
