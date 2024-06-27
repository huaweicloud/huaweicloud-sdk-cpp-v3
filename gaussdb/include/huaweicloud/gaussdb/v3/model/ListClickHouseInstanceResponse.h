
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListClickHouseInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClickHouseInstanceResponse();
    virtual ~ListClickHouseInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClickHouseInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    ChInstancesInfoRsponse_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const ChInstancesInfoRsponse_instance& value);


protected:
    ChInstancesInfoRsponse_instance instance_;
    bool instanceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceResponse_H_
