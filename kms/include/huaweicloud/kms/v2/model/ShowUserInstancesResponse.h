
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserInstancesResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserInstancesResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ShowUserInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserInstancesResponse();
    virtual ~ShowUserInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserInstancesResponse members

    /// <summary>
    /// 非默认用户主密钥个数。
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);


protected:
    int32_t instanceNum_;
    bool instanceNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowUserInstancesResponse_H_
