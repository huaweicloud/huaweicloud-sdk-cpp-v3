
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResources_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResources_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/BillResourceType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费资源信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BillResources
    : public ModelBase
{
public:
    BillResources();
    virtual ~BillResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BillResources members

    /// <summary>
    /// 
    /// </summary>

    BillResourceType getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const BillResourceType& value);

    /// <summary>
    /// 资源数量。
    /// </summary>

    int32_t getResourceNums() const;
    bool resourceNumsIsSet() const;
    void unsetresourceNums();
    void setResourceNums(int32_t value);


protected:
    BillResourceType resourceType_;
    bool resourceTypeIsSet_;
    int32_t resourceNums_;
    bool resourceNumsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BillResources_H_
