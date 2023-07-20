
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlConfigurationsResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ConfigurationSummary.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGaussMySqlConfigurationsResponse();
    virtual ~ListGaussMySqlConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListGaussMySqlConfigurationsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ConfigurationSummary>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<ConfigurationSummary>& value);

    /// <summary>
    /// 参数模板的总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ConfigurationSummary> configurations_;
    bool configurationsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlConfigurationsResponse_H_
