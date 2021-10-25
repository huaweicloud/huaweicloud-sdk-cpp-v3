
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceId_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceId_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 保护实例Id
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ResourceId
    : public ModelBase
{
public:
    ResourceId();
    virtual ~ResourceId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceId members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ResourceId_H_
