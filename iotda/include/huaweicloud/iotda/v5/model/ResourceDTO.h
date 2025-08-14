
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResourceDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResourceDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ResourceDTO
    : public ModelBase
{
public:
    ResourceDTO();
    virtual ~ResourceDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceDTO members

    /// <summary>
    /// 资源id。例如，要查询的资源类型为device，那么对应的资源id就是device_id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ResourceDTO_H_
