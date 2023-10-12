
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatastoresResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatastoresResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/LDatastore.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDatastoresResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatastoresResponse();
    virtual ~ListDatastoresResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatastoresResponse members

    /// <summary>
    /// 数据库引擎信息。
    /// </summary>

    std::vector<LDatastore>& getDataStores();
    bool dataStoresIsSet() const;
    void unsetdataStores();
    void setDataStores(const std::vector<LDatastore>& value);


protected:
    std::vector<LDatastore> dataStores_;
    bool dataStoresIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDatastoresResponse_H_
