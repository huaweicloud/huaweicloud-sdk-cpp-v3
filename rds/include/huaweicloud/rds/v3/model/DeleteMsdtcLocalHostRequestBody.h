
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteMsdtcLocalHostRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteMsdtcLocalHostRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/MsdtcHostOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteMsdtcLocalHostRequestBody
    : public ModelBase
{
public:
    DeleteMsdtcLocalHostRequestBody();
    virtual ~DeleteMsdtcLocalHostRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteMsdtcLocalHostRequestBody members

    /// <summary>
    /// 删除msdtc中的host
    /// </summary>

    std::vector<MsdtcHostOption>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<MsdtcHostOption>& value);


protected:
    std::vector<MsdtcHostOption> hosts_;
    bool hostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteMsdtcLocalHostRequestBody_H_
