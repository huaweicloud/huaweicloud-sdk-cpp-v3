
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncRespBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncRespBody_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  SyncRespBody
    : public ModelBase
{
public:
    SyncRespBody();
    virtual ~SyncRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncRespBody members

    /// <summary>
    /// 是否自动触发
    /// </summary>

    std::string getOperationLogId() const;
    bool operationLogIdIsSet() const;
    void unsetoperationLogId();
    void setOperationLogId(const std::string& value);

    /// <summary>
    /// 混合云vault id
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string operationLogId_;
    bool operationLogIdIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncRespBody_H_
