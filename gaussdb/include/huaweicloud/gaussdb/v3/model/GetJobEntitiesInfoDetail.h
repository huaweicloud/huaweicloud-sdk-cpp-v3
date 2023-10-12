
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobEntitiesInfoDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobEntitiesInfoDetail_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 根据不同的任务，显示不同的内容。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GetJobEntitiesInfoDetail
    : public ModelBase
{
public:
    GetJobEntitiesInfoDetail();
    virtual ~GetJobEntitiesInfoDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobEntitiesInfoDetail members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobEntitiesInfoDetail_H_
