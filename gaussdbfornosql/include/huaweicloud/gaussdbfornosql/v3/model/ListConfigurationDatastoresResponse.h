
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationDatastoresResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationDatastoresResponse_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/DataStoreList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListConfigurationDatastoresResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationDatastoresResponse();
    virtual ~ListConfigurationDatastoresResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListConfigurationDatastoresResponse members

    /// <summary>
    /// 引擎信息。
    /// </summary>

    std::vector<DataStoreList>& getDatastores();
    bool datastoresIsSet() const;
    void unsetdatastores();
    void setDatastores(const std::vector<DataStoreList>& value);


protected:
    std::vector<DataStoreList> datastores_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListConfigurationDatastoresResponse_H_
