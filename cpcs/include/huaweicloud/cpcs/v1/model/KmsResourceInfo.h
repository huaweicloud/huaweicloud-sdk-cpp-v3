
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsResourceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsResourceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/KmsInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  KmsResourceInfo
    : public ModelBase
{
public:
    KmsResourceInfo();
    virtual ~KmsResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KmsResourceInfo members

    /// <summary>
    /// KMS密钥数量
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    KmsInfo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const KmsInfo& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    KmsInfo result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_KmsResourceInfo_H_
