
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_log_transfer_info_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_log_transfer_info_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/TransferDetail.h>
#include <huaweicloud/lts/v2/model/CreateTransferRequestBody_log_transfer_info_log_agency_transfer.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTransferRequestBody_log_transfer_info
    : public ModelBase
{
public:
    CreateTransferRequestBody_log_transfer_info();
    virtual ~CreateTransferRequestBody_log_transfer_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTransferRequestBody_log_transfer_info members

    /// <summary>
    /// 日志转储类型。OBS指OBS日志转储，DIS指DIS日志转储，DMS指DMS日志转储
    /// </summary>

    std::string getLogTransferType() const;
    bool logTransferTypeIsSet() const;
    void unsetlogTransferType();
    void setLogTransferType(const std::string& value);

    /// <summary>
    /// 日志转储方式。cycle是指周期性转储，realTime是指实时转储。OBS转储只支持\&quot;cycle\&quot;，DIS转储和DMS转储只支持\&quot;realTime\&quot;。
    /// </summary>

    std::string getLogTransferMode() const;
    bool logTransferModeIsSet() const;
    void unsetlogTransferMode();
    void setLogTransferMode(const std::string& value);

    /// <summary>
    /// 日志转储格式。只支持\&quot;RAW\&quot;, \&quot;JSON\&quot;。RAW是指原始日志格式，JSON是指JSON日志格式。OBS转储和DIS转储支持JSON和RAW，DMS转储仅支持RAW
    /// </summary>

    std::string getLogStorageFormat() const;
    bool logStorageFormatIsSet() const;
    void unsetlogStorageFormat();
    void setLogStorageFormat(const std::string& value);

    /// <summary>
    /// 日志转储状态，只支持\&quot;ENABLE\&quot;,\&quot;DISABLE\&quot;,\&quot;EXCEPTION\&quot;。ENABLE是指日志转储开启状态，DISABLE是指日志转储关闭状态，EXCEPTION是指日志转储异常状态
    /// </summary>

    std::string getLogTransferStatus() const;
    bool logTransferStatusIsSet() const;
    void unsetlogTransferStatus();
    void setLogTransferStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTransferRequestBody_log_transfer_info_log_agency_transfer getLogAgencyTransfer() const;
    bool logAgencyTransferIsSet() const;
    void unsetlogAgencyTransfer();
    void setLogAgencyTransfer(const CreateTransferRequestBody_log_transfer_info_log_agency_transfer& value);

    /// <summary>
    /// 
    /// </summary>

    TransferDetail getLogTransferDetail() const;
    bool logTransferDetailIsSet() const;
    void unsetlogTransferDetail();
    void setLogTransferDetail(const TransferDetail& value);


protected:
    std::string logTransferType_;
    bool logTransferTypeIsSet_;
    std::string logTransferMode_;
    bool logTransferModeIsSet_;
    std::string logStorageFormat_;
    bool logStorageFormatIsSet_;
    std::string logTransferStatus_;
    bool logTransferStatusIsSet_;
    CreateTransferRequestBody_log_transfer_info_log_agency_transfer logAgencyTransfer_;
    bool logAgencyTransferIsSet_;
    TransferDetail logTransferDetail_;
    bool logTransferDetailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferRequestBody_log_transfer_info_H_
