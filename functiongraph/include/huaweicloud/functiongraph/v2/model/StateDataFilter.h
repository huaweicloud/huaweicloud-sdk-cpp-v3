
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StateDataFilter_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StateDataFilter_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输入输出过滤配置
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  StateDataFilter
    : public ModelBase
{
public:
    StateDataFilter();
    virtual ~StateDataFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StateDataFilter members

    /// <summary>
    /// 输入过滤表达式（JsonPath）
    /// </summary>

    std::string getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const std::string& value);

    /// <summary>
    /// 输出过滤表达式（JsonPath）
    /// </summary>

    std::string getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const std::string& value);


protected:
    std::string input_;
    bool inputIsSet_;
    std::string output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_StateDataFilter_H_
