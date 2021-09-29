
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerId.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchUpdateServersNameResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdateServersNameResponse();
    virtual ~BatchUpdateServersNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchUpdateServersNameResponse members

    /// <summary>
    /// 提交请求成功后返回的响应列表。
    /// </summary>

    std::vector<ServerId>& getResponse();
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const std::vector<ServerId>& value);


protected:
    std::vector<ServerId> response_;
    bool responseIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameResponse_H_
