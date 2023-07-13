
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListKeypairsRequest
    : public ModelBase
{
public:
    NovaListKeypairsRequest();
    virtual ~NovaListKeypairsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListKeypairsRequest members

    /// <summary>
    /// 查询返回秘钥数量限制。  在微版本2.35后支持
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 从marker指定的keypair的名称的下一条数据开始查询。  在微版本2.35后支持。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 微版本头
    /// </summary>

    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListKeypairsRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListKeypairsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_
