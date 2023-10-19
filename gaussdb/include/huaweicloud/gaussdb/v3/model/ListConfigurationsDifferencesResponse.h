
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ParamGroupParameterDifferences.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListConfigurationsDifferencesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationsDifferencesResponse();
    virtual ~ListConfigurationsDifferencesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsDifferencesResponse members

    /// <summary>
    /// 参数之间的区别集合。
    /// </summary>

    std::vector<ParamGroupParameterDifferences>& getDifferences();
    bool differencesIsSet() const;
    void unsetdifferences();
    void setDifferences(const std::vector<ParamGroupParameterDifferences>& value);


protected:
    std::vector<ParamGroupParameterDifferences> differences_;
    bool differencesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListConfigurationsDifferencesResponse_H_
