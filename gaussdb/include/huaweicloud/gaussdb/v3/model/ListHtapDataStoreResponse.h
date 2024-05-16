
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapDataStoreResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapDataStoreResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SrDataStores_datastores.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapDataStoreResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHtapDataStoreResponse();
    virtual ~ListHtapDataStoreResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapDataStoreResponse members

    /// <summary>
    /// 数据库信息列表。
    /// </summary>

    std::vector<SrDataStores_datastores>& getDatastores();
    bool datastoresIsSet() const;
    void unsetdatastores();
    void setDatastores(const std::vector<SrDataStores_datastores>& value);


protected:
    std::vector<SrDataStores_datastores> datastores_;
    bool datastoresIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapDataStoreResponse_H_
