
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AttackDetailVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowAttackDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAttackDetailResponse();
    virtual ~ShowAttackDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAttackDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    AttackDetailVO getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const AttackDetailVO& value);


protected:
    AttackDetailVO data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackDetailResponse_H_
