
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ChangeToPeriod.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ChangeVaultChargeModeRequest
    : public ModelBase
{
public:
    ChangeVaultChargeModeRequest();
    virtual ~ChangeVaultChargeModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVaultChargeModeRequest members

    /// <summary>
    /// 
    /// </summary>

    ChangeToPeriod getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeToPeriod& value);


protected:
    ChangeToPeriod body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeVaultChargeModeRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeVaultChargeModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeVaultChargeModeRequest_H_
