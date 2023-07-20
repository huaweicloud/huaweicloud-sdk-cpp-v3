
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ListConfigurationsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationsResponse();
    virtual ~ListConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListConfigurationsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 参数模板列表。
    /// </summary>

    std::vector<ListConfigurationsResult>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<ListConfigurationsResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ListConfigurationsResult> configurations_;
    bool configurationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsResponse_H_
