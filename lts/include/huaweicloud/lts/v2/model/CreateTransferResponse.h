
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateTransferResponseBody_log_streams.h>
#include <string>
#include <huaweicloud/lts/v2/model/CreateTransferResponseBody_log_transfer_info.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTransferResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTransferResponse();
    virtual ~CreateTransferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTransferResponse members

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流ID集合
    /// </summary>

    std::vector<CreateTransferResponseBody_log_streams>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<CreateTransferResponseBody_log_streams>& value);

    /// <summary>
    /// 日志转储ID
    /// </summary>

    std::string getLogTransferId() const;
    bool logTransferIdIsSet() const;
    void unsetlogTransferId();
    void setLogTransferId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTransferResponseBody_log_transfer_info getLogTransferInfo() const;
    bool logTransferInfoIsSet() const;
    void unsetlogTransferInfo();
    void setLogTransferInfo(const CreateTransferResponseBody_log_transfer_info& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::vector<CreateTransferResponseBody_log_streams> logStreams_;
    bool logStreamsIsSet_;
    std::string logTransferId_;
    bool logTransferIdIsSet_;
    CreateTransferResponseBody_log_transfer_info logTransferInfo_;
    bool logTransferInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponse_H_
