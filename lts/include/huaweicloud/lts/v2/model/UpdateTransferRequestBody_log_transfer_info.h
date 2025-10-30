
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_log_transfer_info_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_log_transfer_info_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/Log_transfer_detail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志转储信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateTransferRequestBody_log_transfer_info
    : public ModelBase
{
public:
    UpdateTransferRequestBody_log_transfer_info();
    virtual ~UpdateTransferRequestBody_log_transfer_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTransferRequestBody_log_transfer_info members

    /// <summary>
    /// 日志转储格式。只支持\&quot;RAW\&quot;, \&quot;JSON\&quot;。RAW是指原始日志格式，JSON是指JSON日志格式。OBS转储和DIS转储支持JSON和RAW，DMS转储仅支持RAW
    /// </summary>

    std::string getLogStorageFormat() const;
    bool logStorageFormatIsSet() const;
    void unsetlogStorageFormat();
    void setLogStorageFormat(const std::string& value);

    /// <summary>
    /// 日志转储状态，ENABLE是指日志转储开启状态，DISABLE是指日志转储关闭状态，EXCEPTION是指日志转储异常状态
    /// </summary>

    std::string getLogTransferStatus() const;
    bool logTransferStatusIsSet() const;
    void unsetlogTransferStatus();
    void setLogTransferStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Log_transfer_detail getLogTransferDetail() const;
    bool logTransferDetailIsSet() const;
    void unsetlogTransferDetail();
    void setLogTransferDetail(const Log_transfer_detail& value);


protected:
    std::string logStorageFormat_;
    bool logStorageFormatIsSet_;
    std::string logTransferStatus_;
    bool logTransferStatusIsSet_;
    Log_transfer_detail logTransferDetail_;
    bool logTransferDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateTransferRequestBody_log_transfer_info_H_
