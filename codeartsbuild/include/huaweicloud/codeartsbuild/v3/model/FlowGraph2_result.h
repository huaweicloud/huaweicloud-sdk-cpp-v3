
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/FlowGraph2_result_edges.h>
#include <huaweicloud/codeartsbuild/v3/model/Vertices.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  FlowGraph2_result
    : public ModelBase
{
public:
    FlowGraph2_result();
    virtual ~FlowGraph2_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowGraph2_result members

    /// <summary>
    /// edges
    /// </summary>

    std::vector<FlowGraph2_result_edges>& getEdges();
    bool edgesIsSet() const;
    void unsetedges();
    void setEdges(const std::vector<FlowGraph2_result_edges>& value);

    /// <summary>
    /// record信息
    /// </summary>

    std::vector<Vertices>& getVertices();
    bool verticesIsSet() const;
    void unsetvertices();
    void setVertices(const std::vector<Vertices>& value);


protected:
    std::vector<FlowGraph2_result_edges> edges_;
    bool edgesIsSet_;
    std::vector<Vertices> vertices_;
    bool verticesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_H_
