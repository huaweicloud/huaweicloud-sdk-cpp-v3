
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListPoliciesRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListPoliciesRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListPoliciesRequest
    : public ModelBase
{
public:
    ListPoliciesRequest();
    virtual ~ListPoliciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPoliciesRequest members

    /// <summary>
    /// 策略类型：备份（backup）、复制(replication)
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPoliciesRequest& dereference_from_shared_ptr(std::shared_ptr<ListPoliciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListPoliciesRequest_H_
