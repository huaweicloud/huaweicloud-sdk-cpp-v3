
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListFlavorsResizeResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListFlavorsResizeResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ComputeFlavorGroup.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListFlavorsResizeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlavorsResizeResponse();
    virtual ~ListFlavorsResizeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlavorsResizeResponse members

    /// <summary>
    /// 规格组列表  normal：通用增强型。 normal2：通用增强Ⅱ型。 armFlavors：鲲鹏通用增强型。 dedicicateNormal（dedicatedNormalLocalssd）：x86独享型。 armLocalssd：鲲鹏通用型。 normalLocalssd：x86通用型。 general：通用型。 dedicated 对于PostgreSQL引擎：独享型
    /// </summary>

    std::vector<ComputeFlavorGroup>& getFlavorGroups();
    bool flavorGroupsIsSet() const;
    void unsetflavorGroups();
    void setFlavorGroups(const std::vector<ComputeFlavorGroup>& value);


protected:
    std::vector<ComputeFlavorGroup> flavorGroups_;
    bool flavorGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListFlavorsResizeResponse_H_
