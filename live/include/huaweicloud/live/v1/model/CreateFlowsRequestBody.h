
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsRequestBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsRequestBody_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/FlowSource.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建流请求体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateFlowsRequestBody
    : public ModelBase
{
public:
    CreateFlowsRequestBody();
    virtual ~CreateFlowsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFlowsRequestBody members

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 入流信息
    /// </summary>

    std::vector<FlowSource>& getSources();
    bool sourcesIsSet() const;
    void unsetsources();
    void setSources(const std::vector<FlowSource>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::vector<FlowSource> sources_;
    bool sourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateFlowsRequestBody_H_
