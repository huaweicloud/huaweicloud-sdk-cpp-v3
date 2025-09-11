
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncCode_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncCode_H_


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
/// FuncCode结构返回体。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FuncCode
    : public ModelBase
{
public:
    FuncCode();
    virtual ~FuncCode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuncCode members

    /// <summary>
    /// 函数代码，如果不为空必须进行base64编码，为空时使用默认的代码。
    /// </summary>

    std::string getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const std::string& value);

    /// <summary>
    /// 函数代码链接。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);


protected:
    std::string file_;
    bool fileIsSet_;
    std::string link_;
    bool linkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncCode_H_
