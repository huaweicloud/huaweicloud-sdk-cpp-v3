
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListQuotasResult_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListQuotasResult_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/Resources.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListQuotasResult
    : public ModelBase
{
public:
    ListQuotasResult();
    virtual ~ListQuotasResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQuotasResult members

    /// <summary>
    /// 配额列表
    /// </summary>

    std::vector<Resources>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<Resources>& value);


protected:
    std::vector<Resources> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListQuotasResult_H_
