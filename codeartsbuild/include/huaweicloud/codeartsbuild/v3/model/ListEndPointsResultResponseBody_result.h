
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListEndPointsResultResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListEndPointsResultResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/EndPointResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListEndPointsResultResponseBody_result
    : public ModelBase
{
public:
    ListEndPointsResultResponseBody_result();
    virtual ~ListEndPointsResultResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEndPointsResultResponseBody_result members

    /// <summary>
    /// **参数解释**： 私有仓库列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<EndPointResponse>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndPointResponse>& value);

    /// <summary>
    /// **参数解释**： 返回数据量。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<EndPointResponse> endpoints_;
    bool endpointsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListEndPointsResultResponseBody_result_H_
