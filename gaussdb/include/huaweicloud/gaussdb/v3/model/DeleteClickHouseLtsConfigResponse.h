
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteClickHouseLtsConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteClickHouseLtsConfigResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteClickHouseLtsConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteClickHouseLtsConfigResponse();
    virtual ~DeleteClickHouseLtsConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteClickHouseLtsConfigResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteClickHouseLtsConfigResponse_H_
