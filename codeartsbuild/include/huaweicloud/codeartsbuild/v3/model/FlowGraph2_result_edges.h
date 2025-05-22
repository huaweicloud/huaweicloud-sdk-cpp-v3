
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_edges_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_edges_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  FlowGraph2_result_edges
    : public ModelBase
{
public:
    FlowGraph2_result_edges();
    virtual ~FlowGraph2_result_edges();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowGraph2_result_edges members

    /// <summary>
    /// 依赖子任务ID
    /// </summary>

    std::string getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(const std::string& value);

    /// <summary>
    /// 被依赖的子任务ID
    /// </summary>

    std::string getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(const std::string& value);


protected:
    std::string from_;
    bool fromIsSet_;
    std::string to_;
    bool toIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_FlowGraph2_result_edges_H_
