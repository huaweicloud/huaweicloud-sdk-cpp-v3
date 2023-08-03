
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/EngineFlavorData.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListEngineFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEngineFlavorsResponse();
    virtual ~ListEngineFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListEngineFlavorsResponse members

    /// <summary>
    /// 可用的规格列表信息
    /// </summary>

    std::vector<EngineFlavorData>& getOptionalFlavors();
    bool optionalFlavorsIsSet() const;
    void unsetoptionalFlavors();
    void setOptionalFlavors(const std::vector<EngineFlavorData>& value);

    /// <summary>
    /// 可用的规格总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<EngineFlavorData> optionalFlavors_;
    bool optionalFlavorsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListEngineFlavorsResponse_H_
