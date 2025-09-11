
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependencyVersionResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependencyVersionResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListDependencyVersionsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListDependencyVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDependencyVersionResponse();
    virtual ~ListDependencyVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDependencyVersionResponse members

    /// <summary>
    /// 依赖包列表
    /// </summary>

    std::vector<ListDependencyVersionsResult>& getDependencies();
    bool dependenciesIsSet() const;
    void unsetdependencies();
    void setDependencies(const std::vector<ListDependencyVersionsResult>& value);

    /// <summary>
    /// 下次读取位置
    /// </summary>

    int64_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int64_t value);

    /// <summary>
    /// 依赖包总数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<ListDependencyVersionsResult> dependencies_;
    bool dependenciesIsSet_;
    int64_t nextMarker_;
    bool nextMarkerIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependencyVersionResponse_H_
