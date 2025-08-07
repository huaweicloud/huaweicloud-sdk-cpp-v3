
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListResourceMappingResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListResourceMappingResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListResourceMappingResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResourceMappingResponse();
    virtual ~ListResourceMappingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceMappingResponse members

    /// <summary>
    /// 资源类型映射
    /// </summary>

    std::map<std::string, std::string>& getResourceMapping();
    bool resourceMappingIsSet() const;
    void unsetresourceMapping();
    void setResourceMapping(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> resourceMapping_;
    bool resourceMappingIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListResourceMappingResponse_H_
