
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapStorageType_storage_type.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapStorageTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHtapStorageTypeResponse();
    virtual ~ListHtapStorageTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapStorageTypeResponse members

    /// <summary>
    /// 存储类型。
    /// </summary>

    std::vector<HtapStorageType_storage_type>& getStorageType();
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::vector<HtapStorageType_storage_type>& value);


protected:
    std::vector<HtapStorageType_storage_type> storageType_;
    bool storageTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapStorageTypeResponse_H_
