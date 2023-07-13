
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SyncParam.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  SyncReq
    : public ModelBase
{
public:
    SyncReq();
    virtual ~SyncReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SyncReq members

    /// <summary>
    /// 
    /// </summary>

    SyncParam getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(const SyncParam& value);


protected:
    SyncParam sync_;
    bool syncIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_SyncReq_H_
