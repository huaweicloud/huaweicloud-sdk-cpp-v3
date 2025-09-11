
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TempDetail_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TempDetail_H_


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
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  TempDetail
    : public ModelBase
{
public:
    TempDetail();
    virtual ~TempDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TempDetail members

    /// <summary>
    /// 模板输入
    /// </summary>

    std::string getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const std::string& value);

    /// <summary>
    /// 模板输出
    /// </summary>

    std::string getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const std::string& value);

    /// <summary>
    /// 警告信息
    /// </summary>

    std::string getWarning() const;
    bool warningIsSet() const;
    void unsetwarning();
    void setWarning(const std::string& value);


protected:
    std::string input_;
    bool inputIsSet_;
    std::string output_;
    bool outputIsSet_;
    std::string warning_;
    bool warningIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_TempDetail_H_
