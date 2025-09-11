
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListEcsSpecificationNewRequest
    : public ModelBase
{
public:
    ListEcsSpecificationNewRequest();
    virtual ~ListEcsSpecificationNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEcsSpecificationNewRequest members

    /// <summary>
    /// **参数解释**： 镜像类型。 **约束限制**： 以取值范围为准 **取值范围**： - 1：运维 - 2：加密 - 3：审计 **默认取值**：   不传则默认为审计 
    /// </summary>

    int32_t getImageBusinessType() const;
    bool imageBusinessTypeIsSet() const;
    void unsetimageBusinessType();
    void setImageBusinessType(int32_t value);


protected:
    int32_t imageBusinessType_;
    bool imageBusinessTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEcsSpecificationNewRequest& dereference_from_shared_ptr(std::shared_ptr<ListEcsSpecificationNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListEcsSpecificationNewRequest_H_
